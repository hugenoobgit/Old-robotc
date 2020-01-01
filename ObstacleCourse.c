
task main()
{

forward(50);
untilTouch(S1);
backward(50);
wait(.5);
pointTurn(left,27);
wait(1);
forward(50);
wait(1.5);
//nMotorEncoder[motorB] = 0;  // Reset the right motor encoder to 0.

//  //Line Track for 5 rotations...
//  while(nMotorEncoder(motorB) < 4000)
//  {
//    // sensor sees light:
//    if(SensorValue(S3) < 45)
//    {
//      // counter-steer left:
//      motor[motorC]  = 55;
//      motor[motorB] = 25;
//    }
//    // sensor sees dark:
//    else
//    {
//      // counter-steer right:
//      motor[motorC]  = 25;
//      motor[motorB] = 55;
//    }
//  }




}
