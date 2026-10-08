int __cdecl sub_8E77C0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // esi

  result = *(_DWORD *)(a1 + 0x3C); /*0x8e77c6*/
  for ( i = 0; i < result; ++i ) /*0x8e77cd*/
  {
    sub_8E65B0(*(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 8 * i), a2); /*0x8e77dc*/
    result = *(_DWORD *)(a1 + 0x3C); /*0x8e77e1*/
  }
  return result; /*0x8e77ed*/
}
