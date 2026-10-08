char *__cdecl strtok(char *Str, const char *Delim)
{
  char v3; // dl
  char *v4; // edx
  char *v5; // ebx
  DWORD *v7; // [esp+10h] [ebp-28h]
  _BYTE v8[32]; // [esp+14h] [ebp-24h] BYREF

  v7 = _getptd(); /*0x988a0f*/
  memset(v8, 0, sizeof(v8)); /*0x988a19*/
  do /*0x988a35*/
  {
    v3 = *Delim; /*0x988a1c*/
    v8[*(unsigned __int8 *)Delim >> 3] |= 1 << (*Delim & 7); /*0x988a30*/
    ++Delim; /*0x988a32*/
  }
  while ( v3 ); /*0x988a35*/
  v4 = Str; /*0x988a37*/
  if ( !Str ) /*0x988a3c*/
    v4 = (char *)v7[6]; /*0x988a41*/
  while ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 && *v4 ) /*0x988a48*/
    ++v4; /*0x988a4a*/
  v5 = v4; /*0x988a64*/
  while ( *v4 ) /*0x988a83*/
  {
    if ( ((unsigned __int8)(1 << (*v4 & 7)) & v8[(unsigned __int8)*v4 >> 3]) != 0 ) /*0x988a7d*/
    {
      *v4++ = 0; /*0x988a87*/
      break; /*0x988a8a*/
    }
    ++v4; /*0x988a7f*/
  }
  v7[6] = (DWORD)v4; /*0x988a8b*/
  return v4 != v5 ? v5 : 0;
}
