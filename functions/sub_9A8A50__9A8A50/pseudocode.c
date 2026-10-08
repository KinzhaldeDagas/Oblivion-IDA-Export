int __thiscall sub_9A8A50(_DWORD *this, char *Src, int a3, int a4, int a5, char *a6, char *a7)
{
  NiD3DShaderConstantMapEntry *v8; // eax
  NiD3DShaderConstantMapEntry *v9; // esi
  int result; // eax

  v8 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8a56*/
  if ( v8 ) /*0x9a8a60*/
    v9 = sub_9A84B0(v8); /*0x9a8a69*/
  else
    v9 = 0; /*0x9a8a6d*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v9, Src); /*0x9a8a76*/
  v9->Flags = a3 & 0xFFFFFFF | 0x50000000; /*0x9a8a93*/
  v9->Extra = a4; /*0x9a8a9a*/
  v9->RegisterCount = (UInt32)a6; /*0x9a8aa1*/
  v9->ShaderRegister = a5; /*0x9a8aa7*/
  sub_9A85C0((unsigned int *)v9, a7); /*0x9a8aaa*/
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v9); /*0x9a8ab7*/
  *(this + 9) = result; /*0x9a8abb*/
  if ( result ) /*0x9a8abe*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v9->_vtbl)(v9, 1); /*0x9a8ac8*/
    return *(this + 9); /*0x9a8aca*/
  }
  return result; /*0x9a8acd*/
}
