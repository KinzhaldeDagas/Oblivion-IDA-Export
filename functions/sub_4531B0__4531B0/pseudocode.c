char __userpurge sub_4531B0@<al>(_DWORD *this@<ecx>, char a2@<bpl>, int a3, const char *a4)
{
  _DWORD *v5; // edi
  FreeEntry *v6; // eax
  const char *v7; // ecx
  FreeEntry *v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  size_t v12; // [esp-8h] [ebp-14h]
  int v13; // [esp+0h] [ebp-Ch]

  v5 = (_DWORD *)FormHeapAlloc(8u); /*0x4531c0*/
  *v5 = a3; /*0x4531c6*/
  HIDWORD(v12) = 1; /*0x4531db*/
  LODWORD(v12) = strlen(a4) + 1; /*0x4531e0*/
  v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v12, v13); /*0x4531e6*/
  v5[1] = v6; /*0x4531eb*/
  v7 = a4; /*0x4531ee*/
  v8 = v6; /*0x4531f0*/
  do /*0x4531fe*/
  {
    LOBYTE(v9) = *v7; /*0x4531f2*/
    LOBYTE(v8->prev) = *v7++; /*0x4531f4*/
    v8 = (FreeEntry *)((char *)v8 + 1); /*0x4531f9*/
  }
  while ( (_BYTE)v9 ); /*0x4531fe*/
  v10 = (_DWORD *)*(this + 1); /*0x453200*/
  if ( !*v10 ) /*0x453206*/
    goto LABEL_7; /*0x453206*/
  v9 = (_DWORD *)FormHeapAlloc(8u); /*0x45320a*/
  if ( !v9 ) /*0x453214*/
  {
    LOBYTE(v9) = 0; /*0x453235*/
    *(_DWORD *)4 = v10[1]; /*0x453237*/
    v10[1] = 0; /*0x45323a*/
LABEL_7:
    *v10 = v5; /*0x45323d*/
    return (char)v9; /*0x45323d*/
  }
  *v9 = *v10; /*0x453218*/
  v9[1] = 0; /*0x45321a*/
  v9[1] = v10[1]; /*0x453224*/
  *v10 = v5; /*0x453227*/
  v10[1] = v9; /*0x45322a*/
  return (char)v9; /*0x453229*/
}
