NiD3DShaderConstantMap *__thiscall NiD3DShaderConstantMap::NiD3DShaderConstantMap(NiD3DShaderConstantMap *this, int a2)
{
  this->_vtbl = (NiD3DSCM_Pixel *)&NiRefObject::`vftable';
  this->Unk04 = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DShaderConstantMap::`vftable';
  this->Unk08 = 2;
  this->Entries._vtbl = &NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable';
  this->Entries.capacity = 0;
  this->Entries.end = 0;
  this->Entries.numObjs = 0;
  this->Entries.data = 0;
  this->Entries.growSize = 1;
  this->Modified = 1;
  this->LastShaderProgram = 0;
  this->Unk24 = 0;
  this->Device = 0;
  this->Renderer = 0;
  this->RenderState = 0;
  sub_9A8BD0(this, a2);
  sub_9A4310(&this->Entries);
  return this;
}
