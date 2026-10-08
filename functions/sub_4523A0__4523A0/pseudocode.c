double __userpurge sub_4523A0@<st0>(
        char a1@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double result@<st0>,
        int a5,
        float a6)
{
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetTickCount)(result, st6_0) > (unsigned int)(unk_B33B08 + 0xBB8) ) /*0x4523b4*/
  {
    if ( sub_57BAC0() ) /*0x4523b6*/
    {
      sub_57B950(a1, st5_0, st6_0, a5, a6); /*0x4523e0*/
      return a6; /*0x4523d3*/
    }
    else
    {
      sub_440AF0((int)MEMORY[0xB333A0], st5_0, st6_0, result, 1, 0, 0); /*0x4523cb*/
    }
  }
  return result; /*0x4523d0*/
}
