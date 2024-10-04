//Design a class that stimulates an atm, managing acount number, balance and transactions live mini statement, withdrawals and transfers

//12
//Using user defined input
#include<iostream>
using namespace std;
class ATM{
    private:
        int account_number;
        float balance;
        float last_withdrawal;
        float last_transfer;
    public:
        ATM(int acc_no,float bal){
            account_number=acc_no;
            balance=bal;
            last_withdrawal=0;
            last_transfer=0;
        }
        void checkBalance(){
            cout<<"\n\t Current Balance : Rs. "<<balance<<endl;
        }
        void withdraw(float amount){
            if(amount<=balance){
                balance-=amount;
                last_withdrawal=amount;
                cout<<"\n\t Withdrawal Successful. New Balance : Rs. "<< balance << endl;
            }else{
                cout<<"\n\t Insufficient funds."<<endl;
            }
        }
        void transfer(float amount){
            if(amount<=balance){
                balance-=amount;
                last_transfer=amount;
                cout<<"\n\t Transfer Successful. New Balance : Rs. "<<balance<<endl;
            }else{
                cout << "\n\tInsufficient funds." << endl;
            }
        }
        void miniStatement(){
            cout<<"\n\tMini Statement : ";
            cout<<"\n\t Last Withdrawal : Rs. "<<last_withdrawal;
            cout <<"\n\t Last Transfer: Rs. "<<last_transfer;
            cout <<"\n\t Current Balance : Rs. "<<balance<<endl;
        }
};
int main(){
    int account_no;
    float initial_balance;  
    cout<<"\n\t Enter Account Number : ";
    cin>>account_no;
    cout<<"\n\t Enter Initial Balance : ";
    cin>>initial_balance;
    ATM atm(account_no,initial_balance);
    int choice;
    do{
        cout<<"\n\t ATM Menu : ";
        cout<<"\n\t  1. Check Balance ";
        cout<<"\n\t  2. Withdraw Money ";
        cout<<"\n\t  3. Transfer Money ";
        cout<<"\n\t  4. Mini Statement ";
        cout<<"\n\t  5. Exit ";
        cout<<"\n\t  Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                atm.checkBalance();
                break;
            case 2:
                float withdraw_amount;
                cout<<"\n\t Enter amount to withdraw : ";
                cin>>withdraw_amount;
                atm.withdraw(withdraw_amount);
                break;
            case 3:
                float transfer_amount;
                cout<<"\n\t Enter amount to transfer : ";
                cin>>transfer_amount;
                atm.transfer(transfer_amount);
                break;
            case 4:
                atm.miniStatement();
                break;
            case 5:
                cout<<"\n\t Exiting... "<<endl;
                break;
            default:
                cout<<"\n\tInvalid choice. Please try again."<<endl;
        }
    } while(choice!=5);
    return 0;
}
