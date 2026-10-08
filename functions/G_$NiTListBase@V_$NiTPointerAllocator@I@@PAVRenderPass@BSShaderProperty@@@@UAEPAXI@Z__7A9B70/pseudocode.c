_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7a9b78*/
  if ( (a2 & 1) != 0 ) /*0x7a9b7e*/
    FormHeapFree((unsigned int)this); /*0x7a9b81*/
  return this; /*0x7a9b8b*/
}
