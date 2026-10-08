void __cdecl sub_A274C0()
{
  void (__thiscall ***v0)(void *, int); // esi

  v0 = (void (__thiscall ***)(void *, int))g_CanopyShadowMap; /*0xa274c1*/
  if ( g_CanopyShadowMap ) /*0xa274c9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)g_CanopyShadowMap + 1) ) /*0xa274cf*/
    {
      if ( v0 ) /*0xa274db*/
        (**v0)(v0, 1); /*0xa274e5*/
    }
  }
}
