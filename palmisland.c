#pragma config(StandardModel, "RVW REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
////forward(20);
////untilDark(60, S3);
//////

////stop();
////****code to get to first arrow****
forward(48);
wait(4);
stop();

pointTurn(left, 50);
wait(1);
stop();

forward(50);
//untilTouch(S1);
untilSonarLessThan(5, S4);

stop();

pointTurn(right, 50);
wait(1);
stop();

forward(50);
untilSonarLessThan(5, S4);
stop();
/////*****code to get to second arrow
pointTurn(right, 50);
wait(1);
stop();

forward(50);
untilSonarLessThan(5, S4);
stop();

pointTurn(right, 50);
wait(1);
stop();
}
