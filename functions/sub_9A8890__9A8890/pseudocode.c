int __userpurge sub_9A8890@<eax>(
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
  int result; // eax
  char v15; // [esp+0h] [ebp-8h]

  v12 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8896*/
  if ( v12 ) /*0x9a88a0*/
    v13 = sub_9A84B0(v12); /*0x9a88a9*/
  else
    v13 = 0; /*0x9a88ad*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v13, a2); /*0x9a88b6*/
  v13->Flags = a3 & 0xFFFFFFF | 0x30000000; /*0x9a88d3*/
  v13->Extra = a4; /*0x9a88da*/
  v13->RegisterCount = (UInt32)a6; /*0x9a88e1*/
  v13->ShaderRegister = a5; /*0x9a88e7*/
  sub_9A85C0(v13, Size); /*0x9a88ea*/
  if ( Src ) /*0x9a88f5*/
    sub_9A23F0((int)v13, Size_4, Src, a10, v15); /*0x9a8909*/
  result = (*(int (__thiscall **)(_DWORD *, NiD3DShaderConstantMapEntry *))(*this + 0x4C))(this, v13); /*0x9a8916*/
  *(this + 9) = result; /*0x9a891a*/
  if ( result ) /*0x9a891d*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v13->_vtbl)(v13, 1); /*0x9a8927*/
    return *(this + 9); /*0x9a8929*/
  }
  return result; /*0x9a892c*/
}
