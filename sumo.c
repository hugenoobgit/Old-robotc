
task main()
{motor[motorA]=20;
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

forward(50);
wait(2);
stop();

}
