1. Скоби - Are brackets balanced
Описание:
Напишете функция, която приема низ, съдържащ различни видове скоби — кръгли скоби (), квадратни скоби [], къдрави скоби {} и триъгълни скоби <> — и проверява дали скобите в низа са правилно балансирани.
Скобите се считат за балансирани, ако всяка отваряща скоба има съответна затваряща скоба в правилния ред.

Забележка: Всички символи освен сковите се игнорират

Пример:

Вход: "( fh{  6* [a+b].} <>{ <>} )"

Изход: true

Вход: "(.[а)3]"

Изход: false 

2. Постфиксен израз - evaliatePostfix
Описание:

Даден е постфиксен (обратна полска нотация) израз, който трябва да бъде изчислен.
В постфиксния израз операторите следват операндите, така че изразът може да бъде изчислен чрез прилагане на операциите върху последните две стойности в стека.

Пример:

Вход: "53+82-*"

Изход: 48

Забележка числата са едноцифрени Обяснение: (5+3)(8-2) = 86 = 48

3. Акции - CalculateSpans
Описание:
Даден е масив от стойности на акции за последователни дни.

Трябва да намерите броя на дните преди текущия ден, през които стойността на акциите е била по-ниска или равна на стойността на текущия ден.

Пример:

Вход: [100, 80, 60, 70, 60, 75, 85]

Изход: [1, 1, 1, 2, 1, 4, 6]

Забележка: Решението на тази задача трябва да е със сложност по време O(n)

4. Дъждовна вода
Описание:
Даден е масив от височини на стълбове, където всеки стълб представлява височината на дадена точка.

След дъжд между стълбовете може да се задържи вода. Трябва да намерите колко вода може да бъде уловена между стълбовете.

Пример:

Вход: [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
5.
You are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.

 

Example 1:

Input: s = "abc"

Output: "abc"

Explanation:

There is no digit in the string.

Example 2:

Input: s = "cb34"

Output: ""

Explanation:

First, we apply the operation on s[2], and s becomes "c4".

Then we apply the operation on s[1], and s becomes "".

 

Constraints:

1 <= s.length <= 100
s consists only of lowercase English letters and digits.
The input is generated such that it is possible to delete all digits.

Изход: 6 

Забележка: Решението на тази задача трябва да е със сложност по време O(n)

6.Minimum string length after removing substrings
You are given a string s consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new "AB" or "CD" substrings.

 

Example 1:

Input: s = "ABFCACDB"
Output: 2
Explanation: We can do the following operations:
- Remove the substring "ABFCACDB", so s = "FCACDB".
- Remove the substring "FCACDB", so s = "FCAB".
- Remove the substring "FCAB", so s = "FC".
So the resulting length of the string is 2.
It can be shown that it is the minimum length that we can obtain.
Example 2:

Input: s = "ACBBD"
Output: 5
Explanation: We cannot do any operations on the string so the length remains the same.
 

Constraints:

1 <= s.length <= 100
s consists only of uppercase English letters.
