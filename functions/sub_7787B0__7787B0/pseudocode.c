unsigned int *__thiscall sub_7787B0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x7787b3*/
  NiTMap_Clear(this); /*0x7787b9*/
  FormHeapFree(*(this + 2)); /*0x7787c2*/
  if ( (a2 & 1) != 0 ) /*0x7787cf*/
    FormHeapFree((unsigned int)this); /*0x7787d2*/
  return this; /*0x7787dc*/
}
