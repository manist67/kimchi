void main()
{
   FILE *of = fopen("pi.txt", "w");

   srand((unsigned int)time(NULL));
   for (int num_square = 10; num_square = 10000000;num_square*=2)
   {
      int num_circle = 0;

      for (int i = 0;i < num_square;i++)
      {

         double x = getRANDOMnumber(0.0, 1.0);
         double y = getRANDOMnumber(0.0, 1.0);


         if (isCIRCLEright(x, y) == true)
         {
            num_circle++;
         }
      }
         const double pi_mc = 4.0 * num_circle / num_square;

         printf("%d ,%f\n", num_square, pi_mc);
         fprintf(of, "%f\n", pi_mc);
      
   }