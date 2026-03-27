void __usercall sub_5791E0(
        double a1@<st0>,
        double a2@<st3>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st4>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_5821F0(Singleton, a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
}
