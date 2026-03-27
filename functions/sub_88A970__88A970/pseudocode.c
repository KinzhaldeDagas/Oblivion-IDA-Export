int __cdecl sub_88A970(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1;
  v2 = *(_DWORD *)(a1 + 0x10);
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x60))(v2);
  return result;
}
