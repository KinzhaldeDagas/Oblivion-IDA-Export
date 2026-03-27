ULONG __thiscall sub_7616E0(NiDX9TextureData *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx

  v2 = *((_DWORD *)this + 0x18);
  this->_vtbl = &NiDX9RenderedTextureData::`vftable';
  dword_B42064 -= v2;
  v3 = *((_DWORD *)this + 0x18);
  v4 = 0;
  if ( (v3 & 0xFFFFF000) != v3 )
    v4 = (v3 & 0xFFFFF000) - v3 + 0x1000;
  dword_B42068 -= v4;
  this->pRenderer->__vftable->DeleteTexture(this->pRenderer, this->parent);
  return NiDX9TextureData::Release(this);
}
