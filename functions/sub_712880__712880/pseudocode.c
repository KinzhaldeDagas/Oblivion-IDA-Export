unsigned int *__thiscall sub_712880(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject const *,unsigned int>::`vftable'; /*0x712883*/
  NiTMap_Clear(this); /*0x712889*/
  FormHeapFree(*(this + 2)); /*0x712892*/
  if ( (a2 & 1) != 0 ) /*0x71289f*/
    FormHeapFree((unsigned int)this); /*0x7128a2*/
  return this; /*0x7128ac*/
}
