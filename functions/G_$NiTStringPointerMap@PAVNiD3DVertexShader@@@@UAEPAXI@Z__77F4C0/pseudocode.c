_DWORD *__thiscall NiTStringPointerMap<NiD3DVertexShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiD3DVertexShader *>::~NiTStringPointerMap<NiD3DVertexShader *>(this); /*0x77f4c3*/
  if ( (a2 & 1) != 0 ) /*0x77f4cd*/
    FormHeapFree((unsigned int)this); /*0x77f4d0*/
  return this; /*0x77f4da*/
}
