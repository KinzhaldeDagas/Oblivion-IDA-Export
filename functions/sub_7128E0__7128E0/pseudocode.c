unsigned int *__thiscall sub_7128E0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,unsigned short>::`vftable'; /*0x7128e3*/
  NiTMap_Clear(this); /*0x7128e9*/
  FormHeapFree(*(this + 2)); /*0x7128f2*/
  if ( (a2 & 1) != 0 ) /*0x7128ff*/
    FormHeapFree((unsigned int)this); /*0x712902*/
  return this; /*0x71290c*/
}
