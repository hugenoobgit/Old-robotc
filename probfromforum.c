
task main()
{
SensorValue[motorB] = 0;
SensorValue[motorC] = 0;

while(SensorValue[motorB] < 1)
{
	motor[motorB] = 63;
motor[motorC] = -63;

}
wait1Msec(200);
motor[motorB] = 63;
motor[motorC] = 63;

//SensorValue[motorB] = 0;
//SensorValue[motorC] = 0;

//while(SensorValue[motorB] > 1)
//{
//motor[motorB] = 63;
//motor[motorC] = -63;
//}
}
