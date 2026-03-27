void __usercall sub_579220(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_583F40(Singleton, a1, a2, a3, a4);
    }
  }
}
