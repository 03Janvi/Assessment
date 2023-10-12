#include<iostream>
using namespace std;
class food{
	public:
	int ch;
	string name;
	public:
		void get()
		{
			cout<<"                 ------------Tops Tech . Fast food---------------"<<endl;
			cout<<"Please enter your name:";
			cin>>name;
			cout<<"Hello "<<name;
		}
		void display()
		{
			cout<<endl<<endl<<"What would you like to order?"<<endl;
			cout<<"                  ----------------Menu------------------"<<endl;
			cout<<"1) Pizzas"<<endl<<"2) Burgers"<<endl<<"3) Sandwich"<<endl<<"4) Rolls"<<endl<<"5) Biryani"<<endl;
		}
		void choice()
		{
			int ch1,quan;
			cout<<endl<<"Please enter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"1 Farmhouse Pizza Rs.240"<<endl<<"2 Margherita Rs.170"<<endl<<"3 Peppy Paneer Pizza Rs.270"<<endl;
					cout<<"Please enter what would you like to have:";
					cin>>ch1;
					cout<<"Please Enter Quantity:";
					cin>>quan;
					switch(ch1)
					{
						case 1:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Farmhouse Pizza"<<endl;
							cout<<"Your total bill is:"<<quan*240<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
						case 2:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Margherita Pizza"<<endl;
							cout<<"Your total bill is:"<<quan*170<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
						case 3:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Peppy Paneer Pizza"<<endl;
							cout<<"Your total bill is:"<<quan*270<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							default:
								cout<<"Invalid Choice:";
							
					}
					
					break;
						
						case 2:
							cout<<"1 Veg Burger Rs.240"<<endl<<"2 Aloo Tiki Rs.170"<<endl<<"3 Chicken Burger Rs.270"<<endl;
							cout<<"Please enter what would you like to have:";
							cin>>ch1;
							cout<<"Please Enter Quantity:";
							cin>>quan;
							switch(ch1)
							{
							case 1:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Veg Burger"<<endl;
							cout<<"Your total bill is:"<<quan*240<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 2:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Aloo Tiki Burger"<<endl;
							cout<<"Your total bill is:"<<quan*170<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 3:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Chicken Burger"<<endl;
							cout<<"Your total bill is:"<<quan*270<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							default:
								cout<<"Invalid Choice:";
						}
						
						break;
						
						case 3:
							cout<<"1 Club Sandwich Rs.240"<<endl<<"2 Veg crispy Sandwich Rs.160"<<endl<<"3 Extreme veg Sandwich Rs.100"<<endl;
							cout<<"Please enter what would you like to have:";
							cin>>ch1;
							cout<<"Please Enter Quantity:";
							cin>>quan;
							switch(ch1)
							{
							case 1:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Club Sandwich"<<endl;
							cout<<"Your total bill is:"<<quan*240<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 2:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Veg Crispy Sandwich"<<endl;
							cout<<"Your total bill is:"<<quan*160<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 3:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Extreme Veg Sandwich"<<endl;
							cout<<"Your total bill is:"<<quan*100<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							default:
								cout<<"Invalid Choice:";
						}
						
						break;
						
						case 4:
							cout<<"1 Cheese Rolls Rs.240"<<endl<<"2 Spring Rolls Rs.170"<<endl<<"3 Vegetable Rolls Rs.270"<<endl;
							cout<<"Please enter what would you like to have:";
							cin>>ch1;
							cout<<"Please Enter Quantity:";
							cin>>quan;
							switch(ch1)
							{
							case 1:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Cheese Rolls"<<endl;
							cout<<"Your total bill is:"<<quan*240<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 2:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Spring Rolls"<<endl;
							cout<<"Your total bill is:"<<quan*170<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 3:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Vegetable Rolls"<<endl;
							cout<<"Your total bill is:"<<quan*270<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							default:
								cout<<"Invalid Choice:";
						}
						break;
						
						case 5:
							cout<<"1 Dum Biryani Rs.240"<<endl<<"2 Hyderabadi Biryani Rs.170"<<endl<<"3 Egg Biryani Rs.270"<<endl;
							cout<<"Please enter what would you like to have:";
							cin>>ch1;
							cout<<"Please Enter Quantity:";
							cin>>quan;
							switch(ch1)
							{
							case 1:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Dum Biryani"<<endl;
							cout<<"Your total bill is:"<<quan*240<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 2:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Hyderabadi Biryani"<<endl;
							cout<<"Your total bill is:"<<quan*170<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							case 3:
							cout<<"              ---------Your Order---------"<<endl;
							cout<<quan<<" Egg Biryani"<<endl;
							cout<<"Your total bill is:"<<quan*270<<endl;
							cout<<"Your order will be delivered in 40 mins"<<endl;
							cout<<"Thank you for ordering from Tops Tech Fast food";
							break;
							
							default:
								cout<<"Invalid Choice:";
						}
						
						break;
					default:
						cout<<"Invalid Choice";			
					
			}
		}
};
int main()
{
	char ch2;
	food obj;
	obj.get();
	do
	{
	obj.display();
	obj.choice();
	cout<<endl<<"Do you want to order Anything else? Y/N:";
	cin>>ch2;
	}
	while(ch2=='Y');
	
	return 0;
}
