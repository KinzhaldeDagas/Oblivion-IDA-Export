void __thiscall DestroyNiCamera_(NiAVObject *this)
{
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable'; /*0x70c170*/
  NiAVObject::~NiAVObject(this); /*0x70c176*/
}
