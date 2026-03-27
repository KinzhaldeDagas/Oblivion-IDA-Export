// positive sp value has been detected, the output may be wrong!
int __usercall strchr_::chr_is_found@<eax>(_DWORD *a1@<edx>, int a2@<ecx>, char a3@<bl>)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = a1[0xFFFFFFFF];
  if ( (_BYTE)v3 == a3 )
    return (int)(a1 + 0xFFFFFFFF);
  if ( (_BYTE)v3 )
  {
    if ( BYTE1(v3) == a3 )
      return (int)a1 + 0xFFFFFFFD;
    if ( BYTE1(v3) )
    {
      v4 = HIWORD(v3);
      if ( (_BYTE)v4 == a3 )
        return (int)a1 + 0xFFFFFFFE;
      if ( (_BYTE)v4 )
      {
        if ( BYTE1(v4) == a3 )
          return (int)a1 + 0xFFFFFFFF;
        if ( BYTE1(v4) )
          return strchr_::main_loop_0(a1, a3);
      }
    }
  }
  return strchr_::retnull(a2, (int)a1);
}
