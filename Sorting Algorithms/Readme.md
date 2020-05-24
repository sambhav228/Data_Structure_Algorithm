# Sorting Algorithms

This repository consists of various Sorting Algorithms.

## Insertion Sort

One of the simplest methods to sort an array is an insertion sort. An example of an insertion sort
occurs in everyday life while playing cards. To sort the cards in your hand you extract a card, shift
the remaining cards, and then insert the extracted card in the correct place. This process is
repeated until all the cards are in the correct sequence. Both average and worst-case time is O(n2). 

### Theory
Starting near the top of the array in Figure 2-1(a), we extract the 3. Then the above elements are
shifted down until we find the correct place to insert the 3. This process repeats in Figure 2-1(b)
with the next number. Finally, in Figure 2-1(c), we complete the sort by inserting 2 in the correct
place. 

![screenshot_1](https://github.com/sambhav228/Data_Structure_Algorithm/blob/master/Sorting%20Algorithms/insert1.jpg)

Assuming there are n elements in the array, we must index through n - 1 entries. For each entry,
we may need to examine and shift up to n - 1 other entries, resulting in a O(n2) algorithm. The
insertion sort is an in-place sort. That is, we sort the array in-place. No extra memory is required.
The insertion sort is also a stable sort. Stable sorts retain the original ordering of keys when identical
keys are present in the input data. 

## Shell Sort

Shell sort, developed by Donald L. Shell, is a non-stable in-place sort. Shell sort improves on the
efficiency of insertion sort by quickly shifting values to their destination. Average sort time is O(n7/6),
while worst-case time is O(n4/3). 

### Theory
In Figure 2-2(a) we have an example of sorting by insertion. First we extract 1, shift 3 and 5 down
one slot, and then insert the 1, for a count of 2 shifts. In the next frame, two shifts are required
before we can insert the 2. The process continues until the last frame, where a total of 2 + 2 + 1 =
5 shifts have been made.
In Figure 2-2(b) an example of shell sort is illustrated. We begin by doing an insertion sort using a
spacing of two. In the first frame we examine numbers 3-1. Extracting 1, we shift 3 down one slot
for a shift count of 1. Next we examine numbers 5-2. We extract 2, shift 5 down, and then insert 2.
After sorting with a spacing of two, a final pass is made with a spacing of one. This is simply the
traditional insertion sort. The total shift count using shell sort is 1+1+1 = 3. By using an initial spacing
larger than one, we were able to quickly shift values to their proper destination. 

![screenshot_2](https://github.com/sambhav228/Data_Structure_Algorithm/blob/master/Sorting%20Algorithms/shell1.jpg)

