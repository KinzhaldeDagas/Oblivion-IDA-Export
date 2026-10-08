NiDynamicEffect *__thiscall NiDynamicEffect::NiDynamicEffect(NiDynamicEffect *this)
{
  NiAVObject::NiAVObject(this); /*0x7090c3*/
  this->vtbl = (NiAVObjectVtbl *)&NiDynamicEffect::`vftable'; /*0x7090ca*/
  this->unk0B4 = 0; /*0x7090d0*/
  this->enable = 1; /*0x7090db*/
  this->unk0B8 = 1; /*0x7090e1*/
  this->affectedNodes.numItems = 0; /*0x7090e7*/
  this->affectedNodes.start = 0; /*0x7090ed*/
  this->affectedNodes.end = 0; /*0x7090f3*/
  this->affectedNodes.__vftable = &NiTPointerList<NiNode *>::`vftable'; /*0x7090fe*/
  this->unaffectedNodes.numItems = 0; /*0x709109*/
  this->unaffectedNodes.start = 0; /*0x70910f*/
  this->unaffectedNodes.end = 0; /*0x709115*/
  this->unaffectedNodes.__vftable = &NiTPointerList<NiNode *>::`vftable'; /*0x70911b*/
  this->unk0B0 = InterlockedIncrement(&dword_B259FC); /*0x709127*/
  return this; /*0x70912f*/
}
