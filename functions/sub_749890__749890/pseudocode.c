unsigned int *__thiscall sub_749890(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable'; /*0x749893*/
  NiTMap_Clear(this); /*0x749899*/
  FormHeapFree(*(this + 2)); /*0x7498a2*/
  if ( (a2 & 1) != 0 ) /*0x7498af*/
    FormHeapFree((unsigned int)this); /*0x7498b2*/
  return this; /*0x7498bc*/
}
