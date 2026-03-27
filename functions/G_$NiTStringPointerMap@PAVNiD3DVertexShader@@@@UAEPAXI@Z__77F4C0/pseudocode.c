_DWORD *__thiscall NiTStringPointerMap<NiD3DVertexShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiD3DVertexShader *>::~NiTStringPointerMap<NiD3DVertexShader *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
