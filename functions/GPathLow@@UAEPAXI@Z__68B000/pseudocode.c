TravelPath *__thiscall PathLow::`scalar deleting destructor'(TravelPath *this, char a2)
{
  this->vtable = (unsigned int)&PathLow::`vftable'; /*0x68b003*/
  TravelPath_ClearNodes(this); /*0x68b009*/
  if ( (a2 & 1) != 0 ) /*0x68b013*/
    FormHeapFree((unsigned int)this); /*0x68b016*/
  return this; /*0x68b020*/
}
