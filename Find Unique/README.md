<h2>
    <a href="https://www.codingninjas.com/studio/problems/find-unique_625159?">
        Find Unique
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>You have been given an integer array/list(ARR) of size <code>N</code>. Where <code>N</code> is equal to <code>[2M + 1]</code>. Now, in the given array/list, '<code>M</code>' numbers are present twice and one number is present only once. You need to find and return that number which is unique in the array/list.

<p><strong>Note: </strong>Unique element is always present in the array/list according to the given condition.</p>


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
For each test case, print the unique element present in the array.

Output for every test case will be printed in a separate line.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= t &lt;= 10<sup>2</sup></code></li>
	<li><code>0 &lt;= N &lt;= 10<sup>3</sup></code></li>
	<li><code>Time Limit: 1 sec</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
1
7
2 3 1 6 3 6 2
<strong>Sample Output 2:</strong>
1
<strong>Explanation</strong>
The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
<strong>Sample Output 2:</strong>
4
<strong>Explanation</strong>
In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once. So, the unique number in this array is 4.

10
<strong>Explanation</strong>
In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.
</pre>