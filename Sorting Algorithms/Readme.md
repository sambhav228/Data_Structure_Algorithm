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

Various spacings may be used to implement a shell sort. Typically the array is sorted with a large
spacing, the spacing reduced, and the array sorted again. On the final sort, spacing is one. Although
the shell sort is easy to comprehend, formal analysis is difficult. In particular, optimal spacing values
elude theoreticians. Knuth recommends a technique, due to Sedgewick, that determines spacing
h based on the following formulas:
hs = 9·2s - 9·2s/2 + 1 if s is even
hs = 8·2s - 6·2(s+1)/2 + 1 if s is odd
These calculations result in values (h0,h1,h2,…) = (1,5,19,41,109,209,…). Calculate h until 3ht >=
N, the number of elements in the array. Then choose ht-1 for a starting value. For example, to sort
150 items, ht = 109 (3·109 >= 150), so the first spacing is ht-1, or 41. The second spacing is 19,
then 5, and finally 1. 

## Quicksort

Although the shell sort algorithm is significantly better than insertion sort, there is still room for
improvement. One of the most popular sorting algorithms is quicksort. Quicksort executes in
O(n lg n) on average, and O(n2) in the worst-case. However, with proper precautions, worst-case
behavior is very unlikely. Quicksort is a non-stable sort. It is not an in-place sort as stack space is
required. 

### Theory
The quicksort algorithm works by partitioning the array to be sorted, then recursively sorting each
partition. In Partition (Figure 2-3), one of the array elements is selected as a pivot value. Values
smaller than the pivot value are placed to the left of the pivot, while larger values are placed to the
right.

![screenshot_3](https://github.com/sambhav228/Data_Structure_Algorithm/blob/master/Sorting%20Algorithms/quick1.jpg)

In Figure 2-4(a), the pivot selected is 3. Indices are run starting at both ends of the array. One index
starts on the left and selects an element that is larger than the pivot, while another index starts on
the right and selects an element that is smaller than the pivot. In this case, numbers 4 and 1 are
selected. These elements are then exchanged, as is shown in Figure 2-4(b). This process repeats
until all elements to the left of the pivot <= the pivot, and all elements to the right of the pivot are >=
the pivot. QuickSort recursively sorts the two subarrays, resulting in the array shown in Figure 2-
4(c). 

![screenshot_4]()
