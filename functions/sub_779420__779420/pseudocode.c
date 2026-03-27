NiDX9TextureData *__thiscall sub_779420(NiDX9TextureData *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 0x18);
  this->_vtbl = &NiDX9RenderedCubeMapData::`vftable';
  dword_B42860 -= v3;
  v4 = *((_DWORD *)this + 0x18);
  v5 = 0;
  if ( (v4 & 0xFFFFF000) != v4 )
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000;
  dword_B42864 -= v5;
  this->pRenderer->__vftable->DeleteRenderedCubeMap(this->pRenderer, (NiRenderedCubeMap *)this->parent);
  sub_7616E0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
