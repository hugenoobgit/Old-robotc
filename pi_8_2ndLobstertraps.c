#pragma config(Motor,  motorB,          rightMotor,    tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorNXT, PIDControl, encoder)
task main()
{
forward(50);
untilLight(80,S3);
stop();
forward(50);
untilEncoderCounts(340,rightMotor);
stop();
pointTurn(right,50);
untilEncoderCounts(170);
stop();
forward(50);
untilBump(S1,1000);
stop();
pointTurn(right,50);
untilEncoderCounts(340);
stop();
forward(50);
untilBump(S1,1000);
stop();


}
