<h2>Aim:</h2>
<p>
    To understand and implement control flow statements in C++, including <code>for</code>, <code>while</code>, and <code>do-while</code> loops, and analyze their working with examples.
</p>

<h2>Software Used</h2>
<ul>
    <li><strong>Language:</strong> C++</li>
    <li><strong>Code Editor:</strong> Visual Studio Code</li>
</ul>

<h2>Theory:</h2>

<h3>1. <code>for</code> Loop</h3>
<p>
    The <code>for</code> loop is an entry-controlled loop, ideal when the number of iterations is known in advance. It has three parts: initialization, condition, and update. All three are included in the loop definition.
</p>
<pre><code>// Example in C++
for (int i = 0; i < 5; i++) {
    cout &lt;&lt; "Iteration " &lt;&lt; i &lt;&lt; endl;
}
</code></pre>
<p><strong>Use case:</strong> Fixed number of iterations.</p>

<h3>2. <code>while</code> Loop</h3>
<p>
    The <code>while</code> loop is also entry-controlled, but the initialization is done outside the loop. The loop continues to execute as long as the condition is true.
</p>
<pre><code>// Example in C++
int i = 0;
while (i &lt; 5) {
    cout &lt;&lt; "Iteration " &lt;&lt; i &lt;&lt; endl;
    i++;
}
</code></pre>
<p><strong>Use case:</strong> When the number of iterations is not known in advance and depends on a condition.</p>

<h3>3. <code>do-while</code> Loop</h3>
<p>
    The <code>do-while</code> loop is an exit-controlled loop. The loop body is executed at least once, even if the condition is false at the beginning.
</p>
<pre><code>// Example in C++
int i = 0;
do {
    cout &lt;&lt; "Iteration " &lt;&lt; i &lt;&lt; endl;
    i++;
} while (i &lt; 5);
</code></pre>
<p><strong>Use case:</strong> When the loop must run at least once regardless of the condition.</p>

<h3>Comparison Table</h3>
<table>
  <thead>
    <tr>
      <th>Loop Type</th>
      <th>Entry/Exit Controlled</th>
      <th>Minimum Iterations</th>
      <th>Condition Check</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>for</td>
      <td>Entry-controlled</td>
      <td>0</td>
      <td>Before loop body</td>
    </tr>
    <tr>
      <td>while</td>
      <td>Entry-controlled</td>
      <td>0</td>
      <td>Before loop body</td>
    </tr>
    <tr>
      <td>do-while</td>
      <td>Exit-controlled</td>
      <td>1</td>
      <td>After loop body</td>
    </tr>
  </tbody>
</table>
<h2><stong>Conclusion</stong></h2>
<p>
   Loops are essential part of programming and helps programmer to reduce the lines of code where there is patterns in part of loops also while and do while loop plays crucial role where iterations are not known so loops terminate after the condition is met.
</p>

