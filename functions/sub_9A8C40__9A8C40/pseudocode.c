int __userpurge sub_9A8C40@<eax>(
        _DWORD *this@<ecx>,
        char *a2,
        int a3,
        int a4,
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
  int v14; // edi
  UInt32 Flags; // edi
  int v16; // eax
  bool v17; // zf
  void *v18; // eax
  int result; // eax
  size_t v20; // [esp-14h] [ebp-1Ch]
  unsigned int DataSource; // [esp-Ch] [ebp-14h]

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v12 )
    v13 = sub_9A84B0(v12);
  else
    v13 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2);
  v14 = a3 & 0xFFFFFFF | 0x10000000;
  switch ( (_DWORD)Size_4 )
  {
    case 8:
      v14 = a3 & 0xFFFFFFA | 0x10000005;
      goto LABEL_16;
    case 0xC:
      v14 = a3 & 0xFFFFFF9 | 0x10000006;
      goto LABEL_16;
    case 0x10:
      v14 = a3 & 0xFFFFFF8 | 0x10000007;
      goto LABEL_16;
  }
  if ( (_DWORD)Size_4 != 0x20 )
  {
    if ( (_DWORD)Size_4 == 0x24 )
    {
      v14 = a3 & 0xFFFFFF7 | 0x10000008;
      goto LABEL_16;
    }
    if ( (_DWORD)Size_4 != 0x30 && (_DWORD)Size_4 != 0x40 )
      goto LABEL_16;
  }
  v14 = a3 & 0xFFFFFF6 | 0x10000009;
LABEL_16:
  v13->Flags = v14;
  if ( (Size_4 & 3) != 0 )
    goto LABEL_28;
  if ( HIDWORD(Size_4) != 4 )
    goto LABEL_28;
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)v14] == 1 )
    goto LABEL_28;
  Flags = v13->Flags;
  if ( !byte_B4295B )
    sub_783C70();
  if ( dword_B428D8[(unsigned __int8)Flags] == 3 )
    goto LABEL_28;
  if ( this && (_UNKNOWN *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this) == &unk_BAA920 )
  {
    v16 = 1;
    goto LABEL_29;
  }
  v17 = !sub_435CC0((int)&unk_BAA8D8, (int)this);
  v16 = 2;
  if ( v17 )
LABEL_28:
    v16 = a4;
LABEL_29:
  v13->Extra = v16;
  v13->ShaderRegister = a5;
  v13->RegisterCount = (UInt32)a6;
  sub_9A85C0(v13, Size);
  *(_QWORD *)&v13->DataSize = Size_4;
  if ( (_BYTE)a10 )
  {
    DataSource = (unsigned int)v13->DataSource;
    v13->Unk34 = 1;
    FormHeapFree(DataSource);
    v18 = (void *)FormHeapAlloc(Size_4);
    LODWORD(v20) = Size_4;
    v13->DataSource = v18;
    memcpy(v18, Src, v20);
  }
  else
  {
    v13->Unk34 = 0;
    v13->DataSource = Src;
  }
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13);
  *(this + 9) = result;
  if ( result )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1);
    return *(this + 9);
  }
  return result;
}
