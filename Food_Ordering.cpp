#include <bits/stdc++.h>
using namespace std;

signed main(){
    char pizza1[]="Chicken Dominator", pizza2[]="Pepper Barbecue Chicken", pizza3[]="Peri Peri", pizza4[]="Veggie Paradise";
    char burg1[]="Zinger Burger", burg2[]="Chicken Burger", burg3[]="Spicy Paneer Burger";
    char sand1[]="Veg Cheese Club Sandwich", sand2[]="Chicken Club Sandwich", sand3[]="Grilled Veg Sandwich";
    char roll1[]="Chicken Spring Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Kathi Roll";
    char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Hyderabadi Biryani";
    char name[30], gotostart;
    string flav;
    int choice=0, pchoice1, pchoice2, quantity,t=0;

    cout<<"\t\t\t------------ ANKUSH'S FAST FOOD ------------\n\n";
    cout<<"Please Enter Your Name: ";
    cin.getline(name,20);
    cout<<"\nHello "<<name<<"!\n\nWhat would you like to order?\n\n";

    beginning:

    cout<<"\t\t\t------------ MENU ------------\n\n";
    cout<<"1)Pizza\n";
    cout<<"2)Burger\n";
    cout<<"3)Sandwich\n";
    cout<<"4)Rolls\n";
    cout<<"5)Biryani\n";
    cout<<"Please enter your choice: \n\n";
    cin>>choice;

    if(choice==1){
        cout<<"\n1)"<<pizza1<<"\n";
        cout<<"2)"<<pizza2<<"\n";
        cout<<"3)"<<pizza3<<"\n";
        cout<<"4)"<<pizza4<<"\n";
        cout<<"Please choose your flavour: \n\n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=5){
            cout<<"\n1)Small Rs. 300"<<"\n2)Medium Rs. 500"<<"\n3)Large Rs. 900\n";
            cout<<"Choose Size Please: ";
            cin>>pchoice2;
            if(pchoice2>=1 && pchoice2<=3){
                cout<<"How many of them do you want: ";
                cin>>quantity;
                switch(pchoice2){
                    case 1: choice = 300*quantity;
                        flav="Small";
                    break;
                    case 2: choice = 500*quantity;
                        flav="Medium";
                    break;
                    case 3: choice = 900*quantity;
                        flav="Large";
                    break;
                }
                switch(pchoice1){
                    case 1:
                        cout<<quantity<<" "<<flav<<" "<<pizza1<<" : Order Confirmed : Rs"<<choice<<endl;
                        t+=choice;
                    break;
                    case 2: choice = 500*quantity;
                        cout<<quantity<<" "<<flav<<" "<<pizza2<<" : Order Confirmed : Rs"<<choice<<endl;
                        t+=choice;
                    break;
                    case 3: choice = 900*quantity;
                        cout<<quantity<<" "<<flav<<" "<<pizza3<<" : Order Confirmed : Rs"<<choice<<endl;
                        t+=choice;
                    break;
                    case 4:
                        cout<<quantity<<" "<<flav<<" "<<pizza4<<" : Order Confirmed : Rs"<<choice<<endl;
                        t+=choice;

                    break;
                }
                cout<<"Do you want to order something else? Y or N: ";
                cin>>gotostart;
                if(gotostart=='y' || gotostart=='Y'){
                    goto beginning;
                }
                else if(gotostart=='n' || gotostart=='N'){
                cout<<"\nYour Total Bill is: "<<t<<"\n";
                cout<<"Your Order will be delievered in 40 minutes.\n";
                cout<<"Thank You "<<name<<" for Ordering from Ankush's Fast Food!\n";
                }
            }
        }
 
    }
    else if (choice == 2){
        cout<<"\n1)"<<burg1<<" Rs. 180";
        cout<<"\n2)"<<burg2<<" Rs. 160";
        cout<<"\n3)"<<burg3<<" Rs. 150";
        cout<<"What kind of burger do you want to order? \n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3){
            cout<<"How many of these do you want?";
            cin>>quantity;
            switch(pchoice1){
                case 1:
                    choice = 180*quantity;
                break;
                case 2:
                    choice = 160*quantity;
                break;
                case 3:
                    choice = 150*quantity;
                break;
            }
            switch(pchoice1){
                case 1 :
                    cout<<quantity<<" "<<burg1<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 2 :
                    cout<<quantity<<" "<<burg2<<" : Order Confirmed : Rs"<<choice;
                    
                    t+=choice;
                break;
                case 3 :
                    cout<<quantity<<" "<<burg3<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
            }
            cout<<"Would you like to order something more?    Y or N: ";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
            }
            else if(gotostart=='n' || gotostart=='N'){
                cout<<"\nYour Total Bill is: "<<t<<"\n";
                cout<<"Your Order will be delievered in 40 minutes.\n";
                cout<<"Thank You "<<name<<" for Ordering from Ankush's Fast Food!\n";
            }
        }
    }
    else if (choice == 3){
        cout<<"\n1)"<<sand1<<" Rs. 240";
        cout<<"\n2)"<<sand2<<" Rs. 160";
        cout<<"\n3)"<<sand3<<" Rs. 100";
        cout<<"What kind of sandwich do you want to order? \n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3){
            cout<<"How many of these do you want?";
            cin>>quantity;
            switch(pchoice1){
                case 1:
                    choice = 240*quantity;
                break;
                case 2:
                    choice = 160*quantity;
                break;
                case 3:
                    choice = 100*quantity;
                break;
            }
            switch(pchoice1){
                case 1 :
                    cout<<quantity<<" "<<sand1<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 2 :
                    cout<<quantity<<" "<<sand2<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 3 :
                    cout<<quantity<<" "<<sand3<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
            }
            cout<<"Would you like to order something more?    Y or N: ";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
            }
            else if(gotostart=='n' || gotostart=='N'){
                cout<<"\nYour Total Bill is: "<<t<<"\n";
                cout<<"Your Order will be delievered in 40 minutes.\n";
                cout<<"Thank You "<<name<<" for Ordering from Ankush's Fast Food!\n";
            }
        }
        
    }
    else if (choice == 4){
        cout<<"\n1)"<<roll1<<" Rs. 150";
        cout<<"\n2)"<<roll2<<" Rs. 120";
        cout<<"\n3)"<<roll3<<" Rs. 100";
        cout<<"What kind of Roll do you want to order? \n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3){
            cout<<"How many of these do you want?";
            cin>>quantity;
            switch(pchoice1){
                case 1:
                    choice = 150*quantity;
                break;
                case 2:
                    choice = 120*quantity;
                break;
                case 3:
                    choice = 100*quantity;
                break;
            }
            switch(pchoice1){
                case 1 :
                    cout<<quantity<<" "<<roll1<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 2 :
                    cout<<quantity<<" "<<roll2<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 3 :
                    cout<<quantity<<" "<<roll3<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
            }
            cout<<"Would you like to order something more?    Y or N: ";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
            }
            else if(gotostart=='n' || gotostart=='N'){
                cout<<"\nYour Total Bill is: "<<t<<"\n";
                cout<<"Your Order will be delievered in 40 minutes.\n";
                cout<<"Thank You "<<name<<" for Ordering from Ankush's Fast Food!\n";
            }
        }
    }
    else if (choice == 5){
        cout<<"\n1)"<<bir1<<" Rs. 200";
        cout<<"\n2)"<<bir2<<" Rs. 250";
        cout<<"\n3)"<<bir3<<" Rs. 180";
        cout<<"What kind of Biryani do you want to order? \n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3){
            cout<<"How many of these do you want?";
            cin>>quantity;
            switch(pchoice1){
                case 1:
                    choice = 200*quantity;
                break;
                case 2:
                    choice = 250*quantity;
                break;
                case 3:
                    choice = 180*quantity;
                break;
            }
            switch(pchoice1){
                case 1 :
                    cout<<quantity<<" "<<bir1<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 2 :
                    cout<<quantity<<" "<<bir2<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
                case 3 :
                    cout<<quantity<<" "<<bir3<<" : Order Confirmed : Rs"<<choice;
                    t+=choice;
                break;
            }
            cout<<"Would you like to order something more?    Y or N: ";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
            }
            else if(gotostart=='n' || gotostart=='N'){
                cout<<"\nYour Total Bill is: "<<t<<"\n";
                cout<<"Your Order will be delievered in 40 minutes.\n";
                cout<<"Thank You "<<name<<" for Ordering from Ankush's Fast Food!\n";
            }
        }
    }
    return 0;
}

