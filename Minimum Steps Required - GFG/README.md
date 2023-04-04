# Minimum Steps Required
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">str</strong> consisting of only two characters <strong style="user-select: auto;">'a'</strong>&nbsp;and <strong style="user-select: auto;">'b'</strong>. You need to find the minimum steps required to make the string empty by removing&nbsp;consecutive <strong style="user-select: auto;">a's</strong> and <strong style="user-select: auto;">b's</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">str = "bbaaabb"</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">Operation 1: Removal of all <strong style="user-select: auto;">a's</strong> modifies str to "bbbb".
Operation 2: Removal of all remaining <strong style="user-select: auto;">b's</strong> makes str
empty.
Therefore, the minimum number of operations required
is 2.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
str = "aababaa"
<strong style="user-select: auto;">Output:</strong>
3
<strong style="user-select: auto;">Explanation:</strong>
Operation 1: Removal of b's modifies str to "aaabaa".
Operation 2: Removal of b's modifies str = "aaaaa".
Operation 3: Removal of all remaining a's makes str 
empty.
Therefore, the minimum number of operations required 
is 3.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You need to complete the function <strong style="user-select: auto;">minSteps()&nbsp;</strong>which takes a string <strong style="user-select: auto;">str&nbsp;</strong>as the only input parameter and returns an integer, denoting the minimum steps required to make the string empty.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Expected Time Complexity:&nbsp;</span></strong><span style="font-size: 18px; user-select: auto;">O(N), where N = length of string <strong style="user-select: auto;">str<br style="user-select: auto;">
Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= str.length() &lt;= 10<sup style="user-select: auto;">5</sup></span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">'a' &lt;= str[i] &lt;= 'b'&nbsp;</span></li>
</ul>
</div>