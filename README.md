# Shifting-Operators-in-C-
## shifting left and right using different type in C language

The numbers can be shown as binary therefore we have to evaluate them as binary when we apply shifting. <br />
Let us demonstrate some of numbers in 8 bit and after that shift left and right. <br />

For example; <br />
<pre>int a = 12; then a = 0000 1100 or int b = 2; then b = 0000 0010 </pre>
Now if we apply left or right shift to these numbers then shifting left or right as a whole.

### Left Shift
Using '<<' character for the left shift and then we can say that its syntax  'value << given number'  like this. <br />
Assume that we have a binary number like this 0001 0001 (decimal 17) and aplly left shift (00010001 << 1);
<pre>
      0001 0001 << 1 -> 0010 0010 that is one time shif left
      0001 0001 << 2 -> 0100 0100 two times and then,
      .     .
      .     .
      .     .
      goes to the end of bits. For instance if the computer has 32 bit cpu then finish in 32 
      or 64 finish in 64.  
</pre>
Important point in this example is shifting left looks like multiply by 2 because we make shifting on binary.


### Right Shift
Using '>>' character for the right shift and then we can say that its syntax  'value >> given number'  like this. <br />
Assume that we have a binary number like this 0001 0010 (decimal 18) and aplly right shift (00010010 >> 1);
<pre>
      0000 1001 >> 1 -> 0000 0010 that is one time shif left
      0000 0100 >> 2 -> 0100 0100 two times and then,
      .     .
      .     .
      .     .
      goes to the end of bits. For instance if the computer has 32 bit cpu then finish in 32 
      or 64 finish in 64.
</pre>
Important point in this example is shifting right looks like  divided by 2 because we make shifting on binary.<br />
However we get an even number as decimal above. Let us get an odd number and shift right again. <br />
This time get 0001 0011 (decimal 19);
<pre>
      0001 0011 >> 1 -> 0000 1001 (9) 
      0001 0011 >> 2 -> 0000 0100 (4)
      In here we can see that divide by 2 and get it without remaining. If continue to the first example 
      of right shift then do same operation as well.
</pre>
<br />
<b>Note that the numbers should be possitive. Otherwise these methods won't work at this point.<b/> <br />
<b>They work only if numbers are positive.</b>

