_DWORD *__thiscall BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7a9b58*/
  if ( (a2 & 1) != 0 ) /*0x7a9b5e*/
    FormHeapFree((unsigned int)this); /*0x7a9b61*/
  return this; /*0x7a9b6b*/
}
