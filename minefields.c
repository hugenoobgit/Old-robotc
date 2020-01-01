
task main()
{
forward(50);
untilDark(10,S3);
stop();

swingTurn(right,60);
wait(.2);
stop();

forward(50);
wait(3);
stop();

swingTurn(left,60);
wait(.5);
stop();

forward(50);
untilDark(10,S3);
stop();

pointTurn(right);
wait(.3);
stop();

forward(50);
wait(1.5);
stop();

pointTurn(right);
wait(.1);
stop();

forward(50);
wait(2);
stop();

pointTurn(right);
wait(.3);
stop();
forward(50);
wait(2);
stop();

forward(50);
untilDark(10,S3);
stop();

swingTurn(right,60);
wait(.3);
stop();

forward(50);
wait(3);
stop();

swingTurn(left,60);
wait(.5);
stop();

forward(50);
wait(2);
stop();
pointTurn(right,60);
wait(.1);
stop();

forward(50);
wait(1);
stop();

}
