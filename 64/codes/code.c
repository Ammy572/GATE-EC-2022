#include <stdio.h>
#include <stdlib.h>

#define NUM_TRIALS 10000

int main() {
  // Define the probability of the offspring inheriting the R allele.
  double p = 0.5;

  // Initialize a counter for the number of male fertile offspring.
  int num_fertile = 0;

  // Simulate NUM_TRIALS test crosses.
  for (int i = 0; i < NUM_TRIALS; i++) {
    // Generate a random number between 0 and 1.
    double r = (double)rand() / RAND_MAX;

    // If the random number is less than or equal to p, the offspring is male fertile.
    if (r <= p) {
      num_fertile++;
    }
  }

  // Calculate the percentage of the population that is male fertile.
  double fertile_percentage = (double)num_fertile / NUM_TRIALS * 100.0;
  double theoretical_fertile_perc = p * 100.0;
  // Print the results.
  printf("The theoretical result is %.2f%%. \n", theoretical_fertile_perc);
  printf("The simulated result is %.2f%%.\n", fertile_percentage);

  return 0;
}

