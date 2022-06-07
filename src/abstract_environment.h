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
};


#endif