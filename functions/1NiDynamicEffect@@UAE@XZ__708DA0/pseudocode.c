void __thiscall NiDynamicEffect::~NiDynamicEffect(NiDynamicEffect *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiDynamicEffect::`vftable';
  sub_708B80(this);
  sub_708BE0(this);
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>((NiTPointerList__BSImageSpaceShader *)&this->unaffectedNodes);
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>((NiTPointerList__BSImageSpaceShader *)&this->affectedNodes);
  NiAVObject::~NiAVObject(this);
}
