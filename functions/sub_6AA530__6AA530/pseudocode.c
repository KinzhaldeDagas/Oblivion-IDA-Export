unsigned int *__thiscall sub_6AA530(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESGameSound *>::`vftable'; /*0x6aa533*/
  NiTMap_Clear(this); /*0x6aa539*/
  FormHeapFree(*(this + 2)); /*0x6aa542*/
  if ( (a2 & 1) != 0 ) /*0x6aa54f*/
    FormHeapFree((unsigned int)this); /*0x6aa552*/
  return this; /*0x6aa55c*/
}
