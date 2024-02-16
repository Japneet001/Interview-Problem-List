<h2>
    <a href="https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?">
        Intersection Of Tow Sorted Arrays
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>
You are given two arrays <code>A</code> and <code>B</code> of size <code>N</code> and <code>M</code> respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

<p><strong>Note: </strong>
    <ul>
        <li>1. The length of each array is greater than zero.</li>
        <li>2. Both the arrays are sorted in non-decreasing order.</li>
        <li>3. The output should be in the order of elements that occur in the original arrays.</li>
        <li>4. If there is no intersection present then return an empty array.</li>
    </ul>
</p>


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line of the input contains an integer 'T', denoting the number of test cases.
The first line of each test case contains two integers 'N' 'M', denoting the size of the two arrays.
The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.
The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
The only line of output of each test case contains 'K' space-separated integers which correspond to the intersection of the two arrays A and B.
The output of each test case will be printed on a separate line.
</pre>

<p><strong>Note:</strong></p>
<pre>
You do not need to print anything, it has already been taken care of. Just implement the given function.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>1 &lt;= N, M &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= A[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= B[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>Time Limit: 1 sec</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
<strong>Sample Output 1:</strong>
2 2 3
3   
<strong>Explanation</strong>
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
2
3 3 
1 4 5
3 4 5
1 1
3
6
<strong>Sample Output 2:</strong>
4 5
-1
</pre>