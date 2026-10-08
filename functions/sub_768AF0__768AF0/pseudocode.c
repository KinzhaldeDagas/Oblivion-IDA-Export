unsigned int *__thiscall sub_768AF0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x768af3*/
  NiTMap_Clear(this); /*0x768af9*/
  FormHeapFree(*(this + 2)); /*0x768b02*/
  if ( (a2 & 1) != 0 ) /*0x768b0f*/
    FormHeapFree((unsigned int)this); /*0x768b12*/
  return this; /*0x768b1c*/
}
