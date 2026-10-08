void __usercall sub_5798F0(double st5_0@<st2>, double a2@<st1>, double a3@<st0>, int a4)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5798f4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57990c*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57991b*/
      sub_57FDC0((int)Singleton, st5_0, a2, a3, a4); /*0x579925*/
    }
  }
}
