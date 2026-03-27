NiDX9TextureData *__thiscall sub_761A30(NiDX9TextureData *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 0x18);
  this->_vtbl = &NiDX9RenderedTextureData::`vftable';
  dword_B42064 -= v3;
  v4 = *((_DWORD *)this + 0x18);
  v5 = 0;
  if ( (v4 & 0xFFFFF000) != v4 )
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000;
  dword_B42068 -= v5;
  this->pRenderer->__vftable->DeleteTexture(this->pRenderer, this->parent);
  NiDX9TextureData::Release(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
