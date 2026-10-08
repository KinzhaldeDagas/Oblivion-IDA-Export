hkBaseObject *__thiscall hkBaseObject::`scalar deleting destructor'(hkBaseObject *this, char a2)
{
  this->__vftable = (hkBaseObject_vtbl *)&hkBaseObject::`vftable'; /*0x4bfc28*/
  if ( (a2 & 1) != 0 ) /*0x4bfc2e*/
    FormHeapFree((unsigned int)this); /*0x4bfc31*/
  return this; /*0x4bfc3b*/
}
