void __userpurge sub_4EEB30(signed int a1@<ecx>, int a2@<esi>, int a3)
{
  signed int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rax
  _DWORD *v7; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  size_t v10; // [esp-8h] [ebp-Ch]

  v4 = a1;
  v5 = 0;
  if ( a1 )
  {
    do
    {
      if ( *(_DWORD *)a1 )
        ++v5;
      a1 = *(_DWORD *)(a1 + 4);
    }
    while ( a1 );
    if ( v5 )
    {
      v6 = 8LL * v5;
      LOBYTE(a1) = HIDWORD(v6) != 0;
      HIDWORD(v10) = a2;
      v7 = (_DWORD *)FormHeapAlloc(v6 | -a1);
      v8 = 0;
      v9 = (_DWORD *)v4;
      do
      {
        v7[2 * v8] = *(_DWORD *)(*(_DWORD *)*v9 + 0xC);
        v7[2 * v8 + 1] = *(_DWORD *)(*v9 + 4);
        v9 = (_DWORD *)v9[1];
        ++v8;
      }
      while ( v9 );
      LODWORD(v10) = 8 * v8;
      TESForm_PutFormRecordChunkData(a3, v7, v10);
      FormHeapFree((unsigned int)v7);
    }
  }
}
