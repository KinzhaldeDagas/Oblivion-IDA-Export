NiCamera *__thiscall NiCamera::`scalar deleting destructor'(NiCamera *this, char a2)
{
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable';
  NiAVObject::~NiAVObject((NiAVObject *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
