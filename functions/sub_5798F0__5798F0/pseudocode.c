void __usercall sub_5798F0(char a1@<bpl>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57FDC0((int)Singleton, a1, st5_0, a3, a4, a5);
    }
  }
}
