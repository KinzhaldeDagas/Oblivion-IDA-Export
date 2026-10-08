int __cdecl sub_88A970(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x88a970*/
  v2 = *(_DWORD *)(a1 + 0x10); /*0x88a974*/
  if ( v2 ) /*0x88a979*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x60))(v2); /*0x88a980*/
  return result; /*0x88a982*/
}
