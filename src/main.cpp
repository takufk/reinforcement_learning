#include <iostream>
#include "n_armed_bandit_problem.h"

int main()
{
    const int n_arms = 10;
    const std::vector< double > win_probs = { 0.90, 0.80, 0.70, 0.60, 0.50, 0.40, 0.30, 0.20, 0.10, 0.00 };
    const std::vector< double > rewards = { 0.10, 0.20, 0.30, 0.40, 0.50, 0.60, 0.70, 0.80, 0.90, 1.00 }; 
    NArmedBandit env( n_arms, win_probs, rewards );
    
    env.transition();

    return 0;
}