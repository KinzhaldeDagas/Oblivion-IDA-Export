int __cdecl sub_6BEC20(int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6bec27*/
  {
    result = sub_6BEAD0(a1, a2); /*0x6bec35*/
    a2 += 0x48; /*0x6bec3d*/
  }
  return result; /*0x6bec47*/
}
