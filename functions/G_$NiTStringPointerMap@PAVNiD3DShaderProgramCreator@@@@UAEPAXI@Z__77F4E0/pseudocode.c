_DWORD *__thiscall NiTStringPointerMap<NiD3DShaderProgramCreator *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiD3DShaderProgramCreator *>::~NiTStringPointerMap<NiD3DShaderProgramCreator *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
