int __cdecl sub_8E77C0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // esi

  result = *(_DWORD *)(a1 + 0x3C);
  for ( i = 0; i < result; ++i )
  {
    sub_8E65B0(*(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 8 * i), a2);
    result = *(_DWORD *)(a1 + 0x3C);
  }
  return result;
}
