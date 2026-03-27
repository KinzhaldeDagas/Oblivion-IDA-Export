_BYTE *__thiscall sub_529BB0(char *this, char a2)
{
  char *v2; // ecx
  _BYTE *result; // eax

  v2 = this + 0x40;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    result = *(_BYTE **)v2;
    if ( *(_DWORD *)v2 )
    {
      if ( *result == a2 )
        break;
    }
    v2 = *((char **)v2 + 1);
    if ( !v2 )
      return 0;
  }
  return result;
}
