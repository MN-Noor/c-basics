#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int vsign=0;
int phono;
string csellar;
struct items
{
	
	int price;
	int catno;
	string type;
	
	string condition;
	string category;
	string location;
	string city;
	string prov;
	string seller;
	int number;
	string desc;

};
void displaymenu();
void cho1(items i[10]);
void cho2(items i[10]);
void categories(items i[10]);
void signin();
void addpost(items i[10]);
int main()

{
	int cha = 0;
	int cha1 = 0;
	int choice1;
	char choice2;
	int choice3;
	int choice4,ch4=0;
	int choice5;
	string message;
	int cl = 0, cad = 0;

	items i[11];
	i[0] = {300000,1,"oppo","Used","Mobile","Allahabad Road", "Rawalpindi","punjab","Mushtaq",12345678,"Oppo F11 pro 6 / 128 GB\nSet charger\nBack rufff ha sari\nSide or front sy saaf ha\nSet main koi masla nhi ha\nPubg game smoth py extreme chalata ha"};
	i[1] = { 39999,1,"Samsung","New","Mobile","Gulshan-E-Iqbal Block 10","Karachi","Sindh","Lapntab Rj Mall",9234845,"Samsung A32\nProcessor: Octa core\nRam: 6GB\nRom : 128GB\nDisplay : 6.4 Inch\nOS : Android 11\nBattery : 5000mAh 15W"};
	i[2] = { 1065000,2,"Honda City","Used","Car","Madina Colony","Lahore","Punjab","Akram",92347565,"Model\tCity IDSI\nRegistered in\tLahore\nFuel\tPetrol\nKM's driven\t100,000\ngood condition original documents han ac full chill ha under se total geniun ha seal by seal ha bahir se shawerd ha non accidental engine suspension zero meter ha tv nevigation lgi hoi ha seriouse custmer conatct kren no sms only call "};
	i[3] = { 3785000,2,"Honda Civic","Used","Car","Wapda Town"," Lahore","Punjab","Numan Saeed",567896544,"Model\tCivic VTi Oriel Prosmatec\nFuel\tPetrol\nRegistered in\tLahore\nHonda Center maintained\nOnly used in Lahore city\nTotally High Octane driven\nSingle - handed Used\nCeramic coating from Autoluxe(DHA)\nBack Seat Leds\nFortuner leather Poshish\nAll Token & amp; Tax are Paid\nSelf Owner no Broker involve\nCall before the visit : time 2 PM till 11 PM" };
	i[4] = { 300000,3,"Chopper 200cc","New","Motorcycle","Garden Town","Lahore","Punjab","Bullet 1 Motor sports",924647813,"Chopper 200cc \nfresh stock\ndigital meter\ntubeless tyer\nsound which u want\nblue and red colours averible\nat Bullet 1 Motorsports" };
	i[5] = { 93000,3,"Honda CG 125","Used","Motorcycle","Darussalam Coop Society","Karachi","Sindh","Nomi",926464631,"First owner\nkarachi number\n10 / 10 condition\n100 % sealed or karak engine hai\npehlay bike check karain phr offer dain\nAll documents and CPLC clear" };
	i[6] = { 10000,4,"Samsung LED","New","TV-Video","Saddar Town","Karachi","Sindh","Waqar Electronics",926538762,"Salam \nWholesale price\nSamsung 26 brand new pack box led\nMade in malaysia\n1 year waranty also\nPlay all usb videos formats\nDelivery free facility also available in karachi\nCall 4more info\nAll sizes leds available in wholesale price\nThanks for trusting us jazakallah" };
	i[7] = { 18000,4,"Panasonic Japnese Sound System","Used","TV-Video","Airport","Karachi","Sindh","Ahmad Bhimani",925756541,"Panasonic Original Japnese Set Apmlifier &amp; Woofers Blast &amp\nBoosted Sound\nOk Condition No Fault." };
	i[8] = { 11000,5,"Tablets Lenovo Tab 4","New","Tablets","Baldia Town","Karachi","Sindh","Tele World",925479329,"Lenovo Tab 4 8 inch\nModel : TB - 8504F\nUltra Slim Tablet\nPUBG Game Support\nScreen Size 8” inch\nRam 2 GB\nMemory 16 GB\nProcessor Quad - core 1.4 GHz Cortex - A53\nColours Grey Colour" };
	i[9] = { 18000,5,"ipad mini","Used","Tablets","Shahdara","Lahore","Punjab","OLx User",926474838,"Apple\nIpad Mini\nwith original charger\n32 GB\n10 / 10 condition"};
	do {
		do {
			
				displaymenu();
				cin >> choice1;
				cin.ignore();
				if (choice1 == 1)
				{
					cho1(i);


				}
				else if (choice1 == 2)
				{
					cho2(i);
				}
				else if (choice1 == 3)
				{
					categories(i);
				}
				else if (choice1 == 4)
				{
					if (vsign == 0)
					{
						signin();
						cout << "1:Continue seeing products \n2:Exit" << endl;
						cin >> choice4;
						cin.ignore();
						
					}
					else if(vsign!= 0)
					{
						cout << "you have already looged in" << endl;
					}
					cl += 1;
				}
				else if (choice1 == 5)
				{

					if (vsign != 0)
					{
						addpost(i);
						cout << "Your add is successfully posted" << endl;
					}
					else if (vsign == 0)
					{
						cout << "You need to Login first" << endl;
						cad += 1;
					}

				}
				else if (choice1 == 6)
				{
					exit(6);
				}
				else
				{
					cout << "Invalid Entry" << endl;
				}
			

		} while ((choice1 < 1) && (choice1 > 6));

		if ((choice1 == 1 || choice1 == 2 || choice1 == 3))
		{
			cout << "Enter your respective choice\n1:Chat with seller\n2:Show seller number ************ " << endl;
			cin >> choice3;
			cin.ignore();
			if (vsign == 0)
			{
				cout << "In order to see number you need to login first" << endl;
				signin();
			}
			if (choice3 == 1)
			{
				cout << "Enter your message\nTo " << csellar << endl;
				getline(cin, message);
				cin.ignore(-1);

				fstream myfile;
				myfile.open("email.txt", ios::out);
				if (!myfile)
				{
					cout << "Failed opening file" << endl;
				}
				else
				{

					myfile << message;

				}
			}
			else if (choice3 == 2)
			{


				cout << "Seller Number:92 " << phono << endl;


			}
			
		}
		cout << "1:Continue seeing products \n2:Exit" << endl;
		cin >> choice4;
		cin.ignore();
		
		 if (choice4 == 1)
		{
			ch4 += 1;
		}
		else if (choice4 == 2)
		{
			exit(2);
		}

	} while (ch4 == 1);
		

	return 0;
}
void displaymenu()
{
	cout<< "Enter your respective Choice\n1:Search by City, Area or Local Place\n2:Search By Cars Mobile phones and more\n3:Categories\n4:Login\n5:Sell\n6:Exit" << endl;

}
void cho1(items i[10])
{
	string srch1;
	int c = 0;
	int j;
	char ch11;
	int  pn;

	cout << "Enter Location, city,Province name to find your desired product ?";
	getline(cin, srch1);
	cin.ignore(-1);

	for (int j = 0; j < 10; j++)
	{
		if ((srch1 == i[j].location) || (srch1 == i[j].city) || (srch1 == i[j].prov))
		{
			cout << "****************Product no:" << j << "***************" << "\n" << i[j].type << "\n" << "Price:" << i[j].price << "Rs" << "\n" << "location" << i[j].location + i[j].city + i[j].prov << endl;
			c += 1;
		}
		
	}
	if (c != 0)
	{



		cout << "Enter the Respective product no to see product details" << endl;
		cin >> pn;
		cin.ignore();
		system("CLS");
		cout << i[pn].type << "\n" << "Price:" << i[pn].price << "Rs" << "\n" << "location" << i[pn].location + i[pn].city + i[pn].prov << "\nSellar:" << i[pn].seller << "\nCategory" << i[pn].category << endl;

		cout << "Want to see Product Details\ny/n" << endl;
		cin >> ch11;
		cin.ignore();
		if (ch11 == 'y')
		{
			cout << i[pn].desc << endl;

		}
		phono = i[pn].number;
		csellar = i[pn].seller;
	}
	else
	{
		cout << "No product found" << endl;
		exit(c == 0);
	}
	
}
void cho2(items i[10])
{
	int c2=0;
	int pr;
	int ch21;
	string srch2;
	cout << "Enter the Category or product name" << endl;
	getline(cin, srch2);
	cin.ignore(-1);
	for (int k = 0; k < 10; k++)
	{
		if ((srch2 == i[k].category) || (srch2 == i[k].type) )
		{
			cout << "Product no:*********" << k <<"***********\n"<< i[k].type << "\n" << "Price:" << i[k].price << "Rs" << "\n" << "location" << i[k].location + i[k].city + i[k].prov << endl;
			c2 += 1;
		}
	}
	if (c2 != 0)
	{
		cout << "Enter the Respective product no to see product details" << endl;
		cin >> pr;
		cin.ignore();
		system("CLS");
		cout << i[pr].type << "\n" << "Price:" << i[pr].price << "Rs" << "\n" << "location" << i[pr].location + i[pr].city + i[pr].prov << "\nSellar:" << i[pr].seller << "\nCategory" << i[pr].category << endl;

		cout << "Want to see Product Details\ny/n" << endl;
		cin >> ch21;
		cin.ignore();
		if (ch21 == 'y')
		{
			cout << i[pr].desc << endl;

		}
		phono = i[pr].number;
		csellar = i[pr].seller;
	}
	else
	{
		cout << "No ressults found of your Entry" << endl;
		exit(c2 == 0);
	}

}
void categories(items i[10])
{
	int c3 = 0;
	int	p3;
	int l;
	char ch31;
	
	cout << "Enter the respective category to check the items.\n1:Mobile Phones\n2:Cars\n3:Motorcycles\n4:TV-Video\n5:Tablets" << endl;
	cin >> ch31;
	cin.ignore();
	for (int l = 0; l < 10; l++)
	{
		if (i[l].catno == ch31)
		{
			cout<< "Product no:" << l << i[l].type << "\n" << "Price:" << i[l].price << "Rs" << "\n" << "location" << i[l].location + i[l].city + i[l].prov << endl;
			c3 += 1;
		}

	}
	if (c3 != 0)
	{
		cout << "Enter the Respective product no to see product details" << endl;
		cin >> p3;
		cin.ignore();
		
		cout << i[p3].type << "\n" << "Price:" << i[p3].price << "Rs" << "\n" << "location" << i[p3].location + i[p3].city + i[p3].prov << "\nSellar:" << i[p3].seller << "\nCategory" << i[p3].category << endl;

		cout << "Want to see Product Details\ny/n" << endl;
		cin >> ch31;
		cin.ignore();
		

		if (ch31 == 'y')
		{
			cout << i[p3].desc << endl;

		}
		phono = i[p3].number;
		csellar = i[p3].seller;
	}
	else
	{
		cout << "No ressults found of your Entry" << endl;
		exit(c3 == 0);
	}

}
void signin()
{
	string ch2emph;
	string ch2pass;
	int uv;
	string em;
	string emcump = "@";
	int emdfind;
	string password;
	int ch41;
	string email;
	string ema1 = "@gmail.com";
	int postfind;
	int u;
	int phnsiz;
	string phn;
	cout << "Save all your favorite items in one place" << endl;
	cout << "Enter the choice\n1:Continue with phone\n2:Continue with Facebook\n3:Continue with google\n4:Continue with email" << endl;
	cin >> ch41;
	cin.ignore();
	if (ch41 == 1)
	{
		do {
			do {
				cout << "Enter your phone number:\n+92 ";
				cin >> phn;
				cin.ignore();
				phnsiz = phn.size();
				if (phnsiz == 10)
				{
					cout << "Correct!" << endl;
				}
				else
				{
					cout << "Incorrect Phone Numbers!!!!\n it should contaim 10 digits" << endl;
				}

			} while (phnsiz != 10);
			fstream myfile;
			myfile.open("olx code.txt", ios::out);
			if (!myfile)
			{
				cout << "Failed opening file" << endl;
			}
			else
			{
				srand(time(0));
				u = (rand() % 10000);
				myfile << u;
				myfile.close();
			}
			cout << "We have send you a 4 digit code in your olx code file" << endl;

			myfile.open("olx code.txt", ios::in);
			if (!myfile)
			{
				cout << "Failed opening file" << endl;
			}
			else
			{
				while (myfile >> u)
				{

					cout << " Enter that code to verify your phone number" << ":";
					cin >> uv;
					cin.ignore();
					if (u == uv)
					{
						vsign += 1;
					}
				}
				myfile.close();
			}
			if (vsign == 1)
			{
				cout << "Correct code" << endl;
			}
			else
			{
				cout << "incorrect code" << endl;
			}
		} while (vsign == 0);

	}
	else if (ch41 == 2)
	{
		do {
			cout << "*****Facebook*****" << endl;
			cout << "Login through Facebook" << endl;
			cout << "Enter your Email or phone number :";
			cin >> ch2emph;
			cin.ignore(-1);
			cout << "Enter your PassWord :";
			cin >> ch2pass;
			cin.ignore(-1);
			fstream myfile;
			myfile.open("olx code.txt", ios::out);
			if (!myfile)
			{
				cout << "Failed opening file" << endl;
			}
			else
			{
				srand(time(0));
				u = (rand() % 10000);
				myfile << u;
				myfile.close();
			}
			cout << "We have send you a 4 digit code in your olx code file" << endl;

			myfile.open("olx code.txt", ios::in);
			if (!myfile)
			{
				cout << "Failed opening file" << endl;
			}
			else
			{
				while (myfile >> u)
				{

					cout << " Enter that code to verify your facebook account" << ":";
					cin >> uv;
					cin.ignore();
					if (u == uv)
					{
						vsign += 1;
					}
				}
				myfile.close();
			}
			if (vsign == 1)
			{
				cout << "Correct code" << endl;
			}
			else
			{
				cout << "incorrect code" << endl;
			}
		} while (vsign == 0);
	}
	else if (ch41 == 3)
	{
		do

		{
			cout << "**********Google***********" << endl;
			cout << "Sign in with Google" << endl;
			cout << "Email adress:";
			cin >> email;
			cin.ignore(-1);
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
		cout << "Password:";
		cin >> password;
		cin.ignore(-1);
		vsign += 1;
		cout << "You are successfully sign in" << endl;
	}
	else if (ch41 == 4)
	{

		do

		{
			cout << "Enter your Email:";
			cin >> em;
			cin.ignore(-1);

			emdfind = em.find(emcump);
			if (emdfind != -1)
			{
				cout << "Correct!" << endl;
			}
			else
			{

				cout << "Email adress doesnot appear to b\n valid @ is missing" << endl;

			}

		} while (emdfind == -1);
		cout << "Password:";
		cin >> password;
		cin.ignore(-1);
		cout << "Correct" << endl;
		vsign += 1;
	}
			
}
void addpost(items i [10])
{
	int sphnsiz;
	string kf;
	string cond;
	string dsp,scat;
	int y;
	int sprice;
	string sstate, scity,sname;
	int ch51;
	string sphone;
 cout << "Enter the respective category of item which you want to sell.\n1:Mobile Phones\n2:Cars\n3:Motorcycles\n4:TV-Video\n5:Tablets" << endl;
	cin >> ch51;
	cin.ignore();
	for (int y = 0; y < 10; y++)
	{
		if (i[y].catno == ch51)
		{
			
			scat = i[y].category;
		}

	}
	cout << "***********" << scat << "************" << endl;
	cout << "INCLUDE SOME DETAILS" << endl;
	cout << "Mention the key features of your item (e.g. brand, model, age, type)" << endl;
	getline(cin, kf);
	cin.ignore(-1);
	cout << "Description\nInclude condition, features and reason for selling" << endl;
	getline(cin, dsp);
	cin.ignore(-1);
	cout << "Write the Condition of the product you want to sell\nNew\nUsed" << endl;
	getline(cin, cond);
	cin.ignore(-1);
	do {
		cout << "Enter your price" << endl;
		cin >> sprice;
		cin.ignore();
		if (sprice > 100000)
		{
			cout << "The maximum allowed value is 100000" << endl;
		}
	} while (sprice > 100000);
	cout << "Upload photos of your device" << endl;
	cout << "Confirm your Location" << endl;
	cout << "State :";
	getline(cin, sstate);
	cin.ignore(-1);
	cout << "City :";
	getline(cin,scity);
	cin.ignore(-1);
	cout << "REVIEW YOUR DETAILS" << endl;
	cout << "Enter your name" << endl;
	getline(cin, sname);
	cin.ignore(-1);
	do{
		cout << "Mobile Phone Number:+92 ";
	cin >> sphone;
	cin.ignore();
	sphnsiz = sphone.size();
	if (sphnsiz == 10)
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "Incorrect Phone Numbers!!!!\n it should contaim 10 digits" << endl;
	}
} while (sphnsiz != 10);
fstream myfile;
myfile.open("add info.txt", ios::app);
if (!myfile)
{
	cout << "Failed opening file" << endl;
}
else
{
	myfile << " category of item\n" << "***********" << scat << "************" << endl;
	myfile << "ADD  DETAILS\nKey features of  item (e.g. brand, model, age, type)\n" << kf << endl;
	myfile << "Description\nIncluding condition, features and reason for selling\n" << dsp << endl;
	myfile << "Condition of the product" << cond << endl;
   myfile << "Price:" << sprice << endl;
   myfile << "Location\nState :" << sstate << "\n" << "City :" << scity << endl;
   myfile << "Name:" << sname << "\n" << "Phone number :+92 " << sphone << endl;
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
	string zip code;

	string ema1 = "@gmail.com";
	int postfind;//to find locatin of @gmail.com
	string confirm_password;
	int ch_of_checkout;
	int ch_category;
	int j;
	int cnt = 0;
	int siz_code;
	int siz_adress;
	cout << "********Shipping***********" << endl;
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
	
	do {
		cout << " Street Adress";
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

	cin.ignore(-1);
	cout << "City";
	cin >> city;
	cin.ignore(-1);
	cout << "Telephone:+92 ";
	cin >> telephone;
	cin.ignore();
	

	do
	{
		do {
			cout <<" Zip code";
			cin >> password;
			cin.ignore(-1);
			siz_password = password.size();
			if (siz_password >5)
			{
				cout << "password should be less than 5 characters" << endl;
			}
		} while (siz_password < 4);
		

		

	}

	
	cout << "Customer Info" << "\n" << "Name" << fstname + " " + lstname << "\n" << "Country" << country << "\nCity" << city << "\nState" << region << "\nStreet Adeess" << adress << endl;

	fstream myfile;
	myfile.open("liberty.txt", ios::app);
	if (!myfile)
	{
		cout << "File opening failed";
	}
	else {
		myfile << "Customer Info" << "Name" << fstname + " " + lstname << "\n" << "Country" << country << "\nCity" << city << "\nState" << region << "\nStreet Adeess" << adress << endl;

		myfile.close();
	}

}