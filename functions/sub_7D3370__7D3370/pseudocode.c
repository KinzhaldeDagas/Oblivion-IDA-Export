// Set per-source projected-light mode at +0xF4. A mode change may discard/release shadow map +0x114; this selector is not actor-only.
void __thiscall sub_7D3370(int this, char a2)
{
  int v3; // eax
  int v4; // edi

  if ( (!*(_BYTE *)(this + 0xF4) || a2) /*0x7d33a9*/
    && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 3
    && (OB_RendererGlobalState_010201A0[0xA7] & 0x10) != 0
    || (v3 = *(_DWORD *)(this + 0x114)) == 0 )
  {
    *(_BYTE *)(this + 0xF4) = a2; /*0x7d33f4*/
  }
  else
  {
    BSTextureManager__ReturnFrustumShadowTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7], v3); /*0x7d33b3*/
    v4 = *(_DWORD *)(this + 0x114); /*0x7d33b8*/
    if ( v4 ) /*0x7d33c0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7d33c6*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d33dc*/
      *(_DWORD *)(this + 0x114) = 0; /*0x7d33de*/
    }
    *(_BYTE *)(this + 0xF4) = a2; /*0x7d33e9*/
  }
}
