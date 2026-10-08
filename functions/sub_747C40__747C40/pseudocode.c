int __cdecl sub_747C40(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = unk_B403B8; /*0x747c40*/
  *(_DWORD *)(4 * v2 + 0xB40378) = a1; /*0x747c4d*/
  *(_DWORD *)(4 * v2 + 0xB40338) = a2; /*0x747c54*/
  result = v2 + 1; /*0x747c5b*/
  unk_B403B8 = result; /*0x747c5e*/
  return result; /*0x747c63*/
}
