#include<stdio.h>           
#include<math.h> 
int main()
{
	int  arm , engine , battery , numble , pedestal = 2 ,s = 10 ; 
	double  v1, v2 ,  m1 , m2 , t1 , t2 , time[9][9][9]={0};
	for(arm = 1 ; arm <= 9 ; arm++ )
    {
		if(20%(arm * 2) == 0)
		 numble = 20 / (arm * 2);
		 else 
		 numble = 20 / (arm * 2) + 1;
		for(engine = 1 ; engine <= 9 ; engine++ ) 
			for( battery = 1 ; battery <=9 ; battery++)
			{ 
			printf("arm=%d,engine=%d,battery=%d\n",arm,engine,battery);
			  m1 = pedestal + arm + engine + 0.5 * battery   ;                                    // �������û�ʱ������ 
			  m2 = pedestal + arm + engine + 0.5 * battery  + 2 * arm ;                           // �����˻���ʱ������
			  v1 = 3 * engine - 0.5 * m1;                                                         // �������û����ٶ� 
			  v2 = 3 * engine - 0.5 * m2;                                                         //�����˻������ٶ�
			if(v1>0&&v2>0)
			    {
			  	 t1 = numble * (s/v1) + numble * 2;                                               //������ȥ�û�·�Ϻ��û���ʱ�� 
			  	 t2 = numble * (s/v2);                                                            // �����˻���ʱ·�ϵ�ʱ�� 
			  	 if(3 * battery >= t1 + t2)
				   {
			  		time[arm-1][engine-1][battery-1] = t1 + t2;
			  		printf("time=%f\n",time[arm-1][engine-1][battery-1]);
			  	   }
			  	else
			    	printf("������\n");
			    }
			else 
				 printf("������\n");
		    }
     }
	 
	 int  a , b , c;
     for(arm = 1 ; arm <= 9 ; arm++ ) 
       	for(engine = 1 ; engine <= 9; engine++ )
       		for( battery = 1 ; battery <=9 ; battery++)
       			 if(time[arm-1][engine-1][battery-1]>0)
					{                                                                              
       			 	  a = arm - 1 , b = engine - 1 , c =  battery - 1 ;
       			 	}                                                                               //ȡ��һ��������Ƚϵ��� 
       			 	
	 for(arm=1 ; arm<=9 ; arm++)
	    for(engine=1 ; engine<=9 ; engine++)
	        for(battery=1 ; battery<=9 ; battery++)
		        if(time[arm-1][engine-1][battery-1]>0 && time[a][b][c]>time[arm-1][engine-1][battery-1])
		     {
		     	a=arm-1 , b=engine-1 , c=battery-1;
			 }                                                                                       //�Ƚϳ����Ž� 
			 printf("best : arm=%d,enginer=%d,battery=%d,time=%f\n", a+1,b+1,c+1,time[a][b][c]);      
			 return 0;	
} 

