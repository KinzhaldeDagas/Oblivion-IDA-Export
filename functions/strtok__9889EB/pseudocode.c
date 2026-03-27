char *__cdecl strtok(char *Str, const char *Delim)
{
  char v3; // dl
  char *v4; // edx
  char *v5; // ebx
  int v7; // [esp+10h] [ebp-28h]
  _BYTE v8[32]; // [esp+14h] [ebp-24h] BYREF

  v7 = _getptd();
  memset(v8, 0, sizeof(v8));
  do
  {
    v3 = *Delim;
    v8[*(unsigned __int8 *)Delim >> 3] |= 1 << (*Delim & 7);
    ++Delim;
  }
  while ( v3 );
  v4 = Str;
  if ( !Str )
    v4 = *(char **)(v7 + 0x18);
  while ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 && *v4 )
    ++v4;
  v5 = v4;
  while ( *v4 )
  {
    if ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 )
    {
      *v4++ = 0;
      break;
    }
    ++v4;
  }
  *(_DWORD *)(v7 + 0x18) = v4;
  return v4 != v5 ? v5 : 0;
}
