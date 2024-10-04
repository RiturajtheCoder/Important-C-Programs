//Design a class to manage a shopping list allowing addition, removal, and display of items along with total cost calculation

//11.1
//With user defined input
/*#include <iostream>
using namespace std;
const int MAX_ITEMS = 100;
class Shopping {
private:
    int item_code[MAX_ITEMS];
    int item_price[MAX_ITEMS];
    int counter;
public:
    void count() {
        counter = 0;
    }
    void getItem();
    void displaySum();
    void itemRemove(int a);
    void Display();
};
void Shopping::getItem() {
    cout << "\n\t Enter item code: ";
    cin >> item_code[counter];
    cout << "\n\t Enter item price: ";
    cin >> item_price[counter];
    counter++;
}
void Shopping::itemRemove(int a) {
    for (int i = 0; i < counter; i++) {
        if (item_code[i] == a) {
            item_price[i] = 0;
            cout << "\n\t Item removed." << endl;
            return;
        }
    }
    cout << "\n\t Item not found." << endl;
}
void Shopping::displaySum() {
    float sum = 0;
    for (int i = 0; i < counter; i++) {
        sum += item_price[i];
    }
    cout << "\n\t Total price: " << sum << endl;
}
void Shopping::Display() {
    cout << "\n\t Here is the shopping list:";
    cout << "\n\t Item Code \t Price" << endl;
    for (int i = 0; i < counter; i++) {
        if (item_price[i] != 0) { // Display only non-zero items
            cout << "\n\t " << item_code[i] << "\t\t " << item_price[i];
        }
    }
    cout << endl;
}
int main() {
    Shopping list;
    list.count();
    int x;
    do {
        cout << "\n\t 1. Add Items";
        cout << "\n\t 2. Total Value";
        cout << "\n\t 3. Remove Item";
        cout << "\n\t 4. See the full list";
        cout << "\n\t 5. Exit";
        cout << "\n\t Enter choice: ";
        cin >> x;

        switch (x) {
        case 1: {
            list.getItem();
            break;
        }
        case 2: {
            list.displaySum();
            break;
        }
        case 3: {
            int a;
            cout << "\n\t Enter item code to remove: ";
            cin >> a;
            list.itemRemove(a);
            break;
        }
        case 4: {
            list.Display();
            break;
        }
        case 5: {
            cout << "\n\t Exiting... ";
            break;
        }
        default: {
            cout << "\n\t You entered a wrong choice.";
            break;
        }
        }
    } while (x != 5);

    return 0;
}*/

//11.2
//Without user defined input
#include <iostream>
using namespace std;
class Shopping {
private:
    int item_code[5];
    int item_price[5];
    int counter;
public:
    Shopping(){
        counter = 0;
        addItem(101, 50);
        addItem(102, 100);
        addItem(103, 200);
    }
    void addItem(int code, int price) {
        item_code[counter] = code;
        item_price[counter] = price;
        counter++;
    }
    void removeItem(int code) {
        for (int i=0;i<counter;i++){
            if (item_code[i]==code){
                item_price[i]=0;
                cout<<"\n\t Item removed.\n";
                return;
            }
        }
        cout<<"\n\t Item not found. \n";
    }
    void displayItems() {
        cout<<"\nShopping List : \n";
        cout<<"\n\t Item Code \t Item Price \n";
        for(int i=0;i<counter;i++) {
            if(item_price[i]!=0){
                cout<<item_code[i]<<"\t\t\t"<<item_price[i]<<"\n";
            }
        }
    }
    void displayTotalCost() {
        int total=0;
        for (int i=0;i<counter;i++) {
            total+=item_price[i];
        }
        cout<<"\n Total Cost : "<<total<<"\n";
    }
};
int main() {
    Shopping list;
    list.displayItems();
    list.displayTotalCost();
    list.removeItem(102);
    list.displayItems();
    list.displayTotalCost();
    return 0;
}
