
task main()
{
//////****code to get first coconuts

forward(50);
wait(2);
stop();


//////****code to get second coconuts

pointTurn(left, 50);
wait(1);
stop();

forward(80);
untilDark(60, S3);
stop();
forward(50);
wait(3);
stop();

//retreat
backward(50);
wait(4.5);
stop();
pointTurn(left,50);
wait(1);
stop();
forward(50);
untilSonarLessThan(5,S4);
stop();
pointTurn(left,50);
wait(1);
stop();
forward(50);
untilLight(80,S3);
stop();


}
