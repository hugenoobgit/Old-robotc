
task main()
{
while(true)
{


   forward(50);
   wait(2);
   untilLight(1,S3);
   stop();
   pointTurn(left,50);

   wait(1);


}

}
