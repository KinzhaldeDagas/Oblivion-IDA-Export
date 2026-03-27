int __thiscall sub_9A8AE0(_DWORD *this, char *Src, char *a3, char *a4, UInt32 a5, int a6)
{
  NiD3DShaderConstantMapEntry *v7; // eax
  NiD3DShaderConstantMapEntry *v8; // esi
  int v9; // eax
  int result; // eax

  v7 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v7 )
    v8 = sub_9A84B0(v7);
  else
    v8 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v8, Src);
  v8->ShaderRegister = (UInt32)a3;
  sub_9A85C0(v8, a4);
  v8->Extra = a5;
  v8->Flags = (unsigned __int16)word_B42938[a6] | 0x60000000;
  v9 = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x68))(this, v8);
  *(this + 9) = v9;
  if ( v9 )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v8->_vtbl)(v8, 1);
    return *(this + 9);
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v8);
    *(this + 9) = result;
  }
  return result;
}
