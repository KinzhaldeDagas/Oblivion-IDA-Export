NiDX9RenderState *__thiscall sub_77BA10(NiDX9RenderState *this)
{
  NiDX9RenderState *result; // eax
  DWORD RasterCaps; // ecx
  DWORD SrcBlendCaps; // esi
  DWORD DestBlendCaps; // edi
  unsigned int v5; // ecx
  UInt32 *v6; // edx
  NiDX9Renderer *Renderer; // ecx

  result = this;
  RasterCaps = this->member.Caps.RasterCaps;
  if ( (RasterCaps & 0x100) != 0 && (RasterCaps & 0x100000) != 0 )
    result->member.Flags |= 1u;
  else
    result->member.Flags &= ~1u;
  SrcBlendCaps = result->member.Caps.SrcBlendCaps;
  DestBlendCaps = result->member.Caps.DestBlendCaps;
  result->member.unk000C[0x19] = 0;
  result->member.unk000C[0x18] = 0;
  v5 = 0;
  v6 = &result->member.unk000C[5];
  do
  {
    if ( (SrcBlendCaps & *v6) != 0 )
      result->member.unk000C[0x18] |= 1 << v5;
    if ( (DestBlendCaps & *v6) != 0 )
      result->member.unk000C[0x19] |= 1 << v5;
    ++v5;
    ++v6;
  }
  while ( v5 < 0xB );
  if ( (result->member.Caps.TextureAddressCaps & 0x10) != 0 )
    result->member.Flags |= 4u;
  else
    result->member.Flags &= ~4u;
  Renderer = result->member.Renderer;
  LOBYTE(result->member.unk1000[5]) = Renderer->member.softwareVertexProcessing
                                   && !Renderer->member.mixedVertexProcessing;
  return result;
}
