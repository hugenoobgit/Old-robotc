task main()
{

while(true)
{


	//untilDark(40,S3);
   int PrintMe = SensorValue(S3);
   pointTurn(left,50);
   //untilRelease(S1);
   wait(1);
   forward(50);
   int PrintMeToo =SensorValue(S3);
   untilLight(40,S3);
   untilTouch(S1);
   nxtDisplayCenteredTextLine(3, "%d, %d", PrintMe, PrintMeToo);
}
stop();
}
