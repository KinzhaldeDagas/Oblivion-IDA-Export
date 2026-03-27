int __thiscall sub_9A8A50(_DWORD *this, char *Src, int a3, UInt32 a4, UInt32 a5, char *a6, char *a7)
{
  NiD3DShaderConstantMapEntry *v8; // eax
  NiD3DShaderConstantMapEntry *v9; // esi
  int result; // eax

  v8 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v8 )
    v9 = sub_9A84B0(v8);
  else
    v9 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v9, Src);
  v9->Flags = a3 & 0xFFFFFFF | 0x50000000;
  v9->Extra = a4;
  v9->RegisterCount = (UInt32)a6;
  v9->ShaderRegister = a5;
  sub_9A85C0(v9, a7);
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v9);
  *(this + 9) = result;
  if ( result )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v9->_vtbl)(v9, 1);
    return *(this + 9);
  }
  return result;
}
