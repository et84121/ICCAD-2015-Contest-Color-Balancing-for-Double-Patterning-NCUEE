#include<iostream>
#include<fstream>
#include<vector>
#include "group.h"
#include "term.h"
#include "rectangle.h"

using namespace std;

int main(int argc, char *argv[])
{
/*
    if(argc<2){     //didn't have input file
    cout<<"Please add file name"<<endl;
   }
    else{           //file open
        int NOF=1;      //number of file
        while(NOF<argc){
        string FileDetect; //Detect if Filename Extension is wrong or not

        ifstream fatmanRead(argv[NOF], ios::in);

        string arg=argv[NOF];

        if(arg.size()>4){   //detect filename correct or not
        FileDetect=FileDetect.assign(arg,arg.size()-4,arg.size());
            if(FileDetect==".txt")
            {
                if(!fatmanRead.eof())
                {
                    int term_top;
                    int term_bottom;
                    int term_left;
                    int term_right;
                    int capacity_main=1;
                    int count=0;


                    rectangle r(capacity_main);
                    while(!fatmanRead.eof())
                    {
                        //Ū��
                        fatmanRead>>term_left;
                        fatmanRead>>term_bottom;
                        fatmanRead>>term_right;
                        fatmanRead>>term_top;
                        r.newterm(term_top,term_bottom,term_left,term_right);
                        //�NŪ�쪺�Ȧs�i�}�C��
                        count++;
                    }

                        r.print();//�L�X��l�ƾ�
                        r.copy_left_f();//����ɱƧ�
                        r.copy_right_f();//�k��ɱƧ�
                        r.copy_top_f();//�W��ɱƧ�
                        r.copy_bottom_f();//�U��ɱƧ�
                        cout<<endl;

                        r.x_grouping();
                        r.x_group_print();
                        cout<<endl;

                        r.y_grouping();
                        r.y_group_print();
                        cout<<endl;

                         for(int a=0;a<group::groups.size();a++){
                            group::groups[a]->print();
                        }
                    NOF++; //next file
                }
                else{
                    cerr<<"Something went wrong!!"<<endl<<"Please check file"<<endl;
                }
            }
        }
        else{       //when file name is wrong
        cerr<<"Something went worng!!"<<endl<<"Please check file name"<<endl;
        }

        //output file
        //ofstream fatmanWrite(, ios::out);

            }//the end of while

}//end of file open
*/
    int term_top;
    int term_bottom;
    int term_left;
    int term_right;
    int capacity_main=1;
    int count=0;

    ifstream input("CADtest.txt");
    rectangle r(capacity_main);

    while(!input.eof())
    {
        //Ū��
        input>>term_left;
        input>>term_bottom;
        input>>term_right;
        input>>term_top;
        r.newterm(term_top,term_bottom,term_left,term_right);
        //�NŪ�쪺�Ȧs�i�}�C��
        count++;
    }

    r.print();//�L�X��l�ƾ�
    r.copy_left_f();//����ɱƧ�
    r.copy_right_f();//�k��ɱƧ�
    r.copy_top_f();//�W��ɱƧ�
    r.copy_bottom_f();//�U��ɱƧ�
    cout<<endl;

    r.print_test_if_group();//����if_group�O�_��default��
    cout<<endl;

	r.x_grouping();
	r.x_group_print();
	cout<<endl;

    r.print_test_if_group();//����if_group�O�_��default��
    cout<<endl;

//    r.print_test_if_conflict();//����if_group�O�_��default��
//	cout<<endl;

	r.y_grouping();
	r.y_group_print();
	cout<<endl;

    r.print_test_if_group();//����if_group�O�_��default��
    cout<<endl;

//    r.print_test_if_conflict();//����if_group�O�_��default��
//    cout<<endl;

    //print all of groups
    for(int a=0;a<group::groups.size();a++){
        group::groups[a]->print();
    }

    //In_whitch_gruop static function using example
    cout<<group::In_which_group(&r.termarr[3])+1<<endl;



    return 0;
}
