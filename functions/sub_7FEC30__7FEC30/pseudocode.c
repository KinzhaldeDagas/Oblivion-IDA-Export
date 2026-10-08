// Create the 54-entry Oblivion Lighting30 NiD3DPass pool and invoke Lighting30Shader_InitializePassPool. Selector row is selector-0x12A; rows 36..39 are selectors 0x14E..0x151.
// DX11 writer audit 2026-10-01: virtual+B4 replaces54 global pooled-pass owners, then initializes their state via85E660. A retained individual pass does not freeze the global owner table. Whole-call observation excludes overlapping capture and invalidates older bucket epochs.
bool __thiscall Lighting30Shader__LoadStagesAndPasses(void *this)
{
  unsigned int i; // edi
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8[2]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v9; // [esp+20h] [ebp-4h]

  v8[1] = (NiD3DPass *)this; /*0x7fec56*/
  for ( i = 0; i < 0x36; ++i ) /*0x7fec5a*/
  {
    v2 = NiD3DPassPool_Acquire(v8); /*0x7fec6d*/
    v3 = (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[i + 0x56F]); /*0x7fec6f*/
    v4 = v3 == *v2; /*0x7fec75*/
    v9 = 0; /*0x7fec77*/
    if ( !v4 ) /*0x7fec7f*/
    {
      if ( v3 ) /*0x7fec83*/
      {
        v4 = v3->RefCount-- == 1; /*0x7fec85*/
        if ( v4 ) /*0x7fec88*/
          NiD3DPass_ReleaseToPool(v3); /*0x7fec8a*/
      }
      v5 = *v2; /*0x7fec8f*/
      v4 = *v2 == 0; /*0x7fec91*/
      LODWORD(OB_ShaderConstantStorage_010201A0[i + 0x56F]) = *v2; /*0x7fec93*/
      if ( !v4 ) /*0x7fec99*/
        ++v5->RefCount; /*0x7fec9b*/
    }
    v6 = v8[0]; /*0x7fec9f*/
    v9 = 0xFFFFFFFF; /*0x7feca5*/
    if ( v8[0] ) /*0x7feca9*/
    {
      --v8[0]->RefCount; /*0x7fecab*/
      if ( !v6->RefCount ) /*0x7fecb3*/
        NiD3DPass_ReleaseToPool(v6); /*0x7fecb8*/
    }
  }
  Lighting30Shader_InitializePassPool(); /*0x7feccc*/
  return 1; /*0x7fecd3*/
}
