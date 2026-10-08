_DWORD *__thiscall NiTStringPointerMap<NiD3DShaderProgramCreator *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiD3DShaderProgramCreator *>::~NiTStringPointerMap<NiD3DShaderProgramCreator *>(this); /*0x77f4e3*/
  if ( (a2 & 1) != 0 ) /*0x77f4ed*/
    FormHeapFree((unsigned int)this); /*0x77f4f0*/
  return this; /*0x77f4fa*/
}
