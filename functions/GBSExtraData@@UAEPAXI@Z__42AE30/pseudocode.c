BSExtraData *__thiscall BSExtraData::`scalar deleting destructor'(BSExtraData *this, char a2)
{
  this->vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
