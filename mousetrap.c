
task main()
{
pointTurn(right,20);
wait(1);
forward(40);
untilSonarLessThan(12);
pointTurn(left,20);
wait(1);
forward(40);
untilSonarLessThan(12);
pointTurn(left,20);
wait(1);
forward(40);
untilSonarLessThan(12);
if(SensorValue(S3)>10)
{backward(40);wait(1);}
	else
		{stop();}
}
