_BYTE *__thiscall sub_529BB0(char *this, char a2)
{
  char *v2; // ecx
  _BYTE *result; // eax

  v2 = this + 0x40; /*0x529bb0*/
  if ( !v2 ) /*0x529bb3*/
    return 0; /*0x529bd1*/
  while ( 1 ) /*0x529bc0*/
  {
    result = *(_BYTE **)v2; /*0x529bc0*/
    if ( *(_DWORD *)v2 ) /*0x529bc0*/
    {
      if ( *result == a2 ) /*0x529bc8*/
        break; /*0x529bc8*/
    }
    v2 = *((char **)v2 + 1); /*0x529bca*/
    if ( !v2 ) /*0x529bcf*/
      return 0; /*0x529bcf*/
  }
  return result; /*0x529bd3*/
}
