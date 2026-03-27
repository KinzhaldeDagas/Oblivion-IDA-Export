CHAR *_wincmdln()
{
  BOOL v0; // edi
  CHAR *v1; // esi
  unsigned __int8 v2; // al

  v0 = 0;
  if ( !dword_BABC14 )
    __initmbctable();
  v1 = (CHAR *)dword_BABC04;
  if ( !dword_BABC04 )
    v1 = EmptyString;
  while ( 1 )
  {
    v2 = *v1;
    if ( (unsigned __int8)*v1 <= 0x20u )
    {
      if ( !v2 )
        return v1;
      if ( !v0 )
        break;
    }
    if ( v2 == 0x22 )
      v0 = !v0;
    if ( _ismbblead(v2) )
      ++v1;
    ++v1;
  }
  while ( *v1 && (unsigned __int8)*v1 <= 0x20u )
    ++v1;
  return v1;
}
