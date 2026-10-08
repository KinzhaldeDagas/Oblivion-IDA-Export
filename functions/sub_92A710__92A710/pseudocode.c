int __cdecl sub_92A710(int a1)
{
  int result; // eax

  result = a1; /*0x92a710*/
  if ( a1 ) /*0x92a716*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x92a718*/
    *(_DWORD *)a1 = &off_AA1B38; /*0x92a71e*/
  }
  return result; /*0x92a724*/
}
