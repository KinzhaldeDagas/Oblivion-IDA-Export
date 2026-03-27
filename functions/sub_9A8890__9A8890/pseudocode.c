int __userpurge sub_9A8890@<eax>(
        _DWORD *this@<ecx>,
        char *a2,
        int a3,
        UInt32 a4,
        UInt32 a5,
        char *a6,
        char *Size,
        size_t Size_4,
        void *Src,
        void *a10,
        char a11)
{
  NiD3DShaderConstantMapEntry *v12; // eax
  NiD3DShaderConstantMapEntry *v13; // esi
  int result; // eax
  char v15; // [esp+0h] [ebp-8h]

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v12 )
    v13 = sub_9A84B0(v12);
  else
    v13 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2);
  v13->Flags = a3 & 0xFFFFFFF | 0x30000000;
  v13->Extra = a4;
  v13->RegisterCount = (UInt32)a6;
  v13->ShaderRegister = a5;
  sub_9A85C0(v13, Size);
  if ( Src )
    sub_9A23F0((int)v13, Size_4, Src, a10, v15);
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13);
  *(this + 9) = result;
  if ( result )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1);
    return *(this + 9);
  }
  return result;
}
