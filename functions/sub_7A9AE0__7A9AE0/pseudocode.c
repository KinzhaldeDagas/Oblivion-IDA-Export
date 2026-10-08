// ArrayConstructor element destructor callback for BSShaderAccumulator selector buckets. Restores the BSTPersistentList<...,BSShaderProperty::RenderPass *> vtable; accumulator cleanup owns node recycling and never destroys borrowed property RenderPass payloads here.
void __thiscall BSTPersistentRenderPassList_Destructor(_DWORD *this)
{
  *this = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7a9ae0*/
}
