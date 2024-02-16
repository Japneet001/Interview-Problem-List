<h2>
    <a href="https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?">
        Duplicate in Array
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>
You are given an array <code>ARR</code> of size <code>N</code> containing each number between <code>1</code> and <code>N - 1</code> at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

<strong>For example:</strong> Consider <code>ARR = [1, 2, 3, 4, 4]</code>, the duplicate integer value present in the array is <code>4</code>. Hence, the answer is <code>4</code> in this case.

<p><strong>Note: </strong>A duplicate number is always present in the given array.</p>


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line of the input contains an integer, 'T,’ denoting the number of test cases.
The first line of each test case contains a single integer, 'N', denoting the number of elements in the array.
The second line of each test case contains 'N' space-separated integers denoting the elements of the array 'ARR'.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
For each test case, print a single integer - the duplicate element in the array.

Print the output of each test case in a separate line.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 10</code></li>
	<li><code>2 &lt;= N &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= ARR[i] &lt;= N - 1</code></li>
	<li><code>Time Limit: 1 sec</code></li>
    
    Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
<strong>Sample Output 2:</strong>
1
3
<strong>Explanation</strong>
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.
For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
<strong>Sample Output 2:</strong>
2
7
</pre>