
task main()
{

forward(50);
untilSonarLessThan(10,S4);
stop();

pointTurn(left,50);
wait(1);
stop();

forward(50);
untilSonarLessThan(50,S4);
stop();
pointTurn(left,50);
wait(1);
stop();
// i used untiltouch so that it would stop when it
//got to the coconuts but it didn't luckily it stopped
//when it hit a crate.
forward(50);
untilTouch(S1);
stop();
}
