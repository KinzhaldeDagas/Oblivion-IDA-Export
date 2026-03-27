NiDynamicEffect *__thiscall NiDynamicEffect::NiDynamicEffect(NiDynamicEffect *this)
{
  NiAVObject::NiAVObject(this);
  this->vtbl = (NiAVObjectVtbl *)&NiDynamicEffect::`vftable';
  this->unk0B4 = 0;
  this->enable = 1;
  this->unk0B8 = 1;
  this->affectedNodes.numItems = 0;
  this->affectedNodes.start = 0;
  this->affectedNodes.end = 0;
  this->affectedNodes.__vftable = &NiTPointerList<NiNode *>::`vftable';
  this->unaffectedNodes.numItems = 0;
  this->unaffectedNodes.start = 0;
  this->unaffectedNodes.end = 0;
  this->unaffectedNodes.__vftable = &NiTPointerList<NiNode *>::`vftable';
  this->unk0B0 = InterlockedIncrement(&dword_B259FC);
  return this;
}
