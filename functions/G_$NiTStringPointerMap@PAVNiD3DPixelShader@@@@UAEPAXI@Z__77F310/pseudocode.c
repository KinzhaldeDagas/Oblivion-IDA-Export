_DWORD *__thiscall NiTStringPointerMap<NiD3DPixelShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiD3DPixelShader *>::~NiTStringPointerMap<NiD3DPixelShader *>(this); /*0x77f313*/
  if ( (a2 & 1) != 0 ) /*0x77f31d*/
    FormHeapFree((unsigned int)this); /*0x77f320*/
  return this; /*0x77f32a*/
}
