NiDX9TextureData *__thiscall sub_761A30(NiDX9TextureData *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 0x18); /*0x761a33*/
  this->_vtbl = &NiDX9RenderedTextureData::`vftable'; /*0x761a36*/
  LODWORD(MEMORY[0xB3F9B0][0x9AD]) -= v3; /*0x761a3c*/
  v4 = *((_DWORD *)this + 0x18); /*0x761a42*/
  v5 = 0; /*0x761a4c*/
  if ( (v4 & 0xFFFFF000) != v4 ) /*0x761a50*/
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000; /*0x761a59*/
  LODWORD(MEMORY[0xB3F9B0][0x9AE]) -= v5; /*0x761a5b*/
  this->pRenderer->__vftable->DeleteTexture(this->pRenderer, this->parent); /*0x761a70*/
  NiDX9TextureData::Release(this); /*0x761a74*/
  if ( (a2 & 1) != 0 ) /*0x761a7e*/
    FormHeapFree((unsigned int)this); /*0x761a81*/
  return this; /*0x761a8b*/
}
