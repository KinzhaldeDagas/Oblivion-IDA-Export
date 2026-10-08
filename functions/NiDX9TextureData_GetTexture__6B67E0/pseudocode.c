// DX10OBSE resource decode: NiDX9TextureData::GetTexture returns stored IDirect3DBaseTexture9*; this is the object later bound at the D3D9 stage/sampler index.
IDirect3DBaseTexture9 *__thiscall NiDX9TextureData::GetTexture(NiDX9TextureData *this)
{
  return this->dTexture; /*0x6b67e3*/
}
