<h1><strong><em>Get Next Line (grade : 112)</em></strong></h1>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="400" height="200" /></div>
<p>In this project, it is intended to create a function that reads a given file and returns the next line, that means in the first iteration, gives the first line of the file, the second iteration the second line and so on. By the <em>rules given* </em>, and accordingly to <em>"the Norm" of 42 school* </em>, this has to be done in less then 5 functions of maximum 25 lines each.</p>
<p>The only allowed external functions were:</p>
<ul>
<li>read,</li>
<li>malloc,</li>
<li>free</li>
</ul>
<p>By studying the <tt><span style="color: #008080;">ssize_t</span> read(<span style="color: #0000ff;">int</span></tt>&nbsp;<em>fildes</em><tt>, <span style="color: #0000ff;">void</span> *</tt><em>buf</em><tt>, <span style="color: #0000ff;">size_t</span></tt>&nbsp;<em>nbyte</em><tt>)</tt> we can conclude that upon successful completion, read() returns a positive integer indicating the number of bytes actually read. Otherwise, the functions shall return -1, and once was read x bytes, then the next x bytes shall be readen in the next call for the read() function.</p>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/99777188/155604500-d36bd410-714e-4d83-a632-a2c7a1aee0b4.jpg" alt="https://user-images.githubusercontent.com/99777188/155604500-d36bd410-714e-4d83-a632-a2c7a1aee0b4.jpg" width="1200" height="775" /></div>
<p>We can see that its missing ft_memmcpy function in the Unit tester, the reason is that <strong>back in the days</strong> that this tester was made, <u>memccpy was a mandatory function</u>, and nowadays <strong>its not even asked for.</strong> I also found to be very usefull to run the 3 testers, since i passed in the unit one and after that i got KOs on Tripouille, and after i got everything right on Tripouille i still got one KO on War Machine. This is not due to one being better then the other, since one collegue of mine did a different order and got the same thing, so i can conclude that what is happening is that they <u><strong>complement</strong> each other very well</u>, and they test different aspect limits of the code on each test.</p>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/99777188/155854781-cca1bf7a-4372-4a45-b95d-61c401ce6f63.png" alt="https://user-images.githubusercontent.com/99777188/155854781-cca1bf7a-4372-4a45-b95d-61c401ce6f63.png" width="1100" height="210" /></div>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p><em>links of the testers:</em></p>
<p>Unit tester: https://github.com/alelievr/libft-unit-test</p>
<p>Tripouille tester: https://github.com/Tripouille/libftTester</p>
<p>War Machine tester: https://github.com/y3ll0w42/libft-war-machine</p>
