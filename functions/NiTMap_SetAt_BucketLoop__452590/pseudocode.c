int __userpurge NiTMap_SetAt_::BucketLoop@<eax>(
        _DWORD *a1@<esi>,
        int a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4@<ebp>,
        int a5,
        int a6)
{
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 8))(a1, a2, a3[1]) ) /*0x4525a0*/
  {
    a3 = (_DWORD *)*a3; /*0x4525a2*/
    if ( !a3 ) /*0x4525a6*/
      return NiTMap_SetAt_::InsertNode(a4, a1, a5, a6); /*0x4525a7*/
  }
  return NiTMap_SetAt_::Done((int)a1, a5, a6);
}
