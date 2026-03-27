char *__cdecl strtok_s(char *Str, const char *Delim, char **Context)
{
  int v3; // ebx
  const char *v4; // esi
  char v6; // dl
  char *v7; // edx
  char *v8; // ebx
  _BYTE v9[32]; // [esp+10h] [ebp-24h] BYREF

  v4 = Delim;
  if ( Context && Delim && (Str || *Context) )
  {
    memset(v9, 0, sizeof(v9));
    do
    {
      v6 = *v4;
      v9[*(unsigned __int8 *)v4 >> 3] |= 1 << (*v4 & 7);
      ++v4;
    }
    while ( v6 );
    v7 = Str;
    if ( !Str )
      v7 = *Context;
    while ( ((unsigned __int8)(1 << (*v7 & 7)) & v9[(unsigned __int8)*v7 >> 3]) != 0 && *v7 )
      ++v7;
    v8 = v7;
    while ( *v7 )
    {
      if ( ((unsigned __int8)(1 << (*v7 & 7)) & v9[(unsigned __int8)*v7 >> 3]) != 0 )
      {
        *v7++ = 0;
        break;
      }
      ++v7;
    }
    *Context = v7;
    return v7 != v8 ? v8 : 0;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(v3, 0, (int)Delim);
    return 0;
  }
}
