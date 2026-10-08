BSExtraData *__thiscall BSExtraData::`scalar deleting destructor'(BSExtraData *this, char a2)
{
  this->vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x42ae38*/
  if ( (a2 & 1) != 0 ) /*0x42ae3e*/
    FormHeapFree((unsigned int)this); /*0x42ae41*/
  return this; /*0x42ae4b*/
}
