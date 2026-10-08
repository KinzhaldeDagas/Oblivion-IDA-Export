unsigned int __thiscall Setting_GetValueSize_(int this)
{
  _BYTE *v1; // edx
  int v2; // esi
  unsigned int result; // eax

  v1 = *(_BYTE **)(this + 4); /*0x4a7a80*/
  v2 = 0; /*0x4a7a84*/
  if ( !v1 ) /*0x4a7a88*/
    return v2; /*0x4a7ace*/
  switch ( *v1 ) /*0x4a7a9c*/
  {
    case 'S': /*0x4a7a9c*/
    case 's': /*0x4a7a9c*/
      if ( *(_DWORD *)this ) /*0x4a7ab5*/
        return strlen(*(const char **)this) + 1; /*0x4a7acb*/
      return v2; /*0x4a7acb*/
    case 'a': /*0x4a7a9c*/
    case 'f': /*0x4a7a9c*/
    case 'i': /*0x4a7a9c*/
    case 'r': /*0x4a7a9c*/
    case 'u': /*0x4a7a9c*/
      result = 4; /*0x4a7ab1*/
      break; /*0x4a7ab4*/
    case 'b': /*0x4a7a9c*/
    case 'c': /*0x4a7a9c*/
    case 'h': /*0x4a7a9c*/
      result = 1; /*0x4a7aa8*/
      break; /*0x4a7aab*/
    default:
      return v2;
  }
  return result; /*0x4a7aaa*/
}
