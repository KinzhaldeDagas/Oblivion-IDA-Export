unsigned int *__thiscall sub_6C4910(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable'; /*0x6c4913*/
  NiTMap_Clear(this); /*0x6c4919*/
  FormHeapFree(*(this + 2)); /*0x6c4922*/
  if ( (a2 & 1) != 0 ) /*0x6c492f*/
    FormHeapFree((unsigned int)this); /*0x6c4932*/
  return this; /*0x6c493c*/
}
