_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
