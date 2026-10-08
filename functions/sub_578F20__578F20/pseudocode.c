void __usercall sub_578F20(char a1@<bpl>, double a2@<st2>, double a3@<st0>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x578f24*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x578f3c*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x578f46*/
      sub_57E150((int)Singleton, a1, a3, a2); /*0x578f50*/
    }
  }
}
