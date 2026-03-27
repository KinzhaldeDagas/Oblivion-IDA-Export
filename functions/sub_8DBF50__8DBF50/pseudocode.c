int __cdecl sub_8DBF50(int a1)
{
  int i; // esi
  int result; // eax
  int v3; // ecx

  for ( i = *(_DWORD *)(a1 + 0xB0) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(a1 + 0xAC);
    v3 = *(_DWORD *)(result + 4 * i);
    if ( v3 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, a1);
  }
  return result;
}
