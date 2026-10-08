// DX10OBSE target: ClearTextureList zeroes 16 NiDX9RenderState texture-cache slots at +0xFA0..+0xFDC without D3D9 SetTexture calls; plugin mirrors this cache invalidation into DX10 SRV bindings.
int __thiscall ClearTextureList(NiDX9RenderState *this)
{
  this->member.TextureCache[0] = 0; /*0x77b212*/
  this->member.TextureCache[1] = 0; /*0x77b218*/
  this->member.TextureCache[2] = 0; /*0x77b21e*/
  this->member.TextureCache[3] = 0; /*0x77b224*/
  this->member.TextureCache[4] = 0; /*0x77b22a*/
  this->member.TextureCache[5] = 0; /*0x77b230*/
  this->member.TextureCache[6] = 0; /*0x77b236*/
  this->member.TextureCache[7] = 0; /*0x77b23c*/
  this->member.TextureCache[8] = 0; /*0x77b242*/
  this->member.TextureCache[9] = 0; /*0x77b248*/
  this->member.TextureCache[0xA] = 0; /*0x77b24e*/
  this->member.TextureCache[0xB] = 0; /*0x77b254*/
  this->member.TextureCache[0xC] = 0; /*0x77b25a*/
  this->member.TextureCache[0xD] = 0; /*0x77b260*/
  this->member.TextureCache[0xE] = 0; /*0x77b266*/
  this->member.TextureCache[0xF] = 0; /*0x77b26c*/
  return 0; /*0x77b272*/
}
