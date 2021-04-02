#include<iostream>
#include<fstream>
using namespace std;
class CNMS
{
    int i,j,d,m;
    string a[6][13];
public:
    void input();
    void output();
    void display();
    void logic();
};
void CNMS::display()
{
    cout<<"Lab Id\tNo. of Computers\tNo. of software required\t No. of software installed\tNo. of system working\tComputer ID\tName of software\t problem type\tproblem Status\tIncharge id\tIncharge Contact No.\tIncharge Name\tIncharge Present Status"<<endl;
}
void CNMS::input()
{
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=13;j++)
        {
            if(j==0)
            {
                cout<<"Enter Lab Id(Enter Integer):";
                cin>>a[i][j];
                //a[i][j]="a";
            }
            else if(j==1)
            {
                cout<<"Enter No. of Computers(Enter Integer):";
                cin>>a[i][j];
   //             a[i][j]="aa";
            }

            else if(j==2)
            {
               cout<<"Enter No. of software required(Enter Integer):";
                cin>>a[i][j];
                //a[i][j]="aaa";

            }
            else if(j==3)
            {
                cout<<"Enter No. of Software installed(Enter Integer) :";
                cin>>a[i][j];
    //                            a[i][j]="aaaa";

            }

            else if(j==4)
            {
                cout<<"Enter No. of system working(Enter Integer):";
                 cin>>a[i][j];
  //                a[i][j]="aaaaa";

            }
            else if(j==5)
            {
                cout<<"Enter Computer  Id(Enter Integer):";
                cin>>a[i][j];
  //            a[i][j]="aaaaaa";

            }
            else if(j==6)
            {
                cout<<"Enter Name of Software(Enter String):";
                cin>>a[i][j];
   //             a[i][j]="aaaaaaa";

            }
            else if(j==7)
            {
                cout<<"Enter Problem Type(Enter String):";
                cin>>a[i][j];
            //  a[i][j]="aaaaaaaa";

            }
            else if(j==8)
            {
            cout<<"Enter Problem Status(Enter String):";
               cin>>a[i][j];
                //a[i][j]="aaaaaaaaa";

            }
            else if(j==9)
            {
                cout<<"Enter Incharge Id(Enter Integer):";
                cin>>a[i][j];
                //a[i][j]="aaaaa";

            }
            else if(j==10)
            {
               cout<<"Enter Incharge Contact No.(Enter Integer):";
                               cin>>a[i][j];
               //a[i][j]="aaaaaa";

            }
            else if(j==11)
            {
                cout<<"Enter Incharge Name(Enter String):";
                //                a[i][j]="aaaaaaaaaa";

                cin>>a[i][j];
            }
            else if(j==12)
            {
                cout<<"Enter Incharge Present Status(Enter String):";
                cin>>a[i][j];
          //        a[i][j]="aaaaaaaaaaaaaaaaaaaaaa";

            }
             else if(j==13)
            {
                cout<<"Enter No. of system Not Working(Enter Integer):";
                cin>>a[i][j];
          //        a[i][j]="aaaaaaaaaaaaaaaaaaaaaa";

            }


        }
    }
}
void CNMS::output()
{
    for(i=0;i<=5;i++)

    {
        for(j=0;j<=13;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
//m:
void CNMS::logic()
{
    cout<<"press 1 to Display all the labs in which ‘Adobe Photoshop’ software is installed."<<endl;
    cout<<"press 2 to Display the list of softwares which are required in ‘Lab1’ along with its incharge complete details."<<endl;
    cout<<"press 3 to Display all the systems which are not working properly in Lab 3 and Lab 5."<<endl;
    cout<<"press 4 to Display the list of softwares installed in each lab along with the new ones needed."<<endl;
    cout<<"press 5 to Display the complete list of Incharge Id, his name, working in lab name, all computers available in that lab."<<endl;
    cout<<"press 6 to Display all the systems which have problem type as ‘Networking issue’ and are managed by the Network incharge ‘Lal’"<<endl;
    cout<<"press 7 to Display all the systems according to Lab alphabetically in which problem status is still ‘pending’."<<endl;
    cout<<"Enter your Choice";
    cin>>d;
    switch(d)
    {
    case 1:
        {
             if((a[0][6]=="Adobe Photoshop"))
           {
                cout<<"Lab id"<< a[0] ;
           }
        else if((a[1][6]=="Adobe Photoshop"))
           {
                cout<<"Lab id"<< a[1];
           }
         else if((a[2][6]=="Adobe Photoshop"))
            {
                cout<<"Lab id"<< a[2];
           }
        else if((a[3][6]=="Adobe Photoshop"))
            {
                cout<<"Lab id"<< a[3];
           }
        else if((a[4][6]=="Adobe Photoshop"))
            {
                cout<<"Lab id"<< a[4];
           }
        else if((a[5][6]=="Adobe Photoshop"))
            {
                cout<<"Lab id"<< a[5];
           }
        else
        {
            cout<<"no labs having software installed having name Adobe Photoshop";
        }
        }
        break;
    case 2:
        {
            cout<<"No. of software required Incharge Id Incharge Contact No.\tIncharge Name\tIncharge Present Status"<<endl;
            cout<<a[0][2]<<"\t"<<"\t"<<"\t"<<a[0][9]<<"\t"<<"\t"<<a[0][10]<<"\t"<<"\t"<<a[0][11]<<"\t"<<a[0][12]<<endl;
        }
        break;
    case 3:
        {
            cout<<"No. of systems not working properly in lab 3 and lab 5"<<endl;
            cout<<a[2][13]<<"\t"<<a[4][13]<<endl;
        }
        break;
    case 4:
        {
            cout<<"Software installed\t Software Required\n";
            cout<<a[0][3]<<"\t"<<"\t"<<"\t"<<a[0][2]<<endl;
            cout<<a[1][3]<<"\t"<<"\t"<<"\t"<<a[1][2]<<endl;
            cout<<a[2][3]<<"\t"<<"\t"<<"\t"<<a[2][2]<<endl;
            cout<<a[3][3]<<"\t"<<"\t"<<"\t"<<a[3][2]<<endl;
            cout<<a[4][3]<<"\t"<<"\t"<<"\t"<<a[4][2]<<endl;
            cout<<a[5][3]<<"\t"<<"\t"<<"\t"<<a[5][2]<<endl;
        }
        break;
    case 5:
        {
            cout<<"Lab Id\tIncharge Id\tIncharge Name\tComputer Available"<<endl;
            cout<<a[0][0]<<"\t"<<a[0][9]<<"\t"<<"\t"<<a[0][11]<<"\t"<<a[0][4]<<endl;
            cout<<a[1][0]<<"\t"<<a[1][9]<<"\t"<<"\t"<<a[1][11]<<"\t"<<a[1][4]<<endl;
            cout<<a[2][0]<<"\t"<<a[2][9]<<"\t"<<"\t"<<a[2][11]<<"\t"<<a[2][4]<<endl;
            cout<<a[3][0]<<"\t"<<a[3][9]<<"\t"<<"\t"<<a[3][11]<<"\t"<<a[3][4]<<endl;
            cout<<a[4][0]<<"\t"<<a[4][9]<<"\t"<<"\t"<<a[4][11]<<"\t"<<a[4][4]<<endl;
            cout<<a[5][0]<<"\t"<<a[5][9]<<"\t"<<"\t"<<a[5][11]<<"\t"<<a[5][4]<<endl;
        }
    case 6:
			{
				for(i=0;i<2;i++)
				{
					if(a[i][7]=="networking_issues"&&a[i][11]=="lal")
					{
				 		cout << a[i][1] << endl;
				 		cout << a[i][2] << endl;
				 		cout << a[i][3] << endl;
				 		cout << a[i][4] << endl;
				 		cout << a[i][5] << endl;
				 		cout << a[i][6] << endl;
				 		cout << a[i][7] << endl;
				 		cout << a[i][8] << endl;
				 		cout << a[i][9] << endl;
				 		cout << a[i][10] << endl;
				 		cout << a[i][11] << endl;
					}
				}
			}
			break;

			case 7:
				{
					for(i=0;i<2;i++)
					{
						if(a[i][8]=="pending")
						{
						cout << a[i][1] << endl;
				 		cout << a[i][2] << endl;
				 		cout << a[i][3] << endl;
				 		cout << a[i][4] << endl;
				 		cout << a[i][5] << endl;
				 		cout << a[i][6] << endl;
				 		cout << a[i][7] << endl;
				 		cout << a[i][8] << endl;
				 		cout << a[i][9] << endl;
				 		cout << a[i][10] << endl;
				 		cout << a[i][11] << endl;

						}
					}
				}

    }
       // goto m;
}
int main()
{
//    clrscr();
    CNMS ob1;
    ob1.input();
    ob1.display();
    ob1.output();
    ob1.logic();
    ob1.logic();
    ob1.logic();
    ob1.logic();
    ob1.logic();
    ob1.logic();
    ob1.logic();

}
