unsigned int *__thiscall sub_7128B0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiObject * (__cdecl *)(void)>::`vftable'; /*0x7128b3*/
  NiTMap_Clear(this); /*0x7128b9*/
  FormHeapFree(*(this + 2)); /*0x7128c2*/
  if ( (a2 & 1) != 0 ) /*0x7128cf*/
    FormHeapFree((unsigned int)this); /*0x7128d2*/
  return this; /*0x7128dc*/
}
