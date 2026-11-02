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