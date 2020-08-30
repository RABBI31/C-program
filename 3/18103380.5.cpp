#include<iostream>
#define maxVote 10
using namespace std;

int main()
{
    int vote,s,t,r,
Aparty = 0,
Bparty = 0,
Cparty = 0,
Dparty = 0,
Eparty = 0,
spoiltBallots = 0;

cout<<"\nPress 1 to vote 'A' party\nPress 2 to 'B' party"
<<"\nPress 3 to vote 'C' party\nPress 4 to vote 'D' party"
<<"\nPress 5 to vote 'E' party"<<endl;
cout<<"\nEnterall(total : 10) one by one votes \n";

for(int i=0;i<maxVote;i++)
    {
cout<<"Enter vote : ";
cin>>vote;
        switch(vote)
        {
        case 1:
Aparty++;
            break;
        case 2:
Bparty++;
            break;
        case 3:
Cparty++;
            break;
        case 4:
Dparty++;
            break;
        case 5:
Eparty++;
            break;
        default:
spoiltBallots++;
            break;
        }
    }

cout<<"\nParty 'A' gets "<<Aparty<<" votes out of "<<maxVote<<" votes "
<<"\nParty 'A' gets "<<(float)Aparty/maxVote*100<<"% votes of total votes"<<endl;

cout<<"\nParty 'B' gets "<<Bparty<<" votes out of "<<maxVote<<" votes "
<<"\nParty 'B' gets "<<(float)Bparty/maxVote*100<<"% votes of total votes"<<endl;

cout<<"\nParty 'C' gets "<<r<<" votes out of "<<maxVote<<" votes "
<<"\nParty 'C' gets "<<(float)Cparty/maxVote*100<<"% votes of total votes"<<endl;

cout<<"\nParty 'D' gets "<<s<<" votes out of "<<maxVote<<" votes "
<<"\nParty 'D' gets "<<(float)Dparty/maxVote*100<<"% votes of total votes"<<endl;

cout<<"\nParty 'E' gets "<<t<<" votes out of "<<maxVote<<" votes "
<<"\nParty 'E' gets "<<(float)Eparty/maxVote*100<<"% votes of total votes"<<endl;
cout<<"\n"<<spoiltBallots<<" votes are spoilt ballots "<<endl;
    return 0;
}

