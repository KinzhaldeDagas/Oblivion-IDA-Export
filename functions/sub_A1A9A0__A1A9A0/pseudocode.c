void __cdecl sub_A1A9A0()
{
  NiObjectNET *v0; // esi

  v0 = g_FallbackCanopyShadowTextureProperty; /*0xa1a9a1*/
  if ( g_FallbackCanopyShadowTextureProperty ) /*0xa1a9a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&g_FallbackCanopyShadowTextureProperty->members) ) /*0xa1a9af*/
    {
      if ( v0 ) /*0xa1a9bb*/
        (*(void (__thiscall **)(NiObjectNET *, int))v0->vtbl)(v0, 1); /*0xa1a9c5*/
    }
  }
}
