#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    char pizza1[]="Chicken Fazita", pizza2[]="Chicken Bar BQ", pizza3[]="Peri Peri", pizza4[]="creamy max";
    char burg1[]="Zinger Burger", burg2[]="Chicken Burger", burg3[]="Beef Burger";
    char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extreme Veg Sandwich";
    char roll1[]="Chicken Chutney Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll cum Fries";
    char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Beef Biryani";
    char name[30], gotostart;
    int choice=0, pchoice1, pchoice2, quantity;

    beginning:
    system("CLS");

    cout<<"\t\t\t------------ ANKUSH'S FAST FOOD ------------\n\n";
    cout<<"Please Enter Your Name: ";
    cin.getline(name,20);
    cout<<"Hello "<<name<<"!\n\n What would you like to order?\n\n";
    cout<<"\t\t\t------------ MENU ------------\n\n";
    cout<<"1)Pizza\n";
    cout<<"2)Burger\n";
    cout<<"3)Sandwich\n";
    cout<<"4)Rolls\n";
    cout<<"5)Biryani\n\n";
    cout<<"Please enter your choice: \n";
    cin>>choice;

    if(choice==1){
        cout<<"\n1)"<<pizza1<<"\n";
        cout<<"2)"<<pizza2<<"\n";
        cout<<"3)"<<pizza3<<"\n";
        cout<<"4)"<<pizza4<<"\n";
        cout<<"Please choose your flavour: \n";
        cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=5){
            cout<<"\n1)Small Rs. 300"<<"\n2)Medium Rs. 500"<<"\n3)Large Rs. 900\n";
            cout<<"\nChoose Size Please: \n";
            cin>>pchoice2;
            if(pchoice2>=1 && pchoice2<=3){
                cout<<"How many of them do you want: \n";
                cin>>quantity;
                switch(pchoice2){
                    case 1: choice = 300*quantity;
                    break;
                    case 2: choice = 500*quantity;
                    break;
                    case 3: choice = 900*quantity;
                    break;
                }
                system("CLS");
                switch(pchoice2){
                    case 1:
                        cout<<"\t\t\t-------YOUR ORDER-------\n\n";
                        cout<<quantity<<" "<<pizza1<<endl;
                        cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                        cout<<"Thank You for Ordering from Ankush's Fast Food";
                        
                    break;
                    case 2: choice = 500*quantity;
                        cout<<"\t\t\t-------YOUR ORDER-------\n\n";
                        cout<<quantity<<" "<<pizza2<<endl;
                        cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                        cout<<"Thank You for Ordering from Ankush's Fast Food";
                        
                    break;
                    case 3: choice = 900*quantity;
                        cout<<"\t\t\t-------YOUR ORDER-------\n\n";
                        cout<<quantity<<" "<<pizza3<<endl;
                        cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                        cout<<"Thank You for Ordering from Ankush's Fast Food";
                        
                    break;
                    case 4:
                        cout<<"\t\t\t-------YOUR ORDER-------\n\n";
                        cout<<quantity<<" "<<pizza4<<endl;
                        cout<<"Your total Bill is: "<< choice<< "\nYour Order will be delievered in 40 minutes.\n";
                        cout<<"Thank You for Ordering from Ankush's Fast Food";
                        
                    break;
                }

                cout<<"Do you want to order something else? Y or N\n";
                cin>>gotostart;
                if(gotostart=='y' || gotostart=='Y'){
                    goto beginning;
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
            switch(pchoice1){
                case 1:
                    choice = 180*choice;
                break;
                case 2:
                    choice = 160*choice;
                break;
                case 3:
                    choice = 150*choice;
                break;
            }
            system("CLS");
            switch(pchoice1){
                case 1 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<burg1;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                    
                break;
                case 2 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<burg2;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                case 3 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<burg3;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                
            }

            cout<<"Would you like to order something more?    Y or N";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
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
            system("CLS");
            switch(pchoice1){
                case 1 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<sand1;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                    
                break;
                case 2 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<sand2;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                case 3 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<sand3;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                
            }
            cout<<"Would you like to order something more?    Y or N";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
                
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

            system("CLS");
            switch(pchoice1){
                case 1 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<roll1;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                    
                break;
                case 2 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<roll2;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                case 3 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<roll3;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                
            }
            cout<<"Would you like to order something more?    Y or N";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
                
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

            system("CLS");
            switch(pchoice1){
                case 1 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<bir1;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                    
                break;
                case 2 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<bir2;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                case 3 :
                    cout<<"\t\t\t------------ YOUR ORDER ------------\n\n";
                    cout<<quantity<<" "<<bir3;
                    cout<<"Your total Bill is: "<< choice<< "\n Your Order will be delievered in 40 minutes.";
                    cout<<"Thank You for Ordering from Ankush's Fast Food";
                break;
                
            }

            cout<<"Would you like to order something more?    Y or N";
            cin>>gotostart;
            if(gotostart=='y' || gotostart == 'Y'){
                goto beginning;
                
            }
        }
    }
     
    return 0;
}
