_DWORD *__thiscall NiTStringPointerMap<ShaderBufferEntry *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
