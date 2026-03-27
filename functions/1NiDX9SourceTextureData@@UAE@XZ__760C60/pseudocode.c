void __thiscall NiDX9SourceTextureData::~NiDX9SourceTextureData(NiDX9SourceTextureData *this)
{
  UInt32 unk60; // eax
  UInt32 v3; // ecx
  unsigned int v4; // edx
  UInt32 Palette; // edi

  unk60 = this->unk60;
  this->vtbl = &NiDX9SourceTextureData::`vftable';
  dword_B42054 -= unk60;
  v3 = this->unk60;
  v4 = 0;
  if ( (v3 & 0xFFFFF000) != v3 )
    v4 = (v3 & 0xFFFFF000) - v3 + 0x1000;
  dword_B42058 -= v4;
  Palette = this->Palette;
  if ( Palette )
  {
    if ( !InterlockedDecrement((volatile LONG *)(Palette + 4)) )
      (**(void (__thiscall ***)(UInt32, int))Palette)(Palette, 1);
  }
  NiDX9TextureData::Release((NiDX9TextureData *)this);
}
