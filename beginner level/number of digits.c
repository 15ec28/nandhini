int main()
{
  int Number, Reminder, Count=0;
     scanf("%d", &Number);
   while(Number > 0)
  {
     Number = Number / 10;
     Count = Count + 1;  
  }
   printf("\n%d", Count);
  return 0;
}
