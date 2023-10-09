# Probability of F1 female genotype (Rr)
probability_f1_Rr = 1.0

# Probability of test-cross male genotype (rr)
probability_test_cross_rr = 0.5

# Probability of offspring genotype (Rr) from the test cross
probability_offspring_Rr = (probability_f1_Rr * probability_test_cross_rr)

# Calculate the percentage of male fertile offspring
percentage_male_fertile = probability_offspring_Rr * 100

print(f"The percentage of the population that is male fertile is {percentage_male_fertile:.2f}%")

