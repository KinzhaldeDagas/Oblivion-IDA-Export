int __userpurge sub_9A8940@<eax>(
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
  void *v14; // eax
  int v15; // eax
  unsigned int DataSource; // [esp-4h] [ebp-14h]

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8948*/
  if ( v12 ) /*0x9a8952*/
    v13 = sub_9A84B0(v12); /*0x9a895b*/
  else
    v13 = 0; /*0x9a895f*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2); /*0x9a8968*/
  v13->Extra = a4; /*0x9a897d*/
  v13->Flags = a3 & 0xFFFFFFF | 0x40000000; /*0x9a8993*/
  v13->ShaderRegister = a5; /*0x9a8996*/
  v13->RegisterCount = (UInt32)a6; /*0x9a8999*/
  sub_9A85C0((unsigned int *)v13, Size); /*0x9a899c*/
  *(_QWORD *)&v13->DataSize = Size_4; /*0x9a89ae*/
  if ( (_BYTE)a10 ) /*0x9a89b4*/
  {
    DataSource = (unsigned int)v13->DataSource; /*0x9a89b9*/
    v13->Unk34 = 1; /*0x9a89ba*/
    FormHeapFree(DataSource); /*0x9a89be*/
    v14 = (void *)FormHeapAlloc(Size_4); /*0x9a89c4*/
    v13->DataSource = v14; /*0x9a89d0*/
    memcpy(v14, Src, Size_4); /*0x9a89d3*/
  }
  else
  {
    v13->Unk34 = 0; /*0x9a89e1*/
    v13->DataSource = Src; /*0x9a89e5*/
  }
  v15 = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13); /*0x9a89f1*/
  *(this + 9) = v15; /*0x9a89f5*/
  if ( v15 ) /*0x9a89f8*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1); /*0x9a8a02*/
    return *(this + 9); /*0x9a8a04*/
  }
  else
  {
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a8a15*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a8a17*/
    sub_77CAB0( /*0x9a8a35*/
      g_D3DXParameterClassDispatch[(unsigned __int8)a3],
      v13,
      a2,
      (char *)g_D3DXParameterClassDispatch[(unsigned __int8)a3],
      __PAIR64__((unsigned int)Src, Size_4));
    return *(this + 9); /*0x9a8a3a*/
  }
}
