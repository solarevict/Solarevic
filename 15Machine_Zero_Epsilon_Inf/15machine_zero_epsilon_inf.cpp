#include <iostream>
#include <limits>

using namespace std;

int main()
{
	double dbl_zero, dbl_eps, dbl_m;
	float flt_zero, flt_eps, flt_m;
	long double lng_zero, lng_eps, lng_m;

	//DOUBLE

	std:: cout << "DOUBLE\n";

	dbl_zero=0.5;
	dbl_eps= 1.0;
	dbl_m=1.0;
	double notdbl_inf=1.0;
	double dbl_max=2.0;
	double dbl_inf=1.0;
	int count = 0;
	double notdbl_mininf=1.0;
	double dbl_min=2.0;
	double dbl_mininf=1.0;
	int count2 = 0;

	do 
	{
		dbl_eps/=2;
	} while (1.0 +dbl_eps > 1.0);

	std::cout << "Machine epsilon :" << 2*dbl_eps << "\n";

	while(dbl_m>dbl_zero) 
	{
		dbl_m=dbl_zero;
		if(dbl_zero/2 != 0) 
		{
			dbl_zero=dbl_zero/2.0;

		}
		else break;
	}
	
	std:: cout << "Machine zero: " << dbl_zero << "\n";
	std:: cout << "Substracting machine zero and machine epsilon: " << 2*dbl_eps-dbl_zero << "\n";


	while(dbl_max>notdbl_inf) 
	{
		notdbl_inf=dbl_max;
		dbl_max*=2.0;
		count ++;
	}
	
	for(int i=0; i<(count-1); i++) 
	{
		dbl_inf*=2.0;
	} 

	std:: cout << "Maximal value: " << dbl_inf << "\n";

	while(dbl_min<notdbl_mininf) 
	{
		notdbl_mininf=dbl_min;
		dbl_max/=2.0;
		count ++;
	}
	
	for(int i=0; i<(count-1); i++) 
	{
		dbl_mininf/=2.0;
	} 

	std:: cout << "Minimal value: " << dbl_mininf << "\n\n" << "Press enter for next type!\n";
	getchar();

	//FLOAT

	std:: cout << "FLOAT\n";

	flt_zero=0.5;
	flt_eps= 1.0;
	flt_m=0.9;
	double notflt_inf=1.0f;
	double flt_max=2.0f;
	double flt_inf=1.0f;
	int fcount = 0;
	double notflt_mininf=1.0f;
	double flt_min=2.0f;
	double flt_mininf=1.0f;
	int fcount2 = 0;

	do 
	{
		flt_eps/=2;
	} while (1.0f +flt_eps > 1.0f);

	std::cout << "Machine epsilon :" << 2*flt_eps << "\n";

	while(flt_m>flt_zero) 
	{
		flt_m=flt_zero;
		if(flt_zero/2 != 0) 
		{
			flt_zero=flt_zero/2.0;

		}
		else break;
	}
	
	std:: cout << "Machine zero: " << flt_zero << "\n";
	std:: cout << "Substracting machine zero and machine epsilon: " << 2*flt_eps-flt_zero << "\n";

	while(flt_max>notflt_inf) 
	{
		notflt_inf=flt_max;
		flt_max*=2.0f;
		fcount ++;
	}
	
	for(int i=0; i<(fcount-1); i++) 
	{
		flt_inf*=2.0f;
	} 

	std:: cout << "Maximal value: " << flt_inf << "\n";

	while(flt_min<notflt_mininf) 
	{
		notflt_mininf=flt_min;
		flt_max/=2.0f;
		fcount ++;
	}
	
	for(int i=0; i<(count-1); i++) 
	{
		flt_mininf/=2.0f;
	} 

	std:: cout << "Minimal value: " << flt_mininf << "\n\n" << "Press enter for next type!\n";
	getchar();

	//LONG DOUBLE

	std:: cout << "LONG DOUBLE\n";

	lng_zero=0.9;
	lng_eps= 1.0;
	lng_m=1.0;
	long double two=2.0;
	long double notlng_inf=1.0;
	long double lng_max=2.2;
	long double lng_inf=1.0;
	int lcount = 0;
	long double notlng_mininf=1.0;
	long double lng_min=2.0;
	long double lng_mininf=1.0;
	int lcount2 = 0;

	while (1.0 +lng_eps > 1.0)
	{
		lng_eps=lng_eps/two;
	} 

	std::cout << "Machine epsilon :" << 2*lng_eps << "\n";

	while(lng_m>lng_zero) 
	{
		lng_m=lng_zero;
		if(lng_zero/2.0 != 0) 
		{
			lng_zero/=two;

		}
		else break;
	}
	
	std:: cout << "Machine zero: " << lng_zero << "\n";
	std:: cout << "Substracting machine zero and machine epsilon: " << lng_eps-lng_zero << "\n";

	while (lng_max>notlng_inf) 
	{
		notlng_inf=lng_max;
		lng_max*=2.0;
		lcount ++;
	}
	
	for(int i=0; i<(lcount-1); i++) 
	{
		lng_inf*=2.0;
	} 

	std:: cout << "Maximal value: " << lng_inf << "\n";

	while(lng_min<notlng_mininf) 
	{
		notlng_mininf=lng_min;
		lng_max/=2.0;
		lcount2 ++;
	}
	
	for(int i=0; i<(lcount-1); i++) 
	{
		lng_mininf/=2.0;
	} 

	std:: cout << "Minimal value: " << lng_mininf << "\n\n" << "THE END\n";
	getchar();
return 0;
}

