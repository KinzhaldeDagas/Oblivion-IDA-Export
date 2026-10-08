void __thiscall NiDynamicEffect::~NiDynamicEffect(NiDynamicEffect *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiDynamicEffect::`vftable'; /*0x708dc8*/
  sub_708B80(this); /*0x708dd6*/
  sub_708BE0(this); /*0x708ddd*/
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>((NiTPointerList__BSImageSpaceShader *)&this->unaffectedNodes); /*0x708ded*/
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>((NiTPointerList__BSImageSpaceShader *)&this->affectedNodes); /*0x708dfd*/
  NiAVObject::~NiAVObject(this); /*0x708e0c*/
}
