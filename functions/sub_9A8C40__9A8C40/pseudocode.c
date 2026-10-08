int __userpurge sub_9A8C40@<eax>(
        _DWORD *this@<ecx>,
        char *a2,
        int a3,
        int a4,
        int a5,
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

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8c46*/
  if ( v12 ) /*0x9a8c50*/
    v13 = sub_9A84B0(v12); /*0x9a8c59*/
  else
    v13 = 0; /*0x9a8c5d*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2); /*0x9a8c68*/
  v14 = a3 & 0xFFFFFFF | 0x10000000; /*0x9a8c7b*/
  switch ( (_DWORD)Size_4 ) /*0x9a8c84*/
  {
    case 8: /*0x9a8c84*/
      v14 = a3 & 0xFFFFFFA | 0x10000005; /*0x9a8c86*/
      goto LABEL_16; /*0x9a8c89*/
    case 0xC: /*0x9a8c84*/
      v14 = a3 & 0xFFFFFF9 | 0x10000006; /*0x9a8c90*/
      goto LABEL_16; /*0x9a8c93*/
    case 0x10: /*0x9a8c84*/
      v14 = a3 & 0xFFFFFF8 | 0x10000007; /*0x9a8c9a*/
      goto LABEL_16; /*0x9a8c9d*/
  }
  if ( (_DWORD)Size_4 != 0x20 ) /*0x9a8ca2*/
  {
    if ( (_DWORD)Size_4 == 0x24 ) /*0x9a8ca7*/
    {
      v14 = a3 & 0xFFFFFF7 | 0x10000008; /*0x9a8ca9*/
      goto LABEL_16; /*0x9a8cac*/
    }
    if ( (_DWORD)Size_4 != 0x30 && (_DWORD)Size_4 != 0x40 ) /*0x9a8cb6*/
      goto LABEL_16; /*0x9a8cb6*/
  }
  v14 = a3 & 0xFFFFFF6 | 0x10000009; /*0x9a8cb8*/
LABEL_16:
  v13->Flags = v14; /*0x9a8cbb*/
  if ( (Size_4 & 3) != 0 ) /*0x9a8cc1*/
    goto LABEL_28; /*0x9a8cc1*/
  if ( HIDWORD(Size_4) != 4 ) /*0x9a8cc8*/
    goto LABEL_28; /*0x9a8cc8*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a8cd1*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a8cd3*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v14] == 1 ) /*0x9a8ce6*/
    goto LABEL_28; /*0x9a8ce6*/
  Flags = v13->Flags; /*0x9a8cef*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a8cf2*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a8cf4*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)Flags] == 3 ) /*0x9a8d07*/
    goto LABEL_28; /*0x9a8d07*/
  if ( this && (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this) == &stru_BAA920 ) /*0x9a8d21*/
  {
    v16 = 1; /*0x9a8d23*/
    goto LABEL_29; /*0x9a8d28*/
  }
  v17 = !sub_435CC0((int)&stru_BAA8D8, (int)this); /*0x9a8d38*/
  v16 = 2; /*0x9a8d3a*/
  if ( v17 ) /*0x9a8d3f*/
LABEL_28:
    v16 = a4; /*0x9a8d41*/
LABEL_29:
  v13->Extra = v16; /*0x9a8d45*/
  v13->ShaderRegister = a5; /*0x9a8d54*/
  v13->RegisterCount = (UInt32)a6; /*0x9a8d5a*/
  sub_9A85C0(v13, Size); /*0x9a8d5d*/
  *(_QWORD *)&v13->DataSize = Size_4; /*0x9a8d6b*/
  if ( (_BYTE)a10 ) /*0x9a8d71*/
  {
    DataSource = (unsigned int)v13->DataSource; /*0x9a8d76*/
    v13->Unk34 = 1; /*0x9a8d77*/
    FormHeapFree(DataSource); /*0x9a8d7b*/
    v18 = (void *)FormHeapAlloc(Size_4); /*0x9a8d81*/
    LODWORD(v20) = Size_4; /*0x9a8d8a*/
    v13->DataSource = v18; /*0x9a8d8d*/
    memcpy(v18, Src, v20); /*0x9a8d90*/
  }
  else
  {
    v13->Unk34 = 0; /*0x9a8d9e*/
    v13->DataSource = Src; /*0x9a8da2*/
  }
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13); /*0x9a8dae*/
  *(this + 9) = result; /*0x9a8db3*/
  if ( result ) /*0x9a8db7*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1); /*0x9a8dc1*/
    return *(this + 9); /*0x9a8dc3*/
  }
  return result; /*0x9a8dc6*/
}
