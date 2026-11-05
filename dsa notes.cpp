// LC 453: Incrementing all except one is equivalent to decrementing one.
// Hence, bring everything to the minimum.

// Incrementing n-1 elements by 1 has the same effect on equality as 
// decrementing 1 element by 1.
// Therefore, we can think of bringing every element down to the minimum element.

// LC 462: You can move in either direction. Hence, bring everything to 
// the median to minimize total absolute distance.

// We actually ARE increasing or decreasing elements one by one
// Let's take [1, 2, 9, 10].

// Suppose our target is 9.
// - 1 → 9: Increment 8 times.
// - 2 → 9: Increment 7 times.
// - 9 → 9: 0 times.
// - 10 → 9: Decrement 1 time.
// Total = 16 moves.

// Pattern 1: Minimum element

// When the operation effectively allows us to decrease one element while increasing all others, think about bringing everything to the minimum.

// Pattern 2: Median

// When the goal is to minimize the sum of absolute differences, think about the median.

// Pattern 3: Mean vs Median
// - Mean minimizes the sum of squared differences.
// - Median minimizes the sum of absolute differences.

// What you notice	What to think about
// Absolute difference	Can I convert it into a range?
// Sorted array	Can I use binary search?
// Find whether an element exists	Binary search / set
// Find elements within a range	Lower bound / upper bound
// Repeated nested loops	Can I eliminate one loop?
// Minimum possible maximum	Binary search on answer

// Look at the condition:
// |x - y| <= d
// Whenever you see an absolute difference, ask yourself:
// Can I convert this mathematical condition into a range?
// Why?
// Because absolute difference tells us how far apart two numbers are.
// For example:
// |x - y| <= 2
// If x = 5, which values can y have?
// - y = 3 -> Difference = 2
// - y = 4 -> Difference = 1
// - y = 5 -> Difference = 0
// - y = 6 -> Difference = 1
// - y = 7 -> Difference = 2
// Notice something?
// All valid values of y lie between 3 and 7.
// Therefore:
// x - d <= y <= x + d
// This is how we convert an absolute difference condition into a range.
// 3. Recognise the opportunity
// Once we get this range, we only need to check whether at least one element exists inside it.
// If the array is sorted, we can use Binary Search (lower_bound) to check this efficiently.