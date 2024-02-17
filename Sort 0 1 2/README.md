<h2>
    <a href="https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?">
        Sort 0 1 2
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>
You have been given an integer array / list(ARR) of size <code>N</code>. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

<p><strong>Note: </strong> Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array / list just once.
</p>


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first line of each test case contains an Integer 'N' denoting the size of the array/list.
The second line of each test case contains 'N' space-separated Integers denoting the array/list.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
For each test case/query, print the sorted array/list(ARR) as space-separated Integers.
Output for every test case will be printed in a separate line.
</pre>

<p><strong>Note:</strong></p>
<pre>
You need to change in the given array/list itself. Hence, no need to return or print anything.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 10</code></li>
	<li><code>1 &lt;= N &lt;= 5 * (10<sup>5</sup>)</code></li>
	<li><code>0 &lt;= ARR[i] &lt;= 2</code></li>
	<li><code>Time Limit: 1 sec</code></li>
        
        Where 'N' is the size of the given array/list.
        And, ARR[i] denotes the i-th element in the array/list.
</ul>


<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2
<strong>Sample Output 1:</strong>
0 0 1 1 2 2
0 1 1 1 2 2 2
</pre>

<pre>
<strong>Sample Input 2:</strong> 
2
7
2 2 2 1 1 1 0
6
2 1 2 0 1 0
<strong>Sample Output 2:</strong>
0 1 1 1 2 2 2
0 0 1 1 2 2
</pre>