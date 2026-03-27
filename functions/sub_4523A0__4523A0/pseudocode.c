double __userpurge sub_4523A0@<st0>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double result@<st0>,
        int a5,
        float a6)
{
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetTickCount)(result, st6_0) > (unsigned int)(dword_B33B08 + 0xBB8) )
  {
    if ( sub_57BAC0(a1, st5_0, st6_0, result) )
    {
      sub_57B950(a1, st5_0, st6_0, a6, a5, a6);
      return a6;
    }
    else
    {
      sub_440AF0((int)TES, st5_0, st6_0, a1, 1, 0, 0);
    }
  }
  return result;
}
