double __usercall sub_5791A0@<st0>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st3>,
        double result@<st0>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5791a4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x5791bc*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5791c6*/
      return sub_583E60(Singleton, a1, a2, a3, a4, result); /*0x5791d0*/
    }
  }
  return result; /*0x5791d5*/
}
