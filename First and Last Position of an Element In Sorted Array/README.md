<h2>
    <a href="https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?">
        First and Last Position of an Element In Sorted Array
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p>

You have been given a sorted array/list <code>arr</code> consisting of <code>n</code> elements. You are also given an integer <code>k</code>.



Now, your task is to find the first and last occurrence of <code>k</code> in <code>arr</code>.

<p><strong>Note: </strong>
    <ul>
        <li>If <code>k</code> is not present in the array, then the first and the last occurrence will be -1.</li>
        <li><code>arr</code> may contain duplicate elements.</li>
    </ul>
</p>

<p>&nbsp;</p>
<p>
<strong>Example:</strong>
<p>
<em>Input: </em> 
'arr' = [0,1,1,5] , 'k' = 1
</p>
<p>
<em>Output: </em> 
1 2
</p>
<p>
<em>Explanation: </em> 
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
</p>
</p>

<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line of each test case contains two single-space separated integers ‘n’ and ‘k’, respectively.
The second line of each test case contains ‘n’ single space-separated integers denoting the elements of the array/list 'arr'.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
Return two single-space separated integers denoting the first and the last occurrence of ‘k’ in 'arr', respectively.
</pre>

<p><strong>Note:</strong></p>
<pre>
You do not need to print anything; it has already been taken care of. Just implement the given function.
</pre>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
8 2
0 0 1 1 2 2 2 2
<strong>Sample Output 1:</strong>
4 7
<strong>Explanation</strong>
For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
4 2
1 3 3 5
<strong>Sample Output 2:</strong>
-1 -1
</pre>



<p><strong>Expected Time Complexity:</strong> Try to do this in O(log(n)). </p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>9</sup></code></li>
	<li><code>0 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>Time Limit: 1 sec</code></li>        
</ul>