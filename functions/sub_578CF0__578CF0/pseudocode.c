double __usercall sub_578CF0@<st0>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double a3@<st1>,
        double result@<st0>,
        double a5@<st3>,
        int a6)
{
  InterfaceManager *Singleton; // eax

  if ( reference ) /*0x578cf0*/
  {
    if ( reference->vtbl->super.super.super.GetNiNode(reference) ) /*0x578d02*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x578d11*/
      return sub_57D940((int)Singleton, a1, st5_0, a3, result, a5, a6); /*0x578d1b*/
    }
  }
  return result; /*0x578d20*/
}
