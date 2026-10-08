// Acquire a pooled NiD3DRenderStateGroup for a pass.
// DX11 pool audit 2026-10-01: nonempty group pool B427A8 returns FreeObjects[0], decrements FreeCount+8, then replaces slot0 with the old last active pointer. It leaves the now-inactive last slot untouched. Low group byte0 is RendererOwned: set to1 only if0, preserve nonzero values and padding. Empty pool grows through7729E0 and doubles NextBlockCount+C.
OblivionPooledRenderStateGroupPrefix *__cdecl NiD3DRenderStateGroupPool_Acquire()
{
  unsigned int *v0; // ecx
  unsigned int *p_FreeCount08; // esi
  OblivionPooledRenderStateGroupPrefix ***v2; // edi
  _DWORD *v3; // ebx
  OblivionPooledRenderStateGroupPrefix **v4; // ecx
  OblivionPooledRenderStateGroupPrefix *result; // eax

  v0 = (unsigned int *)NiD3DRenderStateGroup_GroupPool; /*0x772df0*/
  p_FreeCount08 = &NiD3DRenderStateGroup_GroupPool->FreeCount08; /*0x772dfb*/
  v2 = (OblivionPooledRenderStateGroupPrefix ***)NiD3DRenderStateGroup_GroupPool; /*0x772dff*/
  if ( !*p_FreeCount08 ) /*0x772df6*/
  {
    v3 = v0 + 3; /*0x772e07*/
    sub_7729E0(v0, v0[3]); /*0x772e0b*/
    *v3 *= 2; /*0x772e14*/
  }
  v4 = *v2; /*0x772e17*/
  result = **v2; /*0x772e19*/
  *v4 = v4[--*p_FreeCount08]; /*0x772e23*/
  if ( !result->RendererOwned00 ) /*0x772e25*/
    result->RendererOwned00 = 1; /*0x772e2c*/
  return result; /*0x772e28*/
}
