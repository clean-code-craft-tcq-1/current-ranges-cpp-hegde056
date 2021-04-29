# Test Driven Ranges

This exercise extends the [Battery Monitoring] use-case.

The charging current varies during the process of charging.
We need to capture the range of current measurements -
what range of currents are most often encountered while charging.

> **DO NOT** jump into implementation! Read the example and the starting task below.

## Example

### Input

Consider a set of periodic current samples from a charging session to be:
`3, 3, 5, 4, 10, 11, 12`

### Functionality

The continuous ranges in there are: `3,4,5` and `10,11,12`.

The task is to detect the ranges and
output the number of readings in each range.

In this example,

- the `3-5` range has `4` readings
- the `10-12` range has `3` readings.

### Output

The expected output would be:

```
Range, Readings
3-5, 4
10-12, 3
```

## Tasks

Start test-driven development:

1. Establish quality parameters for your project: What is the maximum complexity you would allow? How much duplication would you consider unacceptable? What is the coverage you'll aim for?
Adapt/adopt/extend the `yml` files from one of your workflow folders.

1. Write the smallest possible failing test.
   	- commit : [648fc0f6754ee141029b4364885a9f9aaea8bd65](https://github.com/clean-code-craft-tcq-1/current-ranges-cpp-hegde056/commit/648fc0f6754ee141029b4364885a9f9aaea8bd65)

1. Write the minimum amount of code that'll make it pass.
 	- commit : [e27d4fe7f08d637ac07704fe1bc9be64ca790ad8](https://github.com/clean-code-craft-tcq-1/current-ranges-cpp-hegde056/commit/e27d4fe7f08d637ac07704fe1bc9be64ca790ad8)

1. Write the next failing test.
	- commit : [b7fc32194daf195dc777c6c52688f76050806f72](https://github.com/clean-code-craft-tcq-1/current-ranges-cpp-hegde056/commit/b7fc32194daf195dc777c6c52688f76050806f72) 
 	- Finally : [4e80d6c915537234342bb9262b1353ef10cb37da](https://github.com/clean-code-craft-tcq-1/current-ranges-cpp-hegde056/commit/4e80d6c915537234342bb9262b1353ef10cb37da) for unresolved failed test

Implement one failing test and at least one passing test:

- Passing Test : 
	- Finds the Number of consecutive ranges in the given series 
	- Finds the maximum number in the found ranges in the given series
	- Finds the minimum number in the found series in the given series
	- Finds the total count of numbers in each found range in the given series
	- Finds the minimum when negative temperature is provided
	- Finds No ranges when No temperature readings provided
	- Finds single range when single temperature reading provided
- Failing Test : 
	- Invalid input Character O input inplace of int O temperature reading 
