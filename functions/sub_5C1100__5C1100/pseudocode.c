int sub_5C1100()
{
  int result; // eax
  int v1; // edx
  int v2; // edi
  int v3; // esi

  result = dword_B3B430[0];
  if ( dword_B3B430[0] == 0xFFFFFFFF )
  {
    v1 = dword_B394C8;
    v2 = dword_B3B428;
    if ( dword_B3B434 < 0 || v2 <= v1 )
    {
      result = dword_B3B438;
      v3 = dword_B3B42C;
      if ( dword_B3B438 < 0 || v3 <= v1 )
      {
        if ( dword_B3B434 < 0 )
        {
          return 0xFFFFFFFF;
        }
        else if ( result < 0 || v3 <= (unsigned int)v2 )
        {
          return dword_B3B434;
        }
      }
    }
    else
    {
      return dword_B3B434;
    }
  }
  return result;
}
