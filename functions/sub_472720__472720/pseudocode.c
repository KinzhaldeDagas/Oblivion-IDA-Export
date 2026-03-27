int __userpurge sub_472720@<eax>(_DWORD *this@<ecx>, int a2@<esi>, size_t MaxCount, float *Str2, int a5)
{
  int v5; // eax
  const char *v6; // ebp
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edi
  const char *v10; // eax
  int v12; // esi
  const char **i; // edi
  size_t v14; // [esp-14h] [ebp-14h]
  int MaxCounta; // [esp+4h] [ebp+4h]
  char *Str2a; // [esp+8h] [ebp+8h]

  if ( Str2 )
    *Str2 = 0.0;
  v5 = *(this + (_DWORD)MaxCount + 0x28);
  if ( !v5 )
    return 0xFFFFFFFF;
  v6 = (const char *)HIDWORD(MaxCount);
  if ( !HIDWORD(MaxCount) )
    return 0xFFFFFFFF;
  v7 = *(_DWORD *)(v5 + 0x20);
  v8 = *(_DWORD *)(v7 + 0xC);
  v9 = *(_DWORD *)(v7 + 0x10);
  v10 = (const char *)HIDWORD(MaxCount);
  Str2a = (char *)v9;
  MaxCounta = &v10[strlen(v10)] - v6;
  if ( !MaxCounta )
    return 0xFFFFFFFF;
  HIDWORD(v14) = a2;
  v12 = 0;
  if ( !v8 )
    return 0xFFFFFFFF;
  for ( i = (const char **)(v9 + 4); ; i += 2 )
  {
    if ( *i )
    {
      LODWORD(v14) = MaxCounta;
      if ( !_strnicmp(*i, v6, v14) )
        break;
    }
    if ( ++v12 >= v8 )
      return 0xFFFFFFFF;
  }
  if ( Str2 )
    *Str2 = *(float *)&Str2a[8 * v12];
  return v12;
}
