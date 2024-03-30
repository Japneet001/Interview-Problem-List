<h2>
    <a href="https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633">
        Check If The String Is A Palindrome
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>

You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

<p><strong>Note: </strong>String 'S' is NOT case sensitive.</p>

<strong>Example:</strong> 

Let <code>S = “c1 O$d@eeD o1c”</code>.

If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get <code>S = “c1odeedo1c”</code>, which is a palindrome. Hence, the given string is also a palindrome.

<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The very first line of input contains an integer 'T' denoting the number of test cases. 

The first line of every test case contains the string 'S'.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
For each test case, print “Yes” if 'S' is a palindrome, and “No” otherwise.

Print the output of each test case in a separate line.
</pre>

<p><strong>Note:</strong></p>
<pre>
You do not need to print anything, it has already been taken care of. Just implement the given function.
</pre>

<p><strong>Follow Up:</strong></p>
<pre>
Can you solve the problem using O(1) space complexity?
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>2 &lt;= Length(S) &lt;= 10<sup>4</sup></code></li>    
	<li><code>Time Limit: 1 sec</code></li>
        Where 'T' denotes the number of test cases and 'S' denotes the given string.
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
2
N2 i&nJA?a& jnI2n
A1b22Ba
<strong>Sample Output 1:</strong>
Yes
No
<strong>Explanation</strong>
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.
For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
<strong>Sample Output 2:</strong>
Yes
Yes
No
</pre>