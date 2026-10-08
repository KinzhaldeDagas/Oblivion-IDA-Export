int __cdecl sub_897A90(int a1, char a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = sub_4A05E0(a1); /*0x897a95*/
  if ( result ) /*0x897a9f*/
  {
    v3 = *(_DWORD **)(result + 0x10); /*0x897aa1*/
    if ( v3 ) /*0x897aa6*/
      return sub_89F520(v3, a2); /*0x897aad*/
  }
  return result; /*0x897ab2*/
}
