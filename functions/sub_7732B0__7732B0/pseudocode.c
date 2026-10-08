// Oblivion draw-time texture-stage application: exactly eight tracked D3DTSS slots; no sampler LOD or texture-factor state.
// GPU-world authored-state capture: eight entries. Override flag group+5C+i selects DWORD group+3C+4*i before base flag group+2C+i / value group+C+4*i. Unflagged fields do not write. State IDs come from WORD table B42824; setter inverse mapping is B427E0. This precedes texture binding/transform overrides and is not final draw state.
int __thiscall OB_NiD3DTextureStageStateGroup_ApplyStageStates_010201A0(void *this, unsigned int stage)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = 0; /*0x7732ba*/
  v4 = (char *)this + 0xC; /*0x7732bc*/
  do /*0x773318*/
  {
    if ( *((_BYTE *)this + v3 + 0x5C) ) /*0x7732c0*/
    {
      ((void (__stdcall *)(unsigned int, _DWORD, _DWORD, _DWORD))MEMORY[0xB42834]->vtbl->SetTextureStageState)( /*0x7732e5*/
        stage,
        *(unsigned __int16 *)(2 * v3 + 0xB42824),
        v4[0xC],
        0);
    }
    else if ( *((_BYTE *)this + v3 + 0x2C) ) /*0x7732e9*/
    {
      ((void (__stdcall *)(unsigned int, _DWORD, _DWORD, _DWORD))MEMORY[0xB42834]->vtbl->SetTextureStageState)( /*0x77330d*/
        stage,
        *(unsigned __int16 *)(2 * v3 + 0xB42824),
        *v4,
        0);
    }
    ++v3; /*0x77330f*/
    ++v4; /*0x773312*/
  }
  while ( v3 < 8 );                             // Draw-time texture-stage group iterates exactly eight stage states: COLOROP/ARG1/ARG2, ALPHAOP/ARG1/ARG2, BUMPENVMAT00, TEXTURETRANSFORMFLAGS. /*0x773318*/
  return 0; /*0x77331a*/
}
