#ifndef ABSTRUCT_ENVIRONMENT
#define ABSTRUCT_ENVIRONMENT

class AbstructEnvironment
{
private:
    
public:
    AbstructEnvironment()
    {
    }

    ~AbstructEnvironment()
    {
    }

    virtual
    void transition() = 0;

    // TODO
    // virtual
    // void step( const Action action, Environment & next_env, double & reward, bool & done ) = 0;
};


#endif