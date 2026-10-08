// ArrayConstructor element constructor for BSShaderAccumulator selector buckets. Initializes the BSTPersistentList<...,BSShaderProperty::RenderPass *> vtable and active/free list links; the surrounding accumulator constructor supplies stride 0x14 and count 0x1A3.
_DWORD *__thiscall BSTPersistentRenderPassList_Constructor(_DWORD *this)
{
  *this = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7a9ac4*/
  *(this + 1) = 0; /*0x7a9aca*/
  *(this + 2) = 0; /*0x7a9acd*/
  *(this + 3) = 0; /*0x7a9ad0*/
  return this; /*0x7a9ad3*/
}
