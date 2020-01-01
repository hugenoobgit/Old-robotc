
task main()
{


int n =0;


while (n<6)
{
	for (int f =0;f<n;f++)
	{		forward(50);
			untilDark(35,S3);
			stop();
			forward(50);
			wait(.3);
			stop();
			}

		for (int b =0;b<n;b++)
		{	backward(50);
			wait(.5);
			stop();
			backward(50);
			untilDark(55,S3);
			stop();
			backward(50);
			wait(.5);
			stop();
			backward(50);
			untilDark(55,S3);
			stop();
			b++;}
			nxtDisplayCenteredTextLine(3, "%d, %d", n);
	n++;}

}
