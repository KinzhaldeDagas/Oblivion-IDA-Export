NiD3DShaderConstantMap *__thiscall NiD3DShaderConstantMap::NiD3DShaderConstantMap(NiD3DShaderConstantMap *this, int a2)
{
  this->_vtbl = (NiD3DSCM_Pixel *)&NiRefObject::`vftable'; /*0x9a46ac*/
  this->Unk04 = 0; /*0x9a46b2*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x9a46b5*/
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DShaderConstantMap::`vftable'; /*0x9a46bb*/
  this->Unk08 = 2; /*0x9a46c1*/
  this->Entries._vtbl = &NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'; /*0x9a46cb*/
  this->Entries.capacity = 0; /*0x9a46d1*/
  this->Entries.end = 0; /*0x9a46d5*/
  this->Entries.numObjs = 0; /*0x9a46d9*/
  this->Entries.data = 0; /*0x9a46dd*/
  this->Entries.growSize = 1; /*0x9a46e5*/
  this->Modified = 1; /*0x9a46e9*/
  this->LastShaderProgram = 0; /*0x9a46f3*/
  this->Unk24 = 0; /*0x9a46f6*/
  this->Device = 0; /*0x9a46f9*/
  this->Renderer = 0; /*0x9a46fc*/
  this->RenderState = 0; /*0x9a46ff*/
  sub_9A8BD0(this, a2); /*0x9a4702*/
  sub_9A4310(&this->Entries); /*0x9a4709*/
  return this; /*0x9a470e*/
}
