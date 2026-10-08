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

  v3 = *(this + 8); /*0x6c6ed0*/
  if ( !v3 ) /*0x6c6ed8*/
    return 0; /*0x6c6ed8*/
  v4 = *(_DWORD *)(a3 + 0x20); /*0x6c6ee2*/
  if ( !v4 ) /*0x6c6ee7*/
    return 0; /*0x6c7098*/
  v5 = *(_DWORD *)(v4 + 0xC); /*0x6c6ef3*/
  v6 = *(_DWORD *)(v4 + 0x10); /*0x6c6ef6*/
  HIDWORD(v17) = a2; /*0x6c6ef9*/
  v7 = *(_DWORD *)(v3 + 0xC); /*0x6c6efa*/
  v8 = 0; /*0x6c6efd*/
  v22 = v5; /*0x6c6f01*/
  v20 = v7; /*0x6c6f05*/
  v21 = *(_DWORD *)(v3 + 0x10); /*0x6c6f09*/
  v24 = 0; /*0x6c6f0d*/
  if ( !v5 ) /*0x6c6f12*/
    return 0; /*0x6c6f12*/
  v23 = (const char **)(v6 + 4); /*0x6c6f1b*/
  v18 = (const char **)(v6 + 4); /*0x6c6f1f*/
  do /*0x6c6fc3*/
  {
    v9 = *v18; /*0x6c6f40*/
    LODWORD(v17) = MaxCount; /*0x6c6f42*/
    if ( !_strnicmp(*v18, off_B241C4, v17) ) /*0x6c6f45*/
    {
      v10 = 0; /*0x6c6f51*/
      v24 = 1; /*0x6c6f55*/
      if ( !v7 ) /*0x6c6f5a*/
        return 0; /*0x6c6f5a*/
      for ( i = (const char **)(v21 + 4); strcmp(v9, *i); i += 2 ) /*0x6c6f64*/
      {
        if ( ++v10 >= v20 ) /*0x6c6fa3*/
          return 0; /*0x6c6fae*/
      }
      v5 = v22; /*0x6c6fb1*/
      v7 = v20; /*0x6c6fb5*/
    }
    v18 += 2; /*0x6c6fb9*/
    ++v8; /*0x6c6fbe*/
  }
  while ( v8 < v5 ); /*0x6c6fc3*/
  if ( !v24 ) /*0x6c6fce*/
    return 0; /*0x6c6fce*/
  v13 = 0; /*0x6c6fd4*/
  v25 = 0; /*0x6c6fd8*/
  if ( !v7 ) /*0x6c6fdd*/
    return 0; /*0x6c6fdd*/
  v19 = (const char **)(v21 + 4); /*0x6c6fea*/
  do /*0x6c7073*/
  {
    v14 = *v19; /*0x6c6fff*/
    LODWORD(v17) = MaxCount; /*0x6c7001*/
    if ( !_strnicmp(*v19, off_B241C4, v17) ) /*0x6c7004*/
    {
      v15 = v23; /*0x6c7010*/
      v25 = 1; /*0x6c7014*/
      v16 = 0; /*0x6c7019*/
      while ( strcmp(v14, *v15) ) /*0x6c704b*/
      {
        ++v16; /*0x6c704d*/
        v15 += 2; /*0x6c7050*/
        if ( v16 >= v22 ) /*0x6c7057*/
          return 0; /*0x6c7062*/
      }
      v7 = v20; /*0x6c7065*/
    }
    v19 += 2; /*0x6c7069*/
    ++v13; /*0x6c706e*/
  }
  while ( v13 < v7 ); /*0x6c7073*/
  return v25 != 0; /*0x6c708f*/
}
