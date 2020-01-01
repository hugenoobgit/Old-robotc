
task main()
{
	//makes a circle
//motor[motorC]=20;
//wait(20);
//stop();
// turns the pen on although the pen is already automatically on
//at start

motor[motorA]=20;
wait(2);
stop();
//moves forward
forward(50);
wait(2);
stop();
//this opens the gripper so that the pen is off
motor[motorA]=-20;
wait(2);
stop();
//moves forward
forward(50);
wait(2);
stop();
motor[motorC]=20;
wait(2.8);
stop();
motor[motorA]=20;
wait(2);
stop();
forward(50);
wait(2);
stop();
motor[motorA]=-20;
wait(2);
stop();
backward(50);
wait(4);
stop();
motor[motorA]=20;
wait(2);
stop();
backward(50);
wait(2);
stop();
motor[motorA]=-20;
wait(2);
stop();
forward();
wait(2);
stop();
pointTurn(right,50);
wait (1);
stop();
forward();
wait(2);
stop();
motor[motorA]=20;
wait(2);
stop();
motor[motorC]=20;
wait(20);
stop();
}
