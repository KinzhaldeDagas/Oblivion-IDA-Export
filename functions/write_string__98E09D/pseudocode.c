int *__usercall write_string@<eax>(int *result@<eax>, _BYTE *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result; /*0x98e0a3*/
  if ( (*(_BYTE *)(a3 + 0xC) & 0x40) == 0 || *(_DWORD *)(a3 + 8) ) /*0x98e0a9*/
  {
    while ( a4 > 0 ) /*0x98e0e2*/
    {
      LOBYTE(result) = *a2; /*0x98e0b7*/
      --a4; /*0x98e0b9*/
      result = (int *)write_char((FILE *)a3, (int)result, v4); /*0x98e0bf*/
      ++a2; /*0x98e0c4*/
      if ( *v4 == 0xFFFFFFFF ) /*0x98e0c8*/
      {
        result = _errno(); /*0x98e0ca*/
        if ( *result != 0x2A ) /*0x98e0d2*/
          return result; /*0x98e0d2*/
        LOBYTE(result) = 0x3F; /*0x98e0d6*/
        result = (int *)write_char((FILE *)a3, (int)result, v4); /*0x98e0d8*/
      }
    }
  }
  else
  {
    *result += a4; /*0x98e0b3*/
    return (int *)a4; /*0x98e0af*/
  }
  return result; /*0x98e0e4*/
}
