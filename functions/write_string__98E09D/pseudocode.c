int *__usercall write_string@<eax>(int *result@<eax>, int a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result;
  if ( (*(_BYTE *)(a3 + 0xC) & 0x40) == 0 || *(_DWORD *)(a3 + 8) )
  {
    while ( a4 > 0 )
    {
      --a4;
      result = (int *)write_char((FILE *)a3);
      ++a2;
      if ( *v4 == 0xFFFFFFFF )
      {
        result = _errno();
        if ( *result != 0x2A )
          return result;
        result = (int *)write_char((FILE *)a3);
      }
    }
  }
  else
  {
    *v4 += a4;
    return (int *)a4;
  }
  return result;
}
