#include "ELEMENT.h"
#ifndef CSE_H
#define CSE_H

class CSE
{
    public:
        CSE ( Parser * parser );
        virtual ~CSE ( ) { };
        void Flatern ( TreeNode * index );
        void Execute ( );
        void print ( );
        int count_environment_num ( );
        EnvironmentElement * getCurrentEnvironment ( );

    private:
        TreeNode * root;
        vector <ELEMENT * > Control;
        vector <ELEMENT * > Stack;
        EnvironmentElement * CurrentEnvironment;
        void LeftRecusive ( TreeNode * index );
        void CSE_Machine ( );
        int m;
};

ELEMENT * TreeNode_To_Element ( TreeNode * node );
#endif // CSE_H