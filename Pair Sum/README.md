<h2>
    <a href="https://www.codingninjas.com/studio/problems/pair-sum_697295?">
        Pair Sum
    </a>
</h2>

<h3>Easy</h3>

<hr>

<p> You are given an integer array <code>ARR</code> of size <code>N</code> and an integer <code>S</code>. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals <code>S</code>.

<strong>Note:</strong>
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.


<p>&nbsp;</p>
<p><strong>Input Format:</strong></p>
<pre>
The first line of input contains two space-separated integers <code>N</code> and <code>S</code>, denoting the size of the input array and the value of <code>S</code>.

The second and last line of input contains <code>N</code> space-separated integers, denoting the elements of the input array: ARR[i] where <code>0 &lt;= i &lt; N</code>.
</pre>

<p><strong>Output Format:</strong></p>
<pre>
Print <code>C</code> lines, each line contains one pair i.e two space-separated integers, where <code>C</code> denotes the count of pairs having sum equals to given value <code>S</code>.

</pre>

<p><strong>Note:</strong></p>
<pre>
You are not required to print the output, it has already been taken care of. Just implement the function.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= N &lt;= 10<sup>3</sup></code></li>
	<li><code>-10<sup>5</sup> &lt;= ARR[i] &lt;= 10<sup>5</sup></code></li>
	<li><code>-2 * 10<sup>5</sup> &lt;= S &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>Time Limit: 1 sec</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="TestCases">Sample Test Cases:</strong></p>
<pre>
<strong>Sample Input 1:</strong> 
5 5
1 2 3 4 5
<strong>Sample Output 1:</strong>
1 4
2 3 
<strong>Explanation</strong>
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
</pre>

<pre>
<strong>Sample Input 2:</strong> 
5 0
2 -3 3 3 -2
<strong>Sample Output 2:</strong>
-3 3
-3 3
-2 2
</pre>