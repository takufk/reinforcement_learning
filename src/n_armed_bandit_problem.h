#ifndef N_ARMED_BANDIT
#define N_ARMED_BANDIT

#include "abstract_environment.h"

#include <vector>
#include <array>

class NArmedBandit
    : public AbstructEnvironment
{
private:
    const int M_n_arms;
    const std::vector< const double > M_win_probs;
    const std::vector< const double > M_rewards;

public:
    NArmedBandit( const int n_arms,
                  const std::vector< const double > win_probs,
                  const std::vector< const double > rewards )
    : M_n_arms( n_arms ),
      M_win_probs( win_probs ),
      M_rewards( M_rewards )
    {
        if ( M_n_arms != M_win_probs.size() 
             || M_n_arms != M_rewards.size() )
        {
            std::cerr << "Error! Win probs and Rewards must be the same size as the number of arms... Exit..."
                      << std::endl;
            std::exit(1);
        }
    }
    ~NArmedBandit()
    {
    }

    void transition() override;
};
#endif