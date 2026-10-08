unsigned int *__thiscall sub_768AC0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x768ac3*/
  NiTMap_Clear(this); /*0x768ac9*/
  FormHeapFree(*(this + 2)); /*0x768ad2*/
  if ( (a2 & 1) != 0 ) /*0x768adf*/
    FormHeapFree((unsigned int)this); /*0x768ae2*/
  return this; /*0x768aec*/
}
