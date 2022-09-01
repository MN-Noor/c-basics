#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int a = 0;
int sum = 0;


struct cart {

	string books1;
	int price;
	int quantity;

};
cart c[20];

struct books
{
	string name;
	string arthor;

	string pblshr;
	string pblshd;
	int npg;
	string bindng;
	string ISBN;
	string categories;
	int views;
	int price;
	int ilft;
	int category_no;

};
void displaym1(void);

void choice1(books b[20]);
void choice2(books b[20]);
void displaycart(int a, int sum, cart c[20]);
void scart(cart c[20]);
void finalcart(cart c[20], int sum, int a);
void svecart(int sum, int a, cart c[20]);
void userinfo();
void dinfo();


int main()
{
	int chse;
	int ch_payment_method;
	char chrc;
	int ch_of_checkout;
	char ch5;
	char choice;
	books b[20];
	char ch_agree;
	char ch_agree2, ch_continue;
	b[0] = { "the last story of Mina Li","Nancy Jooyoun","Headline UK","01/09/2020",384,"Paper Back","9781472281593","Fiction",171,2195, 8,1 };
	b[1] = { "Gumshudah Yadon Ki Wapsi","Kishwar Naheed","Sang e Meel","01/08/2012",100,"Hard Back","9789693525441","Urdu books",1343,700,13,4 };
	b[2] = { "Last Boat from Tangier","James von Leyden","Constable","10/12/2020",368,"Paper Back","9781472130648","Fiction",120,1995,  1,1 };
	b[3] = { "The Reckoning","John Grisham","Hodder UK","11/07/2019",512,"Paper Back","9781473684423","Fiction",619,1195,46,1 };
	b[4] = { "Apni Danist Main"," Intizar Hussain","Sang - e - meel Publications","01 / 01 / 2014",100,"Hard Back","978969352733x","Urdu book",339,795,2,4 };
	b[5] = { "Collins Classics Romeo and Juliet"," William Shakespeare","Harper Collins UK","06/09/2016",320,"Paper Back","9780007902361","Historical Fiction" ,1761,395,12,1 };
	b[6] = { " Fearless: stories of amazing women from Pakistan"," Amneh Shaikh Farooqui","Liberty Publishing","20/03/2020",112,"Paper Back","9789698729233","Non-Fiction",5067 ,1495,157,2 };
	b[7] = { "Harry Potter And The Philosophers Stone" ,"J.K.Rowling","Bloomsbury UK","01 / 09 / 2014",352,"Paper Back","9781408855652","Fiction" ,9328 ,1195,52,1 };
	b[8] = { "Hasil"," Umera Ahmad","Ilmoirfan Publishers","01/01/2009",128,"Hard Back","1000000000139","Urdu book",3074 ,600 ,13,4 };
	b[9] = { "Killing Commendatore","Haruki Murakami","Random House UK","09 / 10 / 2018",688,"Hard Back","9781787300194","Non-Fiction",2623, 2095,62,2 };
	b[10] = { "A History Of LanguageLearning Among The Muslim"," Tariq Rahman","-------","01/01/2012",100,"Hard Back","9789693524741","Non Fiction\nBooks\nRegional Interest",1350 ,1200,2,2 };
	b[11] = { "Americas War on Terror Became a Global War on Tribal Islam ?"," Akbar Ahmed","------","01 / 09 / 2014",100,"Hard Back","9789694025667","Regional Interest\nNon Fiction\nCurrent Affairs& History",1571,1295,2,2 };

	b[11] = { "The Foolish Crocodile","Na","------","01/02/2011",100,"Paper Back","9781730109607","Children's Books",1259,225, 1,3 };
	b[12] = { "The Lunar Chronicles : Winter(Book # 4)","Marissa Meyer","Puffin UK","10 / 11 / 2015",832,"Paper Back","9780141340241","Children's Books\nFantasy",2517 ,1295,9,3 };
	b[13] = { "Mickey Mouse Write and Erase Look and Find"," Disney","Phoenix International Publications, Inc USA","01 / 09 / 2012",24,"Hard Back","9781450843096","Children's Books\nFantasy", 1252 , 1995,4,3 };
	b[14] = { "5 In 1 Pegasus Princess Stories","Pegasus","--------","01 / 01 / 2015",100,"Board Game","9788131934326","Children's Books",1217 , 195 ,1,3 };
	b[14] = { " Aik Aankh Main America","Farooq Adil","------","01 / 02 / 2005",100,"Hard Back","9789694963945","Regional Poetry\nUrdu Books\nPoetry", 1716 ,250 ,3,4 };
	b[15] = { "A Brief Guide to James Bond "," Nigel Cawthorne","Penguin Books","01 / 08 / 2012",293,"Paper Back","9781849015073","Film & Television Tie In\nBooks to Screen\nbooks to movies\nFiction & Literature\nRead the Movies\n",1638,950,3,5 };
	b[16] = { " Bin Roye Aanso - (HB)(Urdu)","Farhad Ishtiyaq","Ilmoirfan Publishers","21 / 12 / 2009",250,"Hard Back","1000000001457","Fiction & Literature\nRead the Movies\nBooks to Pakistani Dramas ", 1877,600, 10,5 };
	b[17] = { " Batman, The Dark Knight Returns","Frank Miller","PENGUIN RANDOM HOUSE LLC - USA","23 / 02 / 2016",224,"Paper Back","9781401263119","Marvel\nRead the Movies\nChildrenRead the Movies", 744 ,3195,3,5 };
	b[18] = { "Charlotte's Web (puffin Modern Classics)","E.B.White","Penguin UK","03 / 06 / 2010",256,"Paper Back","9780141329680","Children's Books\nRead the Movies",349,995,1,5 };
	b[19] = { "Adab Aur Roshan Kheyali","Sibte Hasan","------","30 / 11 / 2001",100,"Hard Back","9789694190433","Current Affairs\nUrdu Books\nEid Literary Fest\nCurrent Affairs & History",2869,650,2,4 };
	do {
		do {
			do {
				do {
					do {
						do {
							displaym1();
							cin >> choice;
							cin.ignore();
							if (choice == '1')
							{
								choice1(b);
							}
							else if (choice == '2')
							{
								choice2(b);
							}
							else
							{
								exit(3);
							}cout << "do yo want to checkout?\ny/n" << endl;
							cin >> ch5;
							cin.ignore();

						} while (ch5 != 'y');


						displaycart(sum, a, c);
						do {
							cout << "Do you want to remove any item from cart" << endl;
							cin >> chrc;
							if (chrc == 'y')
							{
								a = a - 1;
								finalcart(c, sum, a);

							}
							else if (chrc == 'n')
							{
								svecart(sum, a, c);
							}
						} while (a > 0 && chrc == 'y');
						if (a <= 0)
						{
							cout << "You have no book left in cart" << endl;
							cout << "Enter the choice\n1:Continue shopping\n2:Exit" << endl;
							cin >> chse;
							if (chse == 2)
							{
								exit(2);
							}

						}
					} while (a <= 0);
					if (a > 0)
					{
						cout << "Enter the choice\n1:Checkout\n2:Continue shopping" << endl;
						cin >> ch_of_checkout;
					}
				} while (ch_of_checkout != 1);


				cout << "I have agreed to the change and return policy\n y/n" << endl;
				cin >> ch_agree;
			} while (ch_agree != 'y');
			userinfo();
			cout << "I have read and agree to the Terms & Conditions\n y/n " << endl;
			cin >> ch_agree2;
		} while (ch_agree2 != 'y');
		dinfo();
		cout << "Please select the preferred payment method to use on this order.\n1:Online payment powered by Alfalah\n2:Easypaisa\n3:Cash On Delivery " << endl;
		cin >> ch_payment_method;
		cout << "Do you want to continue\ny/n";
		cin >> ch_continue;
	} while (ch_continue != 'y');
	return 0;
}
void displaym1(void)
{

	cout << "Liberty Books" << endl;
	cout << "         Since 1952" << endl;
	cout << "Enter your choice" << endl;
	cout << "1:to search book by\n Title\nAurthor\nPublisher\nISBN" << endl;
	cout << "2:to select book by categories\n3:Exit" << endl;
}
void choice1(books b[20])
{
	string srch;
	int cnt = 0;
	char ch2, ch3;
	int q;
	
	cout << "Enter Title\,Aurthor,Publisher or ISBN number to Search your desired book" << endl;
	getline(cin, srch);
	cin.ignore(-1);

	for (int i = 0; i < 20; i++)
		if ((srch == b[i].name) || (srch == b[i].arthor) || (srch == b[i].pblshr) || (srch == b[i].ISBN))
		{

			cout << b[i].name << "\n" << "By:" << b[i].arthor << "\n" << "Views" << b[i].views << "\nRs" << b[i].price << "\nOnly" << b[i].ilft << "item(s) left" << endl;
			cout << "Want to see Book Details\ny/n" << endl;
			cin >> ch2;
			cin.ignore();
			if (ch2 == 'y')
			{
				cout << "Publisher:" << b[i].pblshr << "\n" << "Publication Date:" << b[i].pblshd << "\n" << "Number of Pages::" << b[i].npg << "\n" << "Binding:" << b[i].bindng << "\n" << "ISBN:" << b[i].ISBN << "\n" << "Categories: " << b[i].categories << endl;
			}
			cout << "Do you want to add this book to your Cart\ny/n" << endl;
			cin >> ch3;
			cin.ignore();
			if (ch3 == 'y')
			{

				a += 1;


				cout << "How much pieces you want to add in cart" << endl;
				cin >> q;
				sum = sum + (q * b[i].price);
				c[a - 1].price = b[i].price;
				c[a - 1].books1 = b[i].name;
				c[a - 1].quantity = q;
			}
			cnt = cnt + 1;
		}



	if (cnt == 0)
	{
		cout << "No result found of your Entry" << endl;
	}


}
void choice2(books b[20])
{
	int q;
	int i, j;
	char ch6, ch7;
	int ch_category;
	cout << "Chose the categories\n1:Fiction\n2:Non_Fiction\n3:Children's Books\n4:Urdu_Books\n5:Read the Movies";
	cin >> ch_category;
	for (i = 0; i < 20; i++)
	{
		if (ch_category == b[i].category_no)
		{
			cout << "choice no:*******" << i + 1 << "******" << endl;
			cout << b[i].name << "\t" << "By:" << b[i].arthor << "\n" << "Views" << b[i].views << "\tRs" << b[i].price << "\nOnly" << b[i].ilft << "item(s) left" << endl;
		}
	}
	cout << "Enter your choice no which you want to add in cart" << endl;
	cin >> j;
	cin.ignore();
	cout << "Do you want to see details of this book\ny/n" << endl;
	cin >> ch6;
	cin.ignore();
	if (ch6 == 'y')
	{
		cout << "Publisher:" << b[j - 1].pblshr << "\t" << "Publication Date:" << b[j - 1].pblshd << "\n" << "Number of Pages:" << b[j - 1].npg << "\t" << "Binding:" << b[j - 1].bindng << "\n" << "ISBN:" << b[j - 1].ISBN << "\t" << "Categories:" << b[j - 1].categories << endl;
	}
	cout << "Do you want to add this book to your Cart\ny/n" << endl;
	cin >> ch7;
	cin.ignore();
	if (ch7 == 'y')

	{

		a += 1;
		cout << "how much pieces of this book you want" << endl;
		cin >> q;
		cin.ignore();
		sum = sum + (b[j - 1].price * q);

		c[a - 1].books1 = b[j - 1].name;
		c[a - 1].price = b[j - 1].price;

		c[a - 1].quantity = q;

	}

}
void displaycart(int sum, int a, cart c[20])
{

	int k;
	for (int k = 0; k < a; k++)
	{
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "Name of Book : " << k + 1 << "  " << c[k].books1 << "\n" << "Price : " << c[k].price << "\n" << "Quantity : " << c[k].quantity << "\n" << c[k].quantity << "*" << c[k].price << "\n" << "Bill : " << c[k].quantity * c[k].price << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	}
	cout << "Your Totaal bill is : " << sum << "Rs" << endl;

}
void svecart(int sum, int a, cart c[20])
{

	fstream myfile;
	myfile.open("liberty.txt", ios::app);
	if (!myfile)
	{
		cout << "File opening failed";
	}
	else {

		for (int k = 0; k < a; k++)
		{

			myfile << "Name of Book : " << k + 1 << "  " << c[k].books1 << "\n" << "Price : " << c[k].price << "\n" << "Quantity : " << c[k].quantity << "\n" << c[k].quantity << "*" << c[k].price << "\n" << "Bill : " << c[k].quantity * c[k].price << "\n" << "Totat price" << sum << endl;
		}
		myfile.close();
	}

}
void finalcart(cart c[2], int sum, int a)
{

	int l;
	int r;
	int nrb;
	int totalprice = 0;



	cout << "Enter the no book which you want to remove from cart" << endl;
	cin >> r;
	r = r - 1;

	if (r < a)
	{


		for (l = r; l < a; l++)
		{
			c[l] = c[l + 1];

		}
		cout << "Item you want were successfully removed......\n Cart after removing items is" << endl;


	}
	for (int k = 0; k < a; k++)
	{
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "Name of Book : " << k + 1 << "  " << c[k].books1 << "\n" << "Price : " << c[k].price << "\n" << "Quantity : " << c[k].quantity << "\n" << c[k].quantity << "*" << c[k].price << "\n" << "Bill : " << c[k].quantity * c[k].price << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		totalprice = totalprice + c[k].price * c[k].quantity;
	}

	cout << "Your Totaal bill is " << totalprice << "Rs" << endl;


}
void savefinalcart(cart c[2], int sum, int a)
{
	int totalprice = 0;
	fstream myfile;
	myfile.open("liberty.txt", ios::app);
	if (!myfile)
	{
		cout << "File opening failed";
	}
	else {

		for (int k = 0; k < a; k++)
		{
			myfile << "After removing items from cart" << endl;
			myfile << "Name of Book : " << k + 1 << "  " << c[k].books1 << "\n" << "Price : " << c[k].price << "\n" << "Quantity : " << c[k].quantity << "\n" << c[k].quantity << "*" << c[k].price << "\n" << "Bill : " << c[k].quantity * c[k].price << "\n" << endl;
			totalprice = totalprice + c[k].price * c[k].quantity;
		}
		myfile << "Totat price" << totalprice << endl;
		myfile.close();
	}



}
void userinfo()
{
	string fstname;
	string lstname;

	string email;
	int telephone;
	string adress;
	string country;
	string region;
	string city;
	string postcode;
	string password;

	string ema1 = "@gmail.com";
	int postfind;//to find locatin of @gmail.com
	string confirm_password;
	int ch_of_checkout;
	int ch_category;
	int j;
	int cnt = 0;
	int siz_password;
	int siz_adress;
	cout << "********Billing Details***********" << endl;
	cout << "Enter Your Information" << endl;
	cout << "First Name:";
	cin >> fstname;
	cin.ignore(-1);
	cout << "Last Name:";
	cin >> lstname;
	cin.ignore(-1);
	do

	{
		cout << "Email adress:";
		cin >> email;
		postfind = email.find(ema1);
		if (postfind != -1)
		{
			cout << "Correct!" << endl;
		}
		else
		{

			cout << "Email adress doesnot appear to b valid" << endl;

		}

	} while (postfind == -1);
	cout << "Telephone:";
	cin >> telephone;
	cin.ignore();
	do {
		cout << "Adress";
		getline(cin, adress);
		cin.ignore(-1);
		siz_adress = adress.size();
		if ((siz_adress < 4) || (siz_adress > 20))
		{
			cout << "Adress should be between 4 to 20 characters" << endl;
		}
	} while ((siz_adress < 4) || (siz_adress > 20));
	cout << "Country:";
	cin >> country;
	cin.ignore(-1);
	cout << "Region/State";
	cin >> region;
	cin.ignore(-1);
	cout << "City";
	cin >> city;
	cin.ignore(-1);

	do
	{
		do {
			cout << "Password";
			cin >> password;
			cin.ignore(-1);
			siz_password = password.size();
			if (siz_password < 4)
			{
				cout << "password should be greater than 4 characters" << endl;
			}
		} while (siz_password < 4);
		cout << "Confirm Password";
		cin >> confirm_password;

		cin.ignore(-1);
		if (password != confirm_password)
		{
			cout << "Incorrect Password" << endl;
		}

	}

	while (password != confirm_password);
	cout << "Post code:";
	cin >> postcode;
	cout << "Customer Info" << "\n" << "Name" << fstname + " " + lstname << "\n" << "Country" << country << "\nCity" << city << "\nState" << region << "\nAdeess" << adress << endl;

	fstream myfile;
	myfile.open("liberty.txt", ios::app);
	if (!myfile)
	{
		cout << "File opening failed";
	}
	else {
		myfile << "Customer Info" << "Name" << fstname + " " + lstname << "\n" << "Country" << country << "\nCity" << city << "\nState" << region << "\nAdeess" << adress << endl;

		myfile.close();
	}

}
void dinfo()
{
	char ch_agree2;
	int ch_payment_method;
	char ch_continue;
	string dfstname, dlstname, dadress, dcountry, dregion, dcity, dpostcode;//dilevery infmation with  d
	int siz_dadress;
	cout << "Dilevery Details" << endl;
	cout << "Enter Your Information" << endl;
	cout << "First Name:";
	cin >> dfstname;
	cin.ignore(-1);
	cout << "Last Name:";
	cin >> dlstname;
	cin.ignore(-1);

	do {
		cout << "Adress";
		getline(cin, dadress);
		cin.ignore(-1);
		siz_dadress = dadress.size();
		if ((siz_dadress < 4) || (siz_dadress > 20))
		{
			cout << "Adress should be between 4 to 20 characters" << endl;
		}
	} while ((siz_dadress < 4) || (siz_dadress > 20));
	cout << "Country:";
	cin >> dcountry;
	cin.ignore(-1);
	cout << "Region/State";
	cin >> dregion;
	cin.ignore(-1);
	cout << "City";
	cin >> dcity;
	cin.ignore(-1);
	cout << "Post code:";
	cin >> dpostcode;

	cout << "Dilevery Detils\n" << "Name" << dfstname + " " + dlstname << "\n" << "Country" << dcountry << "\nCity" << dcity << "\nState" << dregion << "\nAdeess" << dadress << endl;

	fstream myfile;
	myfile.open("liberty.txt", ios::app);
	if (!myfile)
	{
		cout << "File opening failed";
	}
	else {
		myfile << "Dilevery Detils\n" << "Name" << dfstname + " " + dlstname << "\n" << "Country" << dcountry << "\nCity" << dcity << "\nState" << dregion << "\nAdeess" << dadress << endl;
		myfile.close();
	}

}





