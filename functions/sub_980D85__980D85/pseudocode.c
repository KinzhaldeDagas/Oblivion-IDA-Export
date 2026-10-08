int __cdecl sub_980D85(int a1)
{
  int result; // eax

  if ( !dword_B30A4C ) /*0x980d85*/
    abort(); /*0x980d8e*/
  result = dword_B30A4C - 1; /*0x980d97*/
  dword_B30A4C = result; /*0x980d98*/
  *(_DWORD *)(4 * result + 0xBA9C6C) = a1; /*0x980d9d*/
  return result; /*0x980da4*/
}
