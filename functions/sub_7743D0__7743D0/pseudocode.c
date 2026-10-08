NiDX9SourceTextureData *__thiscall sub_7743D0(NiDX9SourceTextureData *this, char a2)
{
  UInt32 unk60; // eax
  UInt32 v4; // ecx
  unsigned int v5; // edx

  unk60 = this->unk60; /*0x7743d3*/
  this->vtbl = &NiDX9SourceCubeMapData::`vftable'; /*0x7743d6*/
  unk_B4283C -= unk60; /*0x7743dc*/
  v4 = this->unk60; /*0x7743e2*/
  v5 = 0; /*0x7743ec*/
  if ( (v4 & 0xFFFFF000) != v4 ) /*0x7743f0*/
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000; /*0x7743f9*/
  unk_B42840 -= v5; /*0x7743fb*/
  NiDX9SourceTextureData::~NiDX9SourceTextureData(this); /*0x774403*/
  if ( (a2 & 1) != 0 ) /*0x77440d*/
    FormHeapFree((unsigned int)this); /*0x774410*/
  return this; /*0x77441a*/
}
