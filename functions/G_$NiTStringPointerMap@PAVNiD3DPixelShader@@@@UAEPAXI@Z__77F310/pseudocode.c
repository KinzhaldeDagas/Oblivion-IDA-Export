_DWORD *__thiscall NiTStringPointerMap<NiD3DPixelShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiD3DPixelShader *>::~NiTStringPointerMap<NiD3DPixelShader *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
