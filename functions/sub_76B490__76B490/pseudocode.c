unsigned int *__thiscall sub_76B490(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x76b493*/
  NiTMap_Clear(this); /*0x76b499*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x76b4a0*/
  NiTMap_Clear(this); /*0x76b4a6*/
  FormHeapFree(*(this + 2)); /*0x76b4af*/
  if ( (a2 & 1) != 0 ) /*0x76b4bc*/
    FormHeapFree((unsigned int)this); /*0x76b4bf*/
  return this; /*0x76b4c9*/
}
