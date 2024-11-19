#include <iostream>
#include <stack>
int trapRainWater(int heights[], int n)
{
    if (n == 0)return 0;
    std::stack<int> s;
    int totalWater = 0;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && heights[i] > heights[s.top()])
        {
            int top = s.top();
            s.pop();

            if (s.empty()) break;

            int left = s.top();
            int width = i - left - 1; 
            int height = std::min(heights[left], heights[i]) - heights[top]; 
            totalWater += width * height; 
        }
        s.push(i);
    }
    return totalWater;
}
int main()
{
    int heights[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(heights) / sizeof(heights[0]); 

    std::cout << "Total trapped rainwater: " << trapRainWater(heights, n) << std::endl;
    return 0;
}
