unsigned int *__thiscall sub_76B4D0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x76b4d3*/
  NiTMap_Clear(this); /*0x76b4d9*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x76b4e0*/
  NiTMap_Clear(this); /*0x76b4e6*/
  FormHeapFree(*(this + 2)); /*0x76b4ef*/
  if ( (a2 & 1) != 0 ) /*0x76b4fc*/
    FormHeapFree((unsigned int)this); /*0x76b4ff*/
  return this; /*0x76b509*/
}
