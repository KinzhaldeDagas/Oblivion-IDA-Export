int __thiscall sub_8DBBE0(_DWORD *this, const void **a2)
{
  int result; // eax
  int i; // edi

  result = *(this + 1); /*0x8dbbe3*/
  for ( i = 0; i < result; ++i ) /*0x8dbbeb*/
  {
    if ( *(_BYTE *)(i + *this) != 0xFF ) /*0x8dbbf8*/
    {
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8dbc08*/
        sub_8A6EE0(a2, 2); /*0x8dbc0d*/
      *((_WORD *)*a2 + (_DWORD)a2[1]) = i; /*0x8dbc1a*/
      a2[1] = (char *)a2[1] + 1; /*0x8dbc1e*/
    }
    result = *(this + 1); /*0x8dbc21*/
  }
  return result; /*0x8dbc2a*/
}
