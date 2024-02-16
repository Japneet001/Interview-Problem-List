<h2>
    <a href="https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028?">
        3Sum
    </a>
</h2>

<h3>Moderate</h3>

<hr>

<p>
You are given an array/list ARR consisting of <code>N</code> integers. Your task is to find all the distinct triplets present in the array which adds up to a given number <code>K</code>.

An array is said to have a triplet <code>{ARR[i], ARR[j], ARR[k]}</code> with sum = <code>K</code> if there exists three indices <code>i</code>, <code>j</code> and <code>k</code> such that <code>i!=j</code>, <code>j!=k</code> and <code>i!=j</code> and <code>ARR[i] + ARR[j] + ARR[k] = K</code>.


<p><strong>Note: </strong>
    <ul>
        <li>You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.</li>
        <li>The elements in the array need not be distinct.</li>
        <li>If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".</li>
    </ul>
</p>


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line of the input contains an integer T, denoting the number of test cases.
The first line of each test case contains the integer N, denoting the size of the array.
The second line of each test case contains N space-separated integers denoting the array elements.
The third line of each test case contains the integer K, denoting the required sum for each triplet.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
For each test case, every line of output contains three spaced integers denoting a valid triplet as described in the statement. Refer to sample input 2 for more clarification.
</pre>

<p><strong>Note:</strong></p>
<pre>
You do not need to print anything, it has already been taken care of. Just implement the given function.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 50</code></li>
	<li><code>1 &lt;= N &lt;= 10<sup>3</sup></code></li>
	<li><code>-10<sup>6</sup> &lt;= ARR[i] &lt;= 10<sup>6</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= K &lt;= 10<sup>9</sup></code></code></li>
	<li><code>Time Limit: 1 sec</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
1
5
10 5 5 5 2
12
<strong>Sample Output 1:</strong>
5 5 2 
<strong>Explanation</strong>
5 5 2 is the only triplet that adds up to 15. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.
</pre>

<pre>
<strong>Sample Input 2:</strong> 
3
6
1 2 3 1 2 3
6
4
1 2 3 4 
11
6
1 1 2 2 1 1
4
<strong>Sample Output 2:</strong>
1 2 3
-1
1 1 2
<strong>Explanation</strong>
In the first input, (1, 2, 3) is the only unique triplet that adds up to six.
In the second input, since there are no such triplets, we print -1.
For the third input, the only distinct triplet is (1, 1, 2), so just print 1 1 2.
</pre>