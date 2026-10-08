int __thiscall sub_9A8AE0(_DWORD *this, char *Src, char *a3, char *a4, int a5, int a6)
{
  NiD3DShaderConstantMapEntry *v7; // eax
  NiD3DShaderConstantMapEntry *v8; // esi
  int v9; // eax
  int result; // eax

  v7 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8ae6*/
  if ( v7 ) /*0x9a8af0*/
    v8 = sub_9A84B0(v7); /*0x9a8af9*/
  else
    v8 = 0; /*0x9a8afd*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v8, Src); /*0x9a8b06*/
  v8->ShaderRegister = (UInt32)a3; /*0x9a8b13*/
  sub_9A85C0((unsigned int *)v8, a4); /*0x9a8b19*/
  v8->Extra = a5; /*0x9a8b26*/
  v8->Flags = (unsigned __int16)word_B42938[a6] | 0x60000000; /*0x9a8b37*/
  v9 = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x68))(this, v8); /*0x9a8b42*/
  *(this + 9) = v9; /*0x9a8b46*/
  if ( v9 ) /*0x9a8b49*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v8->_vtbl)(v8, 1); /*0x9a8b65*/
    return *(this + 9); /*0x9a8b67*/
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v8); /*0x9a8b53*/
    *(this + 9) = result; /*0x9a8b55*/
  }
  return result; /*0x9a8b58*/
}
