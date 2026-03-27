void __thiscall DestroyNiCamera_(NiAVObject *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable';
  NiAVObject::~NiAVObject(this);
}
