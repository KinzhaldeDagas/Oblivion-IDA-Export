unsigned int *__thiscall sub_478040(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,bool>::`vftable'; /*0x478043*/
  NiTMap_Clear(this); /*0x478049*/
  FormHeapFree(*(this + 2)); /*0x478052*/
  if ( (a2 & 1) != 0 ) /*0x47805f*/
    FormHeapFree((unsigned int)this); /*0x478062*/
  return this; /*0x47806c*/
}
