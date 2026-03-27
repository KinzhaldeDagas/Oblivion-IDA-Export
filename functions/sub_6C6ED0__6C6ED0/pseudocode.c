bool __userpurge sub_6C6ED0@<al>(_DWORD *this@<ecx>, int a2@<edi>, int a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  const char *v9; // ebp
  int v10; // esi
  const char **i; // edi
  unsigned int v13; // ebx
  const char *v14; // ebp
  const char **v15; // esi
  unsigned int v16; // edi
  size_t v17; // [esp-14h] [ebp-28h]
  const char **v18; // [esp+0h] [ebp-14h]
  const char **v19; // [esp+0h] [ebp-14h]
  unsigned int v20; // [esp+4h] [ebp-10h]
  int v21; // [esp+8h] [ebp-Ch]
  unsigned int v22; // [esp+Ch] [ebp-8h]
  const char **v23; // [esp+10h] [ebp-4h]
  char v24; // [esp+18h] [ebp+4h]
  char v25; // [esp+18h] [ebp+4h]

  v3 = *(this + 8);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a3 + 0x20);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 0xC);
  v6 = *(_DWORD *)(v4 + 0x10);
  HIDWORD(v17) = a2;
  v7 = *(_DWORD *)(v3 + 0xC);
  v8 = 0;
  v22 = v5;
  v20 = v7;
  v21 = *(_DWORD *)(v3 + 0x10);
  v24 = 0;
  if ( !v5 )
    return 0;
  v23 = (const char **)(v6 + 4);
  v18 = (const char **)(v6 + 4);
  do
  {
    v9 = *v18;
    LODWORD(v17) = MaxCount;
    if ( !_strnicmp(*v18, off_B241C4, v17) )
    {
      v10 = 0;
      v24 = 1;
      if ( !v7 )
        return 0;
      for ( i = (const char **)(v21 + 4); strcmp(v9, *i); i += 2 )
      {
        if ( ++v10 >= v20 )
          return 0;
      }
      v5 = v22;
      v7 = v20;
    }
    v18 += 2;
    ++v8;
  }
  while ( v8 < v5 );
  if ( !v24 )
    return 0;
  v13 = 0;
  v25 = 0;
  if ( !v7 )
    return 0;
  v19 = (const char **)(v21 + 4);
  do
  {
    v14 = *v19;
    LODWORD(v17) = MaxCount;
    if ( !_strnicmp(*v19, off_B241C4, v17) )
    {
      v15 = v23;
      v25 = 1;
      v16 = 0;
      while ( strcmp(v14, *v15) )
      {
        ++v16;
        v15 += 2;
        if ( v16 >= v22 )
          return 0;
      }
      v7 = v20;
    }
    v19 += 2;
    ++v13;
  }
  while ( v13 < v7 );
  return v25 != 0;
}
