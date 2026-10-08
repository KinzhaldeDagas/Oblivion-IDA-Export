int __cdecl sub_917990(int a1)
{
  int result; // eax

  result = a1; /*0x917990*/
  if ( a1 ) /*0x917996*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x917998*/
    *(_DWORD *)a1 = &off_A9D0E8; /*0x91799e*/
  }
  return result; /*0x9179a4*/
}
