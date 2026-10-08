void __thiscall NiDX9SourceTextureData::~NiDX9SourceTextureData(NiDX9SourceTextureData *this)
{
  UInt32 unk60; // eax
  UInt32 v3; // ecx
  unsigned int v4; // edx
  UInt32 Palette; // edi

  unk60 = this->unk60; /*0x760c63*/
  this->vtbl = &NiDX9SourceTextureData::`vftable'; /*0x760c66*/
  LODWORD(MEMORY[0xB3F9B0][0x9A9]) -= unk60; /*0x760c6c*/
  v3 = this->unk60; /*0x760c72*/
  v4 = 0; /*0x760c7c*/
  if ( (v3 & 0xFFFFF000) != v3 ) /*0x760c81*/
    v4 = (v3 & 0xFFFFF000) - v3 + 0x1000; /*0x760c8a*/
  LODWORD(MEMORY[0xB3F9B0][0x9AA]) -= v4; /*0x760c8c*/
  Palette = this->Palette; /*0x760c92*/
  if ( Palette ) /*0x760c97*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(Palette + 4)) ) /*0x760c9d*/
      (**(void (__thiscall ***)(UInt32, int))Palette)(Palette, 1); /*0x760cb3*/
  }
  NiDX9TextureData::Release((NiDX9TextureData *)this); /*0x760cb9*/
}
