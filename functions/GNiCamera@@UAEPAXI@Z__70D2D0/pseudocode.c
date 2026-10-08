NiCamera *__thiscall NiCamera::`scalar deleting destructor'(NiCamera *this, char a2)
{
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable'; /*0x70d2d3*/
  NiAVObject::~NiAVObject((NiAVObject *)this); /*0x70d2d9*/
  if ( (a2 & 1) != 0 ) /*0x70d2e3*/
    FormHeapFree((unsigned int)this); /*0x70d2e6*/
  return this; /*0x70d2f0*/
}
