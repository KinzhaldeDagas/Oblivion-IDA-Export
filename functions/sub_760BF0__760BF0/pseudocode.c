NiDX9TextureData *__thiscall sub_760BF0(NiDX9TextureData *this, NiTexture *a2, NiDX9Renderer *a3)
{
  NiDX9TextureData::NiDX9TextureData(this, a2, a3); /*0x760bff*/
  *((_BYTE *)this + 0x64) = 0; /*0x760c06*/
  *((_BYTE *)this + 0x65) = 0; /*0x760c09*/
  *((_DWORD *)this + 0x1A) = 0; /*0x760c0c*/
  this->_vtbl = &NiDX9SourceTextureData::`vftable'; /*0x760c0f*/
  *((_DWORD *)this + 0x1B) = 0; /*0x760c15*/
  *((_DWORD *)this + 0x1C) = 0; /*0x760c18*/
  *((_DWORD *)this + 0x1D) = 0; /*0x760c1b*/
  *((_DWORD *)this + 0x1E) = 0; /*0x760c1e*/
  *((_DWORD *)this + 0x18) = 0; /*0x760c21*/
  return this; /*0x760c26*/
}
