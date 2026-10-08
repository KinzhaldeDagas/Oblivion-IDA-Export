int __userpurge sub_741E60@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  int v2; // edi
  int (__cdecl *v4)(int, size_t *, int, int *, int); // eax
  int result; // eax
  int v6; // [esp-14h] [ebp-20h]
  size_t v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = Size; /*0x741e63*/
  LODWORD(v7) = Size; /*0x741e67*/
  sub_721610(this, v7); /*0x741e6a*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x741e83*/
  v4 = *(int (__cdecl **)(int, size_t *, int, int *, int))(v6 + 4); /*0x741e84*/
  v8 = 1; /*0x741e87*/
  result = v4(v6, &Size, 1, &v8, 1); /*0x741e8f*/
  LOBYTE(this->members.propertyState) = (_BYTE)Size != 0; /*0x741e9d*/
  return result; /*0x741e99*/
}
