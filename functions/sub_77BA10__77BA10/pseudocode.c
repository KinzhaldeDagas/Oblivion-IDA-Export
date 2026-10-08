// DX10 bridge note: Oblivion derives the fog-table capability flag from Caps.RasterCaps bits 0x100 (D3DPRASTERCAPS_FOGTABLE) and 0x100000 (D3DPRASTERCAPS_WFOG). The DX10 bridge uses this observed behavior when seeding FOGTABLEMODE defaults, while runtime fog changes are captured through SetRenderState.
NiDX9RenderState *__thiscall sub_77BA10(NiDX9RenderState *this)
{
  NiDX9RenderState *result; // eax
  DWORD RasterCaps; // ecx
  DWORD SrcBlendCaps; // esi
  DWORD DestBlendCaps; // edi
  unsigned int v5; // ecx
  UInt32 *v6; // edx
  NiDX9Renderer *Renderer; // ecx

  result = this; /*0x77ba10*/
  RasterCaps = this->member.Caps.RasterCaps; /*0x77ba12*/
  if ( (RasterCaps & 0x100) != 0 && (RasterCaps & 0x100000) != 0 ) /*0x77ba26*/
    result->member.Flags |= 1u; /*0x77ba28*/
  else
    result->member.Flags &= ~1u; /*0x77ba2e*/
  SrcBlendCaps = result->member.Caps.SrcBlendCaps; /*0x77ba34*/
  DestBlendCaps = result->member.Caps.DestBlendCaps; /*0x77ba3b*/
  result->member.unk000C[0x19] = 0; /*0x77ba41*/
  result->member.unk000C[0x18] = 0; /*0x77ba48*/
  v5 = 0; /*0x77ba4f*/
  v6 = &result->member.unk000C[5]; /*0x77ba51*/
  do /*0x77ba79*/
  {
    if ( (SrcBlendCaps & *v6) != 0 ) /*0x77ba56*/
      result->member.unk000C[0x18] |= 1 << v5; /*0x77ba5f*/
    if ( (DestBlendCaps & *v6) != 0 ) /*0x77ba64*/
      result->member.unk000C[0x19] |= 1 << v5; /*0x77ba6d*/
    ++v5; /*0x77ba70*/
    ++v6; /*0x77ba73*/
  }
  while ( v5 < 0xB ); /*0x77ba79*/
  if ( (result->member.Caps.TextureAddressCaps & 0x10) != 0 ) /*0x77ba85*/
    result->member.Flags |= 4u; /*0x77ba87*/
  else
    result->member.Flags &= ~4u; /*0x77ba8d*/
  Renderer = result->member.Renderer; /*0x77ba91*/
  LOBYTE(result->member.UsingVertexDeclaration[5]) = Renderer->member.softwareVertexProcessing /*0x77bab7*/
                                                  && !Renderer->member.mixedVertexProcessing;
  return result; /*0x77bab4*/
}
