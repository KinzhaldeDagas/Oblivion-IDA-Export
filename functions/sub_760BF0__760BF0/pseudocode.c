NiDX9TextureData *__thiscall sub_760BF0(NiDX9TextureData *this, NiTexture *a2, NiDX9Renderer *a3)
{
  NiDX9TextureData::NiDX9TextureData(this, a2, a3);
  *((_BYTE *)this + 0x64) = 0;
  *((_BYTE *)this + 0x65) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  this->_vtbl = &NiDX9SourceTextureData::`vftable';
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x18) = 0;
  return this;
}
