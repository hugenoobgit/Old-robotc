
task main()
{
forward(50); wait(.5);stop();


  int threshold = 45;       /* found by taking a reading on both DARK and LIGHT    */
                            /* surfaces, adding them together, then dividing by 2. */

  nMotorEncoder[rightMotor] = 0;  // Reset the right motor encoder to 0.

  //Line Track for 5 rotations...
  while(nMotorEncoder(rightMotor) < 4000)
  {
    // sensor sees light:
    if(SensorValue(S3) < threshold)
    {
      // counter-steer left:
      motor[leftMotor]  = 55;
      motor[rightMotor] = 25;
      //added by me below: in attempt to get vehicle to check both left and right for dark line
      wait(1);
      motor[leftMotor] =25;
      motor[rightMotor] =55;
      wait(1);

    }
    // sensor sees dark:
    else
    {
      // counter-steer right:
      motor[leftMotor]  = 25;
      motor[rightMotor] = 55;
    }
  }
}
