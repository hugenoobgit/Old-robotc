
task main()
{
int avoidvar =0;
while(SensorValue(S3)<70)
{
	if (SensorValue(S1)==0)avoidvar=1;
	if (SensorValue(S1)==1)avoidvar=2;


	switch(avoidvar)
	{
	 case 1:
	 	forward(50);
   	untilLight(S3,70);
   	break;

   case 2:
 	 	pointTurn(left,50);
   	wait(1);
   	forward(50);
   	untilLight(S3,70);
   	break;
  }
}
stop();

}
