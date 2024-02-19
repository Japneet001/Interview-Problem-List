<h2>
    <a href="https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554">
        Search In Rotated Sorted Array
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>
You have been given a sorted array/list <code>arr</code> consisting of <code>n</code> elements. You are also given an integer <code>k</code>.

Now the array is rotated at some pivot point unknown to you.

For example, if <code>arr = [1, 3, 5, 7, 8]</code>, then after rotating <code>arr</code> at index <code>3</code>, the array will be <code>arr = [7, 8, 1, 3, 5]</code>.

Now, your task is to find the index at which <code>k</code> is present in <code>arr</code>.

<p><strong>Note: </strong>
    <ul>
        <li>If <code>k</code> is not present in <code>arr</code>, then print <code>-1</code>.</li>
        <li>There are no duplicate elements present in <code>arr</code>.</li>
        <li><code>arr</code> can be rotated only in the right direction.</li>
    </ul>
</p>

<p>&nbsp;</p>
<p>
<strong>Example:</strong>
<p>
<em>Input: </em> 
'arr' = [12, 15, 18, 2, 4] , 'k' = 2
</p>
<p>
<em>Output: </em> 
3
</p>
<p>
<em>Explanation: </em> 
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).
</p>
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



<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
4 3
8 9 4 5
<strong>Sample Output 1:</strong>
-1
<strong>Explanation</strong>
For the test case, 3 is not present in the array. Hence the output will be -1.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
4 3
2 3 5 8
<strong>Sample Output 2:</strong>
1
<strong>Explanation</strong>
1
</pre>

<p>&nbsp;</p>
<p><strong>Expected Time Complexity:</strong></p>
Try to do this in O(log(n)). 

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>9</sup></code></li>
    <li><code>0 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>Time Limit: 1 sec</code></li>
</ul>