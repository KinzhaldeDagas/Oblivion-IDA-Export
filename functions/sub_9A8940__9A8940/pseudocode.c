int __userpurge sub_9A8940@<eax>(
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
  void *v14; // eax
  int v15; // eax
  size_t v17; // [esp-Ch] [ebp-1Ch]
  unsigned int DataSource; // [esp-4h] [ebp-14h]

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v12 )
    v13 = sub_9A84B0(v12);
  else
    v13 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2);
  v13->Extra = a4;
  v13->Flags = a3 & 0xFFFFFFF | 0x40000000;
  v13->ShaderRegister = a5;
  v13->RegisterCount = (UInt32)a6;
  sub_9A85C0(v13, Size);
  *(_QWORD *)&v13->DataSize = Size_4;
  if ( (_BYTE)a10 )
  {
    DataSource = (unsigned int)v13->DataSource;
    v13->Unk34 = 1;
    FormHeapFree(DataSource);
    v14 = (void *)FormHeapAlloc(Size_4);
    LODWORD(v17) = Size_4;
    v13->DataSource = v14;
    memcpy(v14, Src, v17);
  }
  else
  {
    v13->Unk34 = 0;
    v13->DataSource = Src;
  }
  v15 = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13);
  *(this + 9) = v15;
  if ( v15 )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1);
    return *(this + 9);
  }
  else
  {
    if ( !byte_B4295B )
      sub_783C70();
    sub_77CAB0(
      dword_B428D8[(unsigned __int8)a3],
      v13,
      a2,
      dword_B428D8[(unsigned __int8)a3],
      __PAIR64__((unsigned int)Src, Size_4));
    return *(this + 9);
  }
}
