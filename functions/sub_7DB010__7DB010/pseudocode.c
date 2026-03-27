void __thiscall sub_7DB010(unsigned int *this)
{
  if ( *this )
  {
    FormHeapFree(*this);
    *this = 0;
  }
  if ( *(this + 1) )
  {
    FormHeapFree(*(this + 1));
    *(this + 1) = 0;
  }
  NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(this + 2);
}
