// Conditional NPOT fallback: on the relevant renderer capability path, replace ADDRESSU/V with CLAMP and clear legacy wrap states.
// DX11 GPU-world verified: needsNPOT and flags bit8 clear/bit4 set => ADDRESSU/V=CLAMP(3), then alternating RS(128+i)=0 and RS(198+i)=0 for i0..7. GetFlags is renderer virtual+54, stock 769F20. These effects occur only after nonnull resolution.
void __thiscall OB_NiD3DTextureStage_ApplyNPOTAddressFallback_010201A0(void *this, unsigned __int8 needsNPOTFallback)
{
  int v3; // esi
  int v4; // edi

  if ( needsNPOTFallback ) /*0x7716e8*/
  {
    if ( (unk_B42754->__vftable->super.GetFlags((NiRenderer *)unk_B42754) & 8) == 0 /*0x771712*/
      && (unk_B42754->__vftable->super.GetFlags((NiRenderer *)unk_B42754) & 4) != 0 )
    {
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD, int, int, _DWORD))unk_B42758->vtbl->SetSamplerState)( /*0x77172c*/
        unk_B42758,
        *(_DWORD *)this,
        1,
        3,
        0);                                     // NPOT fallback can replace authored ADDRESSU=WRAP with D3DTADDRESS_CLAMP(3), subject to renderer capability flags.
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD, int, int, _DWORD))unk_B42758->vtbl->SetSamplerState)( /*0x771745*/
        unk_B42758,
        *(_DWORD *)this,
        2,
        3,
        0);                                     // NPOT fallback can replace authored ADDRESSV=WRAP with D3DTADDRESS_CLAMP(3), subject to renderer capability flags.
      v3 = 0xC6; /*0x771747*/
      v4 = 8; /*0x77174c*/
      do /*0x77177e*/
      {
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))unk_B42758->vtbl->SetRenderState)( /*0x771764*/
          unk_B42758,
          v3 - 0x46,
          0,
          0);
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))unk_B42758->vtbl->SetRenderState)( /*0x771776*/
          unk_B42758,
          v3++,
          0,
          0);
        --v4; /*0x77177b*/
      }
      while ( v4 ); /*0x77177e*/
    }
  }
}
