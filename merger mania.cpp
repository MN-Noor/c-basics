#include<iostream>
#include<string>
using namespace std;
void main()
{
	string  choice1;
	string ema;
	string pass;
	string ema1 = "@gmail.com";
	string emas;
	int postfind;//to find locatin of @gmail.com
	string nam;
	string pas1;
	string yn;//choice yes no
	int chst;
	int cc;
	char cyn;
	float price, sum = 0;
	int c1, c2, c3;
	int cpp;
   float sumad;//value of discount
	float sdp=0.2;//percentage of discount
	float fead;//toatal fee after availing discount
	int pm;
	int pin;
	int pinu = 485;
	string usid;
	string pab;
	string used = "@udemy.edu.pk";
	int ph, pf2;
	int cs;
	int x, y;
	char z;

	cout << "*****************************UDEMY*****************************"<<endl;
	cout << "Enter your choice from given options:\nLog in\nSign up" << endl;
	getline(cin, choice1);

	if ((choice1 == "Log in") || (choice1 == "log in") || (choice1 == "login") || (choice1 == "LOGIN") || (choice1 == "Login"))
	{
		do

		{
			cout << "Email adress:";//code for log in
			cin >> ema;
			if (ema == "mn05052002@gmail.com")
			{
				cout << "Correct!" << endl;
			}
			else
			{

				cout << "Wrong email adress" << endl;

			}

		} while (ema != "mn05052002@gmail.com");
		do {
			cout << "Password:";
			cin >> pass;

			if (pass == "aymen485#")
			{
				cout << "Correct!" << endl;
			}
			else
			{

				cout << "Wrong password" << endl;


			}
		} while (pass != "aymen485#");
	}
	else if ((choice1 == "sign up") || (choice1 == "Sign up") || (choice1 == "signup") || (choice1 == "SIGN UP") || (choice1 == "SIGN UP") || (choice1 == "Signup"))
	{

		do
		{
			cout << "Enter your information! \nFull name:";//code for registration of new cadidate
			getline(cin, nam);

			do

			{
				cout << "Email adress:";
				cin >> emas;
				postfind = emas.find(ema1);
				if (postfind != -1)
				{
					cout << "Correct!" << endl;
				}
				else
				{

					cout << "Wrong email adress" << endl;

				}

			} while (postfind == -1);

			cout << "Password:";
			cin >> pas1;
			system("CLS");

			cout << "Your entered information is\nName:\t" << nam << "\nEmail adress:\t" << emas << "\nPassword:\t" << pas1;


			cout << "Is this is your confirm correct information?  yes/no" << endl;
			cin >> yn;
			if (yn == "yes")
			{
				cout << "Conragulations! you are successfully registered.\nWe are happy for you to b a part of the largest learning website**Udemy**." << endl;
			}
			else if (yn == "no")
			{
				cout << "Please! enter your information again. " << endl;
				getline(cin, nam);
			}
			else
			{
				cout << "Invalid choice" << endl;
			}


		} while (yn != "yes");
		cout << "*************Conragulations!*************\n you are successfully registered.\nWe are happy for you to b a part of the largest learning website**Udemy**." << endl;
	}
	else {
		cout << "Invalid choice" << endl;
	}
	system("CLS");
	cout << "--------------------------------------------------------------------------" << endl;//code for entering in udemy website
	
	cout << " *********************Welcome to Udemy************************************" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;//checking as if candidate is student or teacher
	cout << "*****Hi" + nam << "*****" << endl;
	cout << "how would you like to persue? \n1.As a Student\n2.As a Teacher" << endl;
	cin >> chst;
	system("CLS");
	if (chst == 1)
	
		{
		do
		{



			cout << " COURSE SUBJECTS OFFERED" << endl;//showing courses to student to select
			cout << " 1- Design \n 2- Development \n 3- Marketing \n 4- IT & Software \n 5- Personal Development \n 6- Business \n 7- Photography \n 8- Music \n" << endl;
			cout << " Enter the Number of Course in which you want to register" << endl;
			cin >> c1;
			if (c1 == 1)//design if
			{
				cout << " There are 4 Sub-Catogaries of Design" << endl;
				cout << " 1- Game Design \n 2- 3D Animation \n 3- Web Design \n 4- Fashion Design" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;

				if (c2 == 1)//game design
				{
					cout << "The tutors available for this particular course **Game design** course are:\n1.Christain Dorufrain\n2.Martin Perthiniak\n3.Scott Haris";
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)//tutor 1
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:Game Design\nTutor:Christain Dorufrain\nFee Structure:$20.99\nCourse Code:111" << endl;

						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}





					}
					else if (c3 == 2)//tutor2
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:Game Design\nTutor:Martin Perthiniak\nFee Structure:$16.99\nCourse Code:112" << endl;

						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 16.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}


					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:Game Design\nTutor:Scott Haris\nFee Structure:$17.99\nCourse Code:113" << endl;//tutor3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course **3D Animation** course are:\n1.Jeyson Batcher\n2.Rick Davidon\n3.Lindsay March" << endl;//sub course 3d animation

					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Animation\nTutor:Jaysen Batcher\nFee Structure:$12.99\nCourse Code:121" << endl;//tutor 1

						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 12.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Animation\nTutor:Rick Davidon\nFee Structure:$17.99\nCourse Code:122" << endl;//tutor2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Animation\nTutor:Lindsay March\nFee Structure:$20.99\nCourse Code:123" << endl;//tutor 3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course **Web Design** course are:\n1.Joe Natoli\n2.Luay\n3.Zambarak" << endl;//wb design
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Web Design\nTutor:Natoli\nFee Structure:$51.99\nCourse Code:131" << endl;//tutor1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 51.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Web Design\nTutor:Lauay\nFee Structure:$15.99\nCourse Code:132" << endl;//tutor2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Web Design\nTutor:Zambarak\nFee Structure:$13.99\nCourse Code:133" << endl;//tutor3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 13.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course **Fashion Design** course are:\n1.John Nick\n2.Marry Noah\nJennifer John" << endl;//fashn dsign
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Fashion Design\nTutor:John Nick\nFee Structure:$50.99\nCourse Code:141" << endl;//tutor1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Fashion Design\nTutor:Marry Noah\nFee Structure:$45.99\nCourse Code:142" << endl;//tutor2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Design\nSub-Subject:3D Fashion Design\nTutor:Jennifer John\nFee Structure:$30.99\nCourse Code:143" << endl;//tutor3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else
				{
					cout << "Invalid Entry" << endl;
				}
			}
			else if (c1 == 2)
			{
				cout << " There are 4 Sub-Catogaries of Development" << endl;
				cout << " 1- Programming Language \n 2- Software Testing \n 3- Mobile Development \n 4- Database Design" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course **Programming Language** course are:\n1.Jose Portilla \n2.Daragh Walsh\n3.Zaid Sobin" << endl;//prog lang
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Programming language\nTutor:Jose Portilla\nFee Structure:$60.99\nCourse Code:211" << endl;//tutor1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 60.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Programming language\nTutor:Darah Walsh\nFee Structure:$55.99\nCourse Code:212" << endl;//tutor2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 55.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Programming language\nTutor:Zaid Sobin\nFee Structure:$40.99\nCourse Code:213" << endl;//tutor3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else {
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course **Software Testing** course are:\n1.Colt Stelle \n2.Scott Harris\n3.Stephene Marrek" << endl;//soft test
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Software Testing\nTutor:Colt Stelle\nFee Structure:$45.99\nCourse Code:221" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Software Testing\nTutor:Scott Harris\nFee Structure:$40.99\nCourse Code:222" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Software Testing\nTutor:Stephane Marrek\nFee Structure:$30.99\nCourse Code:223" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else
					{
						cout << "Invalid Choice" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course **Mobile Development** course are:\n1.Issac Rudansky \n2.Cristain DuroBrain\n3.Jonas Schedtmana" << endl;//ssmobil dev
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Mobile Development\nTutor:Issac Rudansky\nFee Structure:$65.99\nCourse Code:231" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 65.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Mobile Development\nTutor:Cristain DuroBrain\nFee Structure:$60.99\nCourse Code:232" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 60.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Mobile Development\nTutor:Jonas Schedtmana\nFee Structure:$50.99\nCourse Code:233" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;//half
						}
					}
					else {
						cout << "Invalid Entry" << endl;
					}
				}


				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course **Database Design** course are:\n1.Jacob Finney \n2.George Hub\n3.Eessa Alam" << endl;//ssdtsbdes
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Database Design\nTutor:Jacob Finney\nFee Structure:$40.99\nCourse Code:241" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Database Design\nTutor:George Hub\nFee Structure:$35.99\nCourse Code:242" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Development\nSub-Subject:Database Design\nTutor:Eessa Alam\nFee Structure:$30.99\nCourse Code:243" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;//half
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}

				}

				else
				{
					cout << "Invalid Entry" << endl;//ddddddddd
				}

			}

			else if (c1 == 3)
			{

				cout << " There are 4 Sub-Catogaries of Marketing" << endl;
				cout << " 1- Digital Marketing \n 2- Social Media Marketing \n 3- Marketing Fundamentals \n 4- Public Relation" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Digital Marketing course are:\n1.Course Envy\n2.Benjamin Wilson\n3.Issac Rudonsky" << endl;//ssdm
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Digital Marketing\nTutor:Course Envy\nFee Structure:$45.99\nCourse Code:311" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Digital Marketing\nTutor:Benjamin Wilson\nFee Structure:$40.99\nCourse Code:312" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Digital Marketing\nTutor:Issac Rudonsky\nFee Structure:$30.99\nCourse Code:313" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Social Media Marketing are:\n1.Issac Rudonsky\n2.Colt Steele\n3.Jacob Finney" << endl;//ssmm
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Social Media Marketing\nTutor:Issac Rudonsky\nFee Structure:$49.99\nCourse Code:321" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 49.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Social Media Marketing\nTutor:Colt Steele\nFee Structure:$50.99\nCourse Code:322" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Social Media Marketing\nTutor:Jacob Finney\nFee Structure:$30.99\nCourse Code:323" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Marketing Fundamental course are:\n1.Joseph Phillips \n2.Jose Portilla\n3.Maven Analytics" << endl;//ssmf
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Marketing Fundamental\nTutor:Joseph Phillips\nFee Structure:$50.99\nCourse Code:331" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Marketing Fundamental\nTutor:Jose Portilla\nFee Structure:$35.99\nCourse Code:332" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Marketing Fundamental\nTutor:Maven Analytics\nFee Structure:$40.99\nCourse Code:333" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Public Relation course are:\n1.Philip Ebiner\n2.Simon Foster\n3.Tomas George" << endl;//sspr
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Public Relation\nTutor:Philip Ebiner\nFee Structure:$40.99\nCourse Code:341" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Public Relation\nTutor:Simon Foster\nFee Structure:$60.99\nCourse Code:342" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 60.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Marketing\nSub-Subject:Public Relation\nTutor:Tomas George\nFee Structure:$30.99\nCourse Code:343" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}

				else
				{
					cout << "Invalid Entry" << endl;
				}

			}


			else if (c1 == 4)
			{
				cout << " There are 4 Sub-Catogaries of IT and Software" << endl;
				cout << " 1- Network & Security \n 2- Operating System \n 3- Hardware \n 4- IT-Certification Software" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Network Security course are:\n1.Paupa Mercier\n2.Daniel Walter Scott\n3.Lindsay Marsh";//ssns
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Network Security\nTutor:Paupa Mercier\nFee Structure:$50.99\nCourse Code:411" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Network Security\nTutor:Daniel Walter Scott\nFee Structure:$15.99\nCourse Code:412" << endl;//t2

						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Network Security\nTutor:Lindsay Marsh\nFee Structure:$35.99\nCourse Code:413" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Operating System are:\n1.Dr Angelayu\n2.Jose Portilla\n3.Stephen Grider" << endl;//ssos
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Operating System\nTutor:Dr Angelayu\nFee Structure:$12.99\nCourse Code:421" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 12.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Operating System\nTutor:Jose Portilla\nFee Structure:$35.99\nCourse Code:422" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Operating System\nTutor:Stephen Grider\nFee Structure:$70.99\nCourse Code:423" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 70.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Hardware course are:\n1.Jason Alle \n2.Robbin Hall\n3.Philip Ebiner" << endl;//sshc
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Hardware\nTutor:Jason Alle\nFee Structure:$15.99\nCourse Code:431" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Hardware\nTutor:Robbin Hall\nFee Structure:$17.99\nCourse Code:432" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Hardware\nTutor:Philip Ebiner\nFee Structure:$20.99\nCourse Code:433" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Software course are:\n1.Jacob Finney\n2.George Hubb\nScott Harris" << endl;//sssc
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Software\nTutor:Jacob Finney\nFee Structure:$40.99\nCourse Code:441" << endl;//t1
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Software\nTutor:George Hubb\nFee Structure:$65.99\nCourse Code:442" << endl;//t2
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 65.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:IT & Software Engineering\nSub-Subject:Software\nTutor:Scott Harris\nFee Structure:$30.99\nCourse Code:443" << endl;//t3
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else
				{
					cout << "Invalid Entry" << endl;
				}

			}
			else if (c1 == 5)
			{

				cout << " There are 4 Sub-Catogaries of Personal Development" << endl;
				cout << " 1- Personal Transformation \n 2- Career Development \n 3- Happiness \n 4- Leadership" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Personal Transformation course are:\n1.Dr Angelaya\n2.Lindsay Marsh\n3.Jason Allen";
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Personal Transformation\nTutor:Dr Angelaya\nFee Structure:$50.99\nCourse Code:511" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Personal Transformation\nTutor:Lindsay Marsh\nFee Structure:$30.99\nCourse Code:512" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Personal Transformation\nTutor:Jason Allen\nFee Structure:$35.99\nCourse Code:513" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Correr Develpoment are:\n1.Jacob Finney\n2.Scott Harris\n3.Philip Ebiner" << endl;
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Correr Develpoment\nTutor:Jacob Finney\nFee Structure:$79.99\nCourse Code:521" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 79.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Correr Develpoment\nTutor:Scott Harris\nFee Structure:$60.99\nCourse Code:522" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 60.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Correr Develpoment\nTutor:Philip Ebiner\nFee Structure:$59.99\nCourse Code:523" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 59.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Happiness course are:\n1.Robin Hall \n2.Stephen Grider\n3.Lindsay Marsh" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Happiness\nTutor:Robin Hall\nFee Structure:$50.99\nCourse Code:531" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Happiness\nTutor:Stephen Grider\nFee Structure:$60.99\nCourse Code:532" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 60.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Happiness\nTutor:Lindsay Marsh\nFee Structure:$25.99\nCourse Code:533" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 25.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Leadership course are:\n1.Simon Foster\n2.Thomas George\nPhil Ebiner" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Leadership\nTutor:Simon Foster\nFee Structure:$30.99\nCourse Code:541" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Leadership\nTutor:Thomas George\nFee Structure:$12.99\nCourse Code:542" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 12.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Personal Development\nSub-Subject:Leadership\nTutor:Phil Ebiner\nFee Structure:$20.99\nCourse Code:543" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else
				{
					cout << "Invalid Entry" << endl;
				}
			}
			else if (c1 == 6)
			{
				cout << " There are 4 Sub-Catogaries of Business" << endl;
				cout << " 1- Entreprenuership \n 2- Project Management \n 3- Business Law \n 4- Communication" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;

				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Entrepreneurship course are:\n1.Jatob Finney\n2.Colt Steele\n3.Jatob Finney";
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Entrepreneurship\nTutor:Jatob Finney\nFee Structure:$15.99\nCourse Code:611" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Entrepreneurship\nTutor:Colt Steele\nFee Structure:$17.99\nCourse Code:612" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-SubjectEntrepreneurship\nTutor:Jatob Finney\nFee Structure:$20.99\nCourse Code:613" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Project Managment course are:\n1.Lindsay Marsh\n2.Rick Davidon\n3.Issac Rudansky" << endl;
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Project Managment\nTutor:Joseph Phillips\nFee Structure:$35.99\nCourse Code:621" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Projrct Managment\nTutor:Lindasy Marsh\nFee Structure:30.99\nCourse Code:622" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:project Managment\nTutor:Issac Rudansky\nFee Structure:40.99\nCourse Code:623" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Bussiness Law course are:\n1.Siman Ebiner\n2.Tomas Foster\n3.Phil Ebiner" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Bussiness Law\nTutor:Natoli\nFee Structure:40.99\nCourse Code:631" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Bussiness Law\nTutor:Tomas Faster\nFee Structure:30.99\nCourse Code:632" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Bussiness Law\nTutor:phil Ebiner\nFee Structure:35.99\nCourse Code:633" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Communication course are:\n1.John Nick\n2.Marry Noah\n3.Jennifer John" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Communication\nTutor:John Nick\nFee Structure:$50.99\nCourse Code:641" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Communication\nTutor:Marry Noah\nFee Structure:$45.99\nCourse Code:642" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Bussiness\nSub-Subject:Communication\nTutor:Jennifer John\nFee Structure:$30.99\nCourse Code:643" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else {
					cout << "Invalid Entry" << endl;

				}
			}
			else if (c1 == 7)
			{
				cout << " There are 4 Sub-Catogaries of Photography" << endl;
				cout << " 1- Digital Photography \n 2- Portrait Photography \n 3- Commercial Photography \n 4- Video Design" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Digital Photography course are:\n1.Issac Rudansky\n2.Colt Steele\n3.Jatob Finney";
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Digital Photography\nTutor:Issac Rudansky\nFee Structure:$15.99\nCourse Code:711" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Digital Photography\nTutor:Colt Steele\nFee Structure:$17.99\nCourse Code:712" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Digital Photography\nTutor:Jatob Finney\nFee Structure:$20.99\nCourse Code:713" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Protrait Photography course are:\n1.Joseph Phillips\n2.Rick Davidon\n3.Issac Rudansky" << endl;
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Protrait Photography\nTutor:Joseph Phillips\nFee Structure:$35.99\nCourse Code:721" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Protrait Photography\nTutor:Rick Davidon\nFee Structure:30.99\nCourse Code:722" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:protrait Photography\nTutor:Issac Rudansky\nFee Structure:40.99\nCourse Code:723" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Commercial Photography course are:\n1.Siman Ebiner\n2.Tomas Foster\n3.Phil Ebiner" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:photography\nSub-Subject:Commercial Photography\nTutor:Natoli\nFee Structure:40.99\nCourse Code:731" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 40.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Commercial Photography\nTutor:Tomas Faster\nFee Structure:30.99\nCourse Code:732" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Commercial Photography\nTutor:phil Ebiner\nFee Structure:35.99\nCourse Code:733" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 35.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Vedio Design course are:\n1.John Nick\n2.Marry Noah\n3.Jennifer John" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Vedio Design\nTutor:John Nick\nFee Structure:$50.99\nCourse Code:741" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Photography\nSub-Subject:Vedio Design\nTutor:Marry Noah\nFee Structure:$45.99\nCourse Code:742" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:photography\nSub-Subject:Vedio Design\nTutor:Jennifer John\nFee Structure:$30.99\nCourse Code:743" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else {
					cout << "Invalid Entry" << endl;
				}

			}
			else if (c1 == 8)
			{
				cout << " There are 4 Sub-Catogaries of Music" << endl;
				cout << " 1- Music Production \n 2- Vocal Music \n 3- Techniques \n 4- Instruments" << endl;
				cout << " Enter the Number of Sub- Course according to your desire" << endl;
				cin >> c2;
				if (c2 == 1)
				{
					cout << "The tutors available for this particular course Music Production course are:\n1.Paula Mercier\n2.Jose Portilla\n3.Jatob Finney" << endl;
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Production\nTutor:Paula Mercier\nFee Structure:$17.99\nCourse Code:811" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 17.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Production\\nTutor:Jose Portilla\nFee Structure:$20.99\nCourse Code:812" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 20.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Production\nTutor:Jatob Finney\nFee Structure:$30.99\nCourse Code:813" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 2)
				{
					cout << "The tutors available for this particular course Vocal course are:\n1.Tomas George\n2.Rick Davidon\n3.Dale Mcmanus" << endl;
					cout << "Chose your favourite Tutor by entering their respective Number";
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Vocal\nTutor:Tomas George\nFee Structure:$48.99\nCourse Code:821" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 48.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}

					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Vocal\nTutor:Rick Davidon\nFee Structure:30.99\nCourse Code:822" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Vocal\nTutor:Dale Mcmanus\nFee Structure:50.99\nCourse Code:823" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}

				}
				else if (c2 == 3)
				{
					cout << "The tutors available for this particular course Music Techniques course are:\n1.Zaid Sobih\n2.Tomas Foster\n3.Phil Ebiner" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Techniques\nTutor:Zaid Sobih\nFee Structure:56.99\nCourse Code:831" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 56.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Techniques\nTutor:Tomas Faster\nFee Structure:50.99\nCourse Code:832" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 50.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Music Techniques\nTutor:phil Ebiner\nFee Structure:45.99\nCourse Code:833" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 45.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}

					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else if (c2 == 4)
				{
					cout << "The tutors available for this particular course Instrument course are:\n1.Stephen Grider\n2.Course Envy\n3.Jennifer John" << endl;
					cin >> c3;
					if (c3 == 1)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Instruments\nTutor:Stephen Grider\nFee Structure:$12.99\nCourse Code:841" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 12.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 2)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Instruments\nTutor:Course Envy\nFee Structure:$15.99\nCourse Code:842" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 15.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else if (c3 == 3)
					{
						system("CLS");
						cout << "Course:Music\nSub-Subject:Instruments\nTutor:Jennifer John\nFee Structure:$30.99\nCourse Code:843" << endl;
						cout << "Do you want this Course\n1.Yes\n2.NO" << endl;
						cin >> cpp;
						if (cpp == 1)
						{
							price = 30.99;
							sum += price;
						}
						else if (cpp == 2)
						{
							cout << "See some other courses may be you like some" << endl;
						}
						else
						{
							cout << "Invalid Entry" << endl;
						}
					}
					else
					{
						cout << "Invalid Entry" << endl;
					}
				}
				else {
					cout << "Invalid Entry" << endl;
				}
			}
			else
			{
				cout << "Invalid Choice" << endl;
			}








			cout << "Do you Want to take more Courses\ny/n: " << endl;//asking student to select more courses
			cin >> cyn;
			if (cyn == 'n')
			{
				cout << "Here is your total fee according to courses you want to enroll" << endl;
			}
			else if (cyn == 'y')
			{
				cout << "select youre desired courses from list" << endl;
			}
			else {
				cout << "Invalid Entry" << endl;
			}

		} while (cyn == 'y');

		if ((choice1 == "Log in") || (choice1 == "log in") || (choice1 == "login") || (choice1 == "LOGIN") || (choice1 == "Login"))
		{
			cout << "Total Fee: $" << sum << endl;//*************************student login*********************************************************************

			cout << "Which method of payment would you like to prefer.\n";
			cout << "1.Visa\n2.Paypal\n3.Master Card\n4.American Express\n5.ICIC Bank\n";
			cout << "Choose from options by entering digits of options: ";
			cin >> pm;
			system("CLS");
			if (pm == 1)
			{
				cout << "Redirectingyou to the bank website.............\n";
				cout << "*****Welcome to Visa******" << endl;
			}
			else if (pm == 2)
			{
				cout << "Redirecting you to the bank website.............\n";
				cout << "*****Welcome to Paypal ******" << endl;
			}
			else if (pm == 3)
			{
				cout << "Redirecting you to the bank website.............\n";
				cout << "*****Welcome to Master Card ******" << endl;
			}
			else if (pm == 4)
			{
				cout << "Redirecting you to the bank website.............\n";
				cout << "*****Welcome to American Express ******" << endl;
			}
			else if (pm == 5)
			{
				cout << "Redirecting you to the bank website.............\n";
				cout << "*****Welcome to ICIC Bank ******" << endl;
			}
			else
			{
				cout << "Invalid Entry" << endl;
			}
			do
			{
				cout << "Enter your three digit Pin code.\nPin:";
				cin >> pin;
				if (pin == pinu)
				{
					cout << "Correct Pin" << endl;
				}
				else
				{
					cout << "Invalid Pin" << endl;
				}
			} while (pin != pinu);


			do
			{

				cout << "Enter yourinformation for transaction..\n";
				cout << "User ID:";
				cin >> usid;
				pf2 = usid.find(used);
				if (pf2 != -1)
				{
					cout << "Correct!" << endl;;
				}
				else
				{

					cout << "Wrong User ID" << endl;

				}

			} while (pf2 == -1);

			do {
				cout << "Password:";
				cin >> pab;
				if (pab == "bankpas#")
				{
					cout << "Correct!" << endl;
				}
				else
				{

					cout << "Wrong password" << endl;


				}
			} while (pab != "bankpas#");



			do
			{
				cout << "Phone no:";
				cin >> ph;
				if (ph == 92341)
				{
					cout << "Correct!" << endl;
				}
				else
				{

					cout << "wrong phone no" << endl;


				}
			} while (ph != 92341);

			system("CLS");
			cout << "*******Udemy******" << endl;
			cout << "Your payment of $" << sum << " has been transferred sucessfully" << endl;//*********py
			cout << "Getting your course...............\nGet Started...\n******Share this course to others******" << endl;
		}
		//****to offer discount to new students only
		else if ((choice1 == "sign up") || (choice1 == "Sign up") || (choice1 == "signup") || (choice1 == "SIGN UP") || (choice1 == "SIGN UP") || (choice1 == "Signup"))
		{
		cout << "******************************************WELCOME TO UDEMY*************************************************************" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "*************************************Offer for New Students************************************************************" << endl;
		cout << "********************************20% Discount on every Purchase of unlimited subjects***********************************" << endl;
		cout << "*****************************************you have got 20%on your new purchase *****************************************" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
		sumad = sum * sdp;
		fead = sum - sumad;

		cout << "Total Fee: $" << sum <<"\nDiscounted price:$"<<sumad<<"\nFinal Fee after adding Discount=$"<<fead << endl;//*************************student signup*********************************************************************

		cout << "Which method of payment would you like to prefer.\n";//offering various options to transfer money
		cout << "1.Visa\n2.Paypal\n3.Master Card\n4.American Express\n5.ICIC Bank\n";
		cout << "Choose from options by entering digits of options: ";
		cin >> pm;
		system("CLS");
		if (pm == 1)
		{
			cout << "Redirectingyou to the bank website.............\n";
			cout << "*****Welcome to Visa******" << endl;
		}
		else if (pm == 2)
		{
			cout << "Redirecting you to the bank website.............\n";
			cout << "*****Welcome to Paypal ******" << endl;
		}
		else if (pm == 3)
		{
			cout << "Redirecting you to the bank website.............\n";
			cout << "*****Welcome to Master Card ******" << endl;
		}
		else if (pm == 4)
		{
			cout << "Redirecting you to the bank website.............\n";
			cout << "*****Welcome to American Express ******" << endl;
		}
		else if (pm == 5)
		{
			cout << "Redirecting you to the bank website.............\n";
			cout << "*****Welcome to ICIC Bank ******" << endl;
		}
		else
		{
			cout << "Invalid Entry" << endl;
		}
		do
		{
			cout << "Enter your three digit Pin code.\nPin:";//fixed pin485
			cin >> pin;
			if (pin == pinu)
			{
				cout << "Correct Pin" << endl;
			}
			else
			{
				cout << "Invalid Pin" << endl;
			}
		} while (pin != pinu);


		do
		{

			cout << "Enter yourinformation for transaction..\n";//user id must contain extension of@udemy.edu.pk
			cout << "User ID:";
			cin >> usid;
			pf2 = usid.find(used);
			if (pf2 != -1)
			{
				cout << "Correct!" << endl;;
			}
			else
			{

				cout << "Wrong User ID" << endl;

			}

		} while (pf2 == -1);

		do {
			cout << "Password:";
			cin >> pab;
			if (pab == "bankpas#")//password
			{
				cout << "Correct!" << endl;
			}
			else
			{

				cout << "Wrong password" << endl;


			}
		} while (pab != "bankpas#");



		do
		{
			cout << "Phone no:";
			cin >> ph;
			if (ph == 92341)
			{
				cout << "Correct!" << endl;
			}
			else
			{

				cout << "wrong phone no" << endl;


			}
		} while (ph != 92341);

		system("CLS");
		cout << "*******Udemy******" << endl;
		cout << "Your payment of $" << fead << " has been transferred sucessfully" << endl;//*********py
		cout << "Getting your course...............\nGet Started...\n******Share this course to others******" << endl;
		
 }

		}
		
	
	else if (chst == 2)//teacher
	{
	cout << "Jump into course creation" << endl;
	cout << "1-Courses\n2-Communication\n3-Performance\n4-Tools\n5-Resources" << endl;
	cin >> cs;
	if (cs == 1)
	{
		system("CLS");
		cout << " COURSE SUBJECTS OFFERED" << endl;//teacher home page option
		cout << " 1- Design \n 2- Development \n 3- Marketing \n 4- IT & Software \n 5- Personal Development \n 6- Business \n 7- Photography \n 8- Music \n" << endl;
		cout << " Enter the Number of Course in which you want to Teach" << endl;//offering subjects to teacher
		cin >> x;
		if (x == 1)
		{
			cout << " There are 4 Sub-Catogaries of Design" << endl;
			cout << " 1- Game Design \n 2- 3D Animation \n 3- Web Design \n 4- Fashion Design" << endl;
			cout << " Enter the Number of Sub- Course according to your desire" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}

		}
		else if (x == 2)
		{
			cout << " There are 4 Sub-Catogaries of Development" << endl;
			cout << " 1- Prodramming Language \n 2- Software Testing \n 3- Mobile Development \n 4- Database Design" << endl;
			cout << " Enter the Number of Sub- Course which you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 3)
		{
			cout << " There are 4 Sub-Catogaries of Marketing" << endl;
			cout << " 1- Digital Marketing \n 2- Social Media Marketing \n 3- Marketing Fundamentals \n 4- Public Relation" << endl;
			cout << " Enter the Number of Sub- Course you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 4)
		{
			cout << " There are 4 Sub-Catogaries of It and software" << endl;
			cout << " 1- Network & Security \n 2- Operating System \n 3- Hardware \n 4- IT-Certification Software" << endl;
			cout << " Enter the Number of Sub- Course which do you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 5)
		{
			cout << " There are 4 Sub-Catogaries of Personal Development" << endl;
			cout << " 1- Personal Transformation \n 2- Career Development \n 3- Happiness \n 4- Leadership" << endl;
			cout << " Enter the Number of Sub- Course which do you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 6)
		{
			cout << " There are 4 Sub-Catogaries of Business" << endl;
			cout << " 1- Entreprenuership \n 2- Project Management \n 3- Business Law \n 4- Communication" << endl;
			cout << " Enter the Number of Sub- Course which do you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 7)
		{
			cout << " There are 4 Sub-Catogaries of Photography" << endl;
			cout << " 1- Digital Photography \n 2- Portrait Photography \n 3- Commercial Photography \n 4- Video Design" << endl;
			cout << " Enter the Number of Sub- Course according to your desire" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}
		else if (x == 8)
		{
			cout << " There are 4 Sub-Catogaries of Music" << endl;
			cout << " 1- Music Production \n 2- Vocal Music \n 3- Techniques \n 4- Instruments" << endl;
			cout << " Enter the Number of Sub- Course which you want to teach" << endl;
			cin >> y;
			if (y == 1)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 2)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}
			else if (y == 3)
			{
				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;
				}
			}

			else if (y == 4)
			{

				cout << " Do You Want to teach this Course?" << endl;
				cout << " Enter 'y' for YES \n Enter 'n' for NO" << endl;
				cin >> z;
				if (z == 'y')
				{

					cout << " You have successfully registered for this Course" << endl;
					cout << " You will receive an E-mail shortly" << endl;
				}
				else if (z == 'n')
				{
					cout << " PROGRAM EXITED" << endl;
				}
				else
				{
					cout << " INVALID" << endl;

				}
			}
			else
			{
				cout << " INVALID" << endl;

			}
		}



	}
	else if (cs == 2)//other different option for teachers home page accessories
	{
		system("CLS");
		cout << "Communication" << endl;
		cout << " 1 - Q & A\n2 - Message\n3 - Assignment\n4 - Announcement" << endl;


	}
	else if (cs == 3)
	{
		system("CLS");
		cout << "Performance" << endl;
		cout << "1-Overview\n2-Student\n3-Reviews\n4-Course engagement\n5-Traffic and Conversion" << endl;

	}
	else if (cs == 4)
	{
		system("CLS");
		cout << "Tools" << endl;
		cout << "1-Test video\n2-Marketplace\n3-Insights" << endl;

	}
	else if (cs == 5)
	{
		system("CLS");
		cout << "Resources" << endl;
		cout << "1-Teaching Center\n2- Instructor Community\n3-Help and Support" << endl;

	}
	else
	{
		cout << "Invalid Entry" << endl;
	}

	}
	else
	{
		cout << "Invalid Entry" << endl;
	}
	system("pause");
}