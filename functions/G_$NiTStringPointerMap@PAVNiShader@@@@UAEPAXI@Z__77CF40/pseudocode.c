_DWORD *__thiscall NiTStringPointerMap<NiShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiShader *>::~NiTStringPointerMap<NiShader *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
