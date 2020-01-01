
task main()
{
//for first lobster crate
//and then restart to run second crate code
forward(50);
wait(2);
stop();
pointTurn(right,50);
wait(1);
stop();
forward(50);
wait(2);
stop();
pointTurn(left,50);
wait(.75);
stop();
forward(50);
untilDark(60,S3);
stop();
pointTurn(right,50);
wait(.22);
stop();
forward(50);
untilBump(S1,1000);
stop();


}
