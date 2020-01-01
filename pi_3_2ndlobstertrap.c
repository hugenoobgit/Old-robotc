
task main()
{

forward(50);
wait(2);
stop();
pointTurn(right,50);
wait(1);
stop();
forward(50);
wait(2);
stop();
pointTurn(right,50);
wait(.5);
stop();
forward(50);
untilDark(60,S3);
stop();
forward(50);
untilBump(S1,1000);
stop();


}
