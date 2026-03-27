int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v4; // ecx
  const char *v5; // eax
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // [esp+4h] [ebp-4h]

  v12 = 0;
  if ( !(_DWORD)MaxCount )
    return 0;
  if ( (unsigned int)MaxCount <= 4 )
  {
    v4 = Str2;
    v5 = Str1;
    goto LABEL_23;
  }
  v4 = Str2;
  v5 = Str1;
  do
  {
    v6 = *v5;
    v5 += 4;
    v4 += 4;
    if ( !v6 || v6 != v4[0xFFFFFFFC] )
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFC);
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFC);
      return v10 - v11;
    }
    v7 = v5[0xFFFFFFFD];
    if ( !v7 || v7 != v4[0xFFFFFFFD] )
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFD);
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFD);
      return v10 - v11;
    }
    v8 = v5[0xFFFFFFFE];
    if ( !v8 || v8 != v4[0xFFFFFFFE] )
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFE);
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFE);
      return v10 - v11;
    }
    v9 = v5[0xFFFFFFFF];
    if ( !v9 || v9 != v4[0xFFFFFFFF] )
    {
      v10 = *((unsigned __int8 *)v5 + 0xFFFFFFFF);
      v11 = *((unsigned __int8 *)v4 + 0xFFFFFFFF);
      return v10 - v11;
    }
    v12 += 4;
  }
  while ( v12 < (int)MaxCount - 4 );
  while ( 1 )
  {
LABEL_23:
    if ( v12 >= (unsigned int)MaxCount )
      return 0;
    if ( !*v5 || *v5 != *v4 )
      break;
    ++v5;
    ++v4;
    ++v12;
  }
  v10 = *(unsigned __int8 *)v5;
  v11 = *(unsigned __int8 *)v4;
  return v10 - v11;
}
