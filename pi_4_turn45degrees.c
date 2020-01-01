
task main()
{
// Go to starting point
//(the middle one of 3 starting points
//by the first bridge you travelled over)
forward(50);
untilLight(80,S3);
stop();
forward(50);
wait(.5);
stop();
pointTurn(right,50);
wait(.75);
stop();
forward(50);
wait(4);
stop();

}
