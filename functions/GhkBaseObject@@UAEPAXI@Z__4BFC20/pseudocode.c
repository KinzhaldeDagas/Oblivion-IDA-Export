hkBaseObject *__thiscall hkBaseObject::`scalar deleting destructor'(hkBaseObject *this, char a2)
{
  this->__vftable = (hkBaseObject_vtbl *)&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
