int __cdecl sub_88A990(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = a1; /*0x88a990*/
  v3 = *(_DWORD **)(a1 + 0x10); /*0x88a994*/
  if ( v3 ) /*0x88a999*/
    return sub_89F520(v3, *(_DWORD *)(a2 + 0xC) != 0); /*0x88a9a7*/
  return result; /*0x88a9ac*/
}
