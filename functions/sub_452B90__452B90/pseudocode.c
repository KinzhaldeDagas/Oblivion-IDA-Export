unsigned int *__thiscall sub_452B90(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<unsigned int> *>::`vftable'; /*0x452b93*/
  NiTMap_Clear(this); /*0x452b99*/
  FormHeapFree(*(this + 2)); /*0x452ba2*/
  if ( (a2 & 1) != 0 ) /*0x452baf*/
    FormHeapFree((unsigned int)this); /*0x452bb2*/
  return this; /*0x452bbc*/
}
