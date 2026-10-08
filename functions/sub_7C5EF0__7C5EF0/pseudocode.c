// Discard/release every active light map +0x114 and clear the texture manager's current shadow-map slot.
void __thiscall sub_7C5EF0(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi

  v3 = (_DWORD *)*(this + 0x3E); /*0x7c5ef1*/
  while ( v3 ) /*0x7c5ef9*/
  {
    v4 = v3[2]; /*0x7c5f00*/
    v3 = (_DWORD *)*v3; /*0x7c5f08*/
    if ( v4 ) /*0x7c5f0a*/
    {
      BSTextureManager__ReturnFrustumShadowTexture( /*0x7c5f19*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        *(_DWORD *)(v4 + 0x114));
      v5 = *(_DWORD *)(v4 + 0x114); /*0x7c5f1e*/
      if ( v5 ) /*0x7c5f26*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7c5f2c*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c5f42*/
        *(_DWORD *)(v4 + 0x114) = 0; /*0x7c5f44*/
      }
    }
  }
  v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7]; /*0x7c13f2*/
  v2 = *(_DWORD *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7] + 0x44); /*0x7c13f4*/
  if ( v2 ) /*0x7c13f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7c13ff*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c1415*/
    *(_DWORD *)(v1 + 0x44) = 0; /*0x7c1417*/
  }
}
