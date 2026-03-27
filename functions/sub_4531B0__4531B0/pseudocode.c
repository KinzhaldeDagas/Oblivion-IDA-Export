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

  v5 = (_DWORD *)FormHeapAlloc(8u);
  *v5 = a3;
  HIDWORD(v12) = 1;
  LODWORD(v12) = strlen(a4) + 1;
  v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v12, v13);
  v5[1] = v6;
  v7 = a4;
  v8 = v6;
  do
  {
    LOBYTE(v9) = *v7;
    LOBYTE(v8->prev) = *v7++;
    v8 = (FreeEntry *)((char *)v8 + 1);
  }
  while ( (_BYTE)v9 );
  v10 = (_DWORD *)*(this + 1);
  if ( !*v10 )
    goto LABEL_7;
  v9 = (_DWORD *)FormHeapAlloc(8u);
  if ( !v9 )
  {
    LOBYTE(v9) = 0;
    *(_DWORD *)4 = v10[1];
    v10[1] = 0;
LABEL_7:
    *v10 = v5;
    return (char)v9;
  }
  *v9 = *v10;
  v9[1] = 0;
  v9[1] = v10[1];
  *v10 = v5;
  v10[1] = v9;
  return (char)v9;
}
