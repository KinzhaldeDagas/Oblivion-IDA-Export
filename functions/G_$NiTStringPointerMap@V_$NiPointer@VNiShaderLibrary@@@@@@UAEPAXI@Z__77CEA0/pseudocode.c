_DWORD *__thiscall NiTStringPointerMap<NiPointer<NiShaderLibrary>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPointer<NiShaderLibrary>>::~NiTStringPointerMap<NiPointer<NiShaderLibrary>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
