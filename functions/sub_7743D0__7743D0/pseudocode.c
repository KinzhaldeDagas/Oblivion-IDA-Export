NiDX9SourceTextureData *__thiscall sub_7743D0(NiDX9SourceTextureData *this, char a2)
{
  UInt32 unk60; // eax
  UInt32 v4; // ecx
  unsigned int v5; // edx

  unk60 = this->unk60;
  this->vtbl = &NiDX9SourceCubeMapData::`vftable';
  dword_B4283C -= unk60;
  v4 = this->unk60;
  v5 = 0;
  if ( (v4 & 0xFFFFF000) != v4 )
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000;
  dword_B42840 -= v5;
  NiDX9SourceTextureData::~NiDX9SourceTextureData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
