void __usercall sub_5791A0(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_583E60(Singleton, a1, a2, a3);
    }
  }
}
