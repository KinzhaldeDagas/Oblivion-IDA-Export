int __cdecl sub_6BF7F0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6bf7f7*/
  {
    result = sub_6BC1E0(a1, a2); /*0x6bf805*/
    a2 += 0x10; /*0x6bf80d*/
  }
  return result; /*0x6bf817*/
}
