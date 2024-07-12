#include<iostream>
using namespace std;
struct patient 
{
	string name;
	string fname;
	string symptoms;
	int duration;
	int dfb;
	long double cno;
	int id;
	int pay;
};
int main()
{
	int fee,k=0;
	int feverd=642,braind=220,boned=349,heartd=453,lungsd=553,covidd=600,eyed=543;
	patient p[50];
	for(int i=0;i<50;i++)
	{
		if(i>=1)
		{
		int ask=0;
		cout<<"Do you want to search the detail any patient press '1' for yes and '0' for No : "<<endl;
		cin>>ask;
		if(ask==1)
		break;
		}
		cout<<"Enter Patient Name : "<<endl;
		cin.ignore();
		getline(cin,p[i].name);
		cout<<"Enter Patient Father Name : "<<endl;
		getline(cin,p[i].fname);
		cout<<"Enter the duration of Disease : "<<endl;
		cin>>p[i].duration;
		cout<<"Enter the date of Birth : "<<endl;
		cin>>p[i].dfb;
		cout<<"Enter contact no : "<<endl;
		cin>>p[i].cno;
		cout<<"Enter Disease Patient out of 'fever','bone','heart','brain','lungs','covid','eye' : "<<endl;
		cin.ignore();
		getline(cin,p[i].symptoms);
		if(p[i].symptoms=="fever"||p[i].symptoms=="bone"||p[i].symptoms=="heart"||p[i].symptoms=="brain"||p[i].symptoms=="lungs"||p[i].symptoms=="covid"||p[i].symptoms=="eye")
		{
		system("CLS");
		for(int j=0;j<50;j++)
		{
			cout<<"Your Id is : "<<k+1<<endl;
			p[i].id=k+1;
			k++;
			cout<<"Please pay the Entry 500RS : "<<endl;
			cout<<"Enter '1' if paid and if not please Enter '0' :"<<endl;
			cin>>fee;
			if(fee==1)
			{
			p[i].pay=1;
			cout<<"Patient name is : "<<p[j].name<<endl;
			cout<<"Patient Father name is : "<<p[j].fname<<endl;
			cout<<"Patient contact no : "<<p[j].cno<<endl;
			cout<<"Patient date of Birth : "<<p[j].dfb<<endl;
			cout<<"Patient duration of Disease : "<<p[j].duration<<endl;
			if(p[j].symptoms=="fever")
			{
			cout<<"Your Doctor is in Room : "<<feverd<<endl;
			cout<<"DR Name is Dr F "<<endl;
			break;
			}
			else if(p[j].symptoms=="bone") 
			{
			cout<<"Your Doctor is in Room : "<<boned<<endl;
			cout<<"DR Name is DR B  "<<endl;
			break;
			}
			else if(p[j].symptoms=="heart")
			{
			cout<<"Your Doctor is in Room : "<<heartd<<endl;
			cout<<"DR Name is DR H "<<endl;
			break;
			}
			else if(p[j].symptoms=="brain")
			{
			cout<<"Your Doctor is in Room : "<<braind<<endl;
			cout<<"DR Name is DR Br"<<endl;
			break;
			}
			else if(p[j].symptoms=="lungs")
			{
			cout<<"Your Doctor is in Room : "<<lungsd<<endl;
			cout<<"Your DR Name is DR L"<<endl;
			break;
			}
			else if(p[j].symptoms=="covid")
			{
			cout<<"Your Doctor is in Room : "<<covidd<<endl;
			cout<<"Your DR Name is DR C"<<endl;
			break;
			}
			else if(p[j].symptoms=="eye")
			{
			cout<<"Your Doctor is in Room :"<<eyed<<endl;
			cout<<"Your DR Name is DR E"<<endl;
			break;
			}
			else
			{
			cout<<"Enter a valid input "<<endl;
			break;
			}		
			}
			else
			{
			j++;
			break;
			}
			
		}
		cout<<endl;
		system("pause");
		system("CLS");
	}
		else
		continue;
	}
	system("CLS");
	int s=0;
	for(int i=0;i<50;i++)
	{
		cout<<"Enter the Patient Id you want to Search and press '-1' to stop : "<<endl;
		cin>>s;
		if(s==-1)
		break;
		if(s==p[s-1].id&&p[s-1].pay==1)
		{
		cout<<"Patient name is : "<<p[s-1].name<<endl;
		cout<<"Patient Father name is : "<<p[s-1].fname<<endl;
		cout<<"Patient contact no : "<<p[s-1].cno<<endl;
		cout<<"Patient date of Birth : "<<p[s-1].dfb<<endl;
		cout<<"Patient duration of Disease : "<<p[s-1].duration<<endl;
		cout<<"Patient Disease : "<<p[s-1].symptoms<<endl;
		}
		else
		cout<<"Patient is not in our Record : "<<endl;
	}
}
