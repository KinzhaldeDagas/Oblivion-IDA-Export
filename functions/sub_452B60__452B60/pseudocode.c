unsigned int *__thiscall sub_452B60(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,ChangeData *>::`vftable'; /*0x452b63*/
  NiTMap_Clear(this); /*0x452b69*/
  FormHeapFree(*(this + 2)); /*0x452b72*/
  if ( (a2 & 1) != 0 ) /*0x452b7f*/
    FormHeapFree((unsigned int)this); /*0x452b82*/
  return this; /*0x452b8c*/
}
