// Oblivion draw-time stage sampler application: exactly five tracked slots (ADDRESSU/V, MAG/MIN/MIP).
// GPU-world authored sampler capture: five entries. Override flag group+A4+i selects DWORD group+90+4*i before base flag group+80+i / value group+6C+4*i. IDs are DWORD table B427CC; setter inverse table B427B0. Preserve order and sparse entries; this does not reset untracked LOD bias or other sampler fields.
int __thiscall OB_NiD3DTextureStageStateGroup_ApplySamplerStates_010201A0(void *this, unsigned int stage)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = 0; /*0x77333a*/
  v4 = (char *)this + 0x6C; /*0x77333c*/
  do /*0x77339c*/
  {
    if ( *((_BYTE *)this + v3 + 0xA4) ) /*0x773340*/
    {
      ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD, _DWORD, _DWORD))MEMORY[0xB42834]->vtbl->SetSamplerState)( /*0x773367*/
        MEMORY[0xB42834],
        stage,
        *(_DWORD *)(4 * v3 + 0xB427CC),
        v4[9],
        0);
    }
    else if ( *((_BYTE *)this + v3 + 0x80) ) /*0x77336b*/
    {
      ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD, _DWORD, _DWORD))MEMORY[0xB42834]->vtbl->SetSamplerState)( /*0x773391*/
        MEMORY[0xB42834],
        stage,
        *(_DWORD *)(4 * v3 + 0xB427CC),
        *v4,
        0);
    }
    ++v3; /*0x773393*/
    ++v4; /*0x773396*/
  }
  while ( v3 < 5 );                             // Draw-time stage-state group iterates exactly five sampler entries: ADDRESSU, ADDRESSV, MAGFILTER, MINFILTER, MIPFILTER. /*0x77339c*/
  return 0; /*0x77339e*/
}
