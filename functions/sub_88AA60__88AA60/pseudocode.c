int __cdecl sub_88AA60(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = a1;
  v3 = *(_DWORD **)(a1 + 0x10);
  if ( v3 )
    return sub_89F4D0(v3, *(_DWORD *)(a2 + 0xC));
  return result;
}
