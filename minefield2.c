
task main()
{
int turnVar =0;
while(SensorValue(S4)>1)
{
if (SensorValue(S4)<20) turnVar =1;

switch (turnVar)
{
case 1:
swingTurn(right,60);
wait(.3);
stop();

forward(50);
wait(2);
stop();

swingTurn(left,60);
wait(.5);
stop();
turnVar = 0;
  break;



default:
  forward(50);
  wait(1);
  stop();
  turnVar =0;
}
}
backward(50);
wait(.2);
pointTurn(right);
wait(.35);
stop();
forward(50);
untilSonarLessThan(15,S4);
stop();
pointTurn(right);
wait(.3);
stop();

while(SensorValue(S4)>1)
{
if (SensorValue(S4)<20) turnVar =1;

switch (turnVar)
{
case 1:
swingTurn(right,60);
wait(.3);
stop();

forward(50);
wait(2);
stop();

swingTurn(left,60);
wait(.5);
stop();
turnVar = 0;
  break;



default:
  forward(50);
  wait(1);
  stop();
  turnVar =0;

}
}}
