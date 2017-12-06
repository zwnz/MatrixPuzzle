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
			  m1 = pedestal + arm + engine + 0.5 * battery   ;                                    // 机器人拿货时的质量 
			  m2 = pedestal + arm + engine + 0.5 * battery  + 2 * arm ;                           // 机器人回来时的质量
			  v1 = 3 * engine - 0.5 * m1;                                                         // 机器人拿货的速度 
			  v2 = 3 * engine - 0.5 * m2;                                                         //机器人回来的速度
			if(v1>0&&v2>0)
			    {
			  	 t1 = numble * (s/v1) + numble * 2;                                               //机器人去拿货路上和拿货的时间 
			  	 t2 = numble * (s/v2);                                                            // 机器人回来时路上的时间 
			  	 if(3 * battery >= t1 + t2)
				   {
			  		time[arm-1][engine-1][battery-1] = t1 + t2;
			  		printf("time=%f\n",time[arm-1][engine-1][battery-1]);
			  	   }
			  	else
			    	printf("不成立\n");
			    }
			else 
				 printf("不成立\n");
		    }
     }
	 
	 int  a , b , c;
     for(arm = 1 ; arm <= 9 ; arm++ ) 
       	for(engine = 1 ; engine <= 9; engine++ )
       		for( battery = 1 ; battery <=9 ; battery++)
       			 if(time[arm-1][engine-1][battery-1]>0)
					{                                                                              
       			 	  a = arm - 1 , b = engine - 1 , c =  battery - 1 ;
       			 	}                                                                               //取出一个跟后面比较的数 
       			 	
	 for(arm=1 ; arm<=9 ; arm++)
	    for(engine=1 ; engine<=9 ; engine++)
	        for(battery=1 ; battery<=9 ; battery++)
		        if(time[arm-1][engine-1][battery-1]>0 && time[a][b][c]>time[arm-1][engine-1][battery-1])
		     {
		     	a=arm-1 , b=engine-1 , c=battery-1;
			 }                                                                                       //比较出最优解 
			 printf("best : arm=%d,enginer=%d,battery=%d,time=%f\n", a+1,b+1,c+1,time[a][b][c]);      
			 return 0;	
} 

