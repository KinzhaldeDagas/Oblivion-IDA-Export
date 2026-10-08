// Install/own the current canopy shadow-map texture at global 0x00B4310C.
NiRenderedTexture *__cdecl SetTextureCanopyShadowMap(NiRenderedTexture *a1)
{
  NiRenderedTexture *result; // eax
  NiRenderedTexture *v2; // esi

  result = g_CanopyShadowMap; /*0x441850*/
  if ( g_CanopyShadowMap != a1 ) /*0x44185c*/
  {
    if ( result ) /*0x441860*/
    {
      v2 = g_CanopyShadowMap; /*0x441863*/
      result = (NiRenderedTexture *)InterlockedDecrement((volatile LONG *)&result->member); /*0x441869*/
      if ( !result ) /*0x441871*/
        result = (NiRenderedTexture *)((int (__thiscall *)(NiRenderedTexture *, int))v2->__vftable->super.super.super.Destructor)( /*0x44187f*/
                                        v2,
                                        1);
    }
    g_CanopyShadowMap = a1; /*0x441884*/
    if ( a1 ) /*0x44188a*/
      return (NiRenderedTexture *)InterlockedIncrement((volatile LONG *)&a1->member); /*0x441890*/
  }
  return result; /*0x441896*/
}
