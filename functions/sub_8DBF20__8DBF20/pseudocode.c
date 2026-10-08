int __cdecl sub_8DBF20(int a1)
{
  int i; // esi
  int result; // eax
  int v3; // ecx

  for ( i = *(_DWORD *)(a1 + 0xB0) - 1; i >= 0; --i ) /*0x8dbf2d*/
  {
    result = *(_DWORD *)(a1 + 0xAC); /*0x8dbf30*/
    v3 = *(_DWORD *)(result + 4 * i); /*0x8dbf36*/
    if ( v3 ) /*0x8dbf3b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xC))(v3, a1); /*0x8dbf40*/
  }
  return result; /*0x8dbf46*/
}
