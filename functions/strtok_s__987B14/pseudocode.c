char *__cdecl strtok_s(char *Str, const char *Delim, char **Context)
{
  int v3; // ebx
  const char *v4; // esi
  char v6; // dl
  char *v7; // edx
  char *v8; // ebx
  _BYTE v9[32]; // [esp+10h] [ebp-24h] BYREF

  v4 = Delim; /*0x987b2b*/
  if ( Context && Delim && (Str || *Context) )
  {
    memset(v9, 0, sizeof(v9)); /*0x987b70*/
    do /*0x987b8d*/
    {
      v6 = *v4; /*0x987b74*/
      v9[*(unsigned __int8 *)v4 >> 3] |= 1 << (*v4 & 7); /*0x987b88*/
      ++v4; /*0x987b8a*/
    }
    while ( v6 ); /*0x987b8d*/
    v7 = Str; /*0x987b8f*/
    if ( !Str ) /*0x987b94*/
      v7 = *Context; /*0x987b99*/
    while ( ((unsigned __int8)(1 << (*v7 & 7)) & v9[(unsigned __int8)*v7 >> 3]) != 0 && *v7 ) /*0x987b9f*/
      ++v7; /*0x987ba1*/
    v8 = v7; /*0x987bbb*/
    while ( *v7 ) /*0x987bda*/
    {
      if ( ((unsigned __int8)(1 << (*v7 & 7)) & v9[(unsigned __int8)*v7 >> 3]) != 0 ) /*0x987bd4*/
      {
        *v7++ = 0; /*0x987bde*/
        break; /*0x987be1*/
      }
      ++v7; /*0x987bd6*/
    }
    *Context = v7; /*0x987be2*/
    return v7 != v8 ? v8 : 0;
  }
  else
  {
    *_errno() = 0x16; /*0x987b45*/
    _invalid_parameter(v3, 0, (int)Delim); /*0x987b4b*/
    return 0; /*0x987b53*/
  }
}
