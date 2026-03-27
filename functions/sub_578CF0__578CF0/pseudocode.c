double __usercall sub_578CF0@<st0>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double a3@<st1>,
        double result@<st0>,
        double a5@<st3>,
        int a6)
{
  InterfaceManager *Singleton; // eax

  if ( TESDataHandler_g_PlayerRef )
  {
    if ( TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef) )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      return sub_57D940((int)Singleton, a1, st5_0, a3, result, a5, a6);
    }
  }
  return result;
}
