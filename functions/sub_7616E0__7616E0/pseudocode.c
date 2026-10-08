ULONG __thiscall sub_7616E0(NiDX9TextureData *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx

  v2 = *((_DWORD *)this + 0x18); /*0x7616e3*/
  this->_vtbl = &NiDX9RenderedTextureData::`vftable'; /*0x7616e6*/
  LODWORD(MEMORY[0xB3F9B0][0x9AD]) -= v2; /*0x7616ec*/
  v3 = *((_DWORD *)this + 0x18); /*0x7616f2*/
  v4 = 0; /*0x7616fc*/
  if ( (v3 & 0xFFFFF000) != v3 ) /*0x761700*/
    v4 = (v3 & 0xFFFFF000) - v3 + 0x1000; /*0x761709*/
  LODWORD(MEMORY[0xB3F9B0][0x9AE]) -= v4; /*0x76170b*/
  this->pRenderer->__vftable->DeleteTexture(this->pRenderer, this->parent); /*0x761720*/
  return NiDX9TextureData::Release(this); /*0x761724*/
}
