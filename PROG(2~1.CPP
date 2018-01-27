#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


	float amount (float princ,int time, float rate)
	{
		cout<<"\tprincipal amount: "<<princ;

		cout<<"\ttime: "<<time<<"years";

	    cout<<"\trate: "<<rate<<'\n';

		return(princ*(time*rate));

	}

	 float amount (float princ,int time)
	{
		cout<<"\tprincipal amount: " <<princ;

		cout<<"\ttime: "<<time<<" years";

		cout<<"\trate :0.08\n";

		return(princ*(time*0.08));
	}

	 float amount(float princ,float rate)
	{
		cout<<"\tPrincipal amount:"<<princ;

		cout<<"\tTime:2 years\n";

		cout<<"\tRate:"<<rate<<'\n';

		return(princ*(2*rate));
	}

	 float amount (int time,float rate)
	{
		cout<<"\tprincipal amount: 2000";

		cout<<"\tTime: "<<time<<"years";

		cout<<"\tRate: "<<rate<<'\n';

		return(2000*(rate*time));
	}

	float amount(float princ)
	{
		cout<<"\tPrincipal amount: "<<princ;

		cout<<"\tTime: 2 years";

		cout<<"\tRate: 0.08\n";

		return(princ*(2*0.08));

	}


//__________________________begining of main function__________________

int main()
{
	system("cls");

	cout<<"case 1:\n";

	cout<<"\tcalculated interset is: "<<amount(2.000F)<<'\n';

	cout<<"\ncase 2:\n";

	cout<<"\tcalculated interset is: "<<amount(2500.0F,3)<<'\n';

	cout<<"\ncase 3:\n";

	cout<<"\tcalculated interset is: "<<amount(2300.0F,3,0.11F)<<'\n';

	cout<<"\ncase 4:\n";

	cout<<"\tcalculated interset is: "<<amount(2,0.12F)<<'\n';

	cout<<"\ncase 5:\n";

	cout<<"\tcalculated interset is: " <<amount(6,0.07F)<<'\n';

	getch();

	return 0;

}








