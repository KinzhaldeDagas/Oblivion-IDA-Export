int __cdecl sub_8DBEF0(int a1)
{
  int i; // esi
  int result; // eax
  int v3; // ecx

  for ( i = *(_DWORD *)(a1 + 0xB0) - 1; i >= 0; --i ) /*0x8dbefd*/
  {
    result = *(_DWORD *)(a1 + 0xAC); /*0x8dbf00*/
    v3 = *(_DWORD *)(result + 4 * i); /*0x8dbf06*/
    if ( v3 ) /*0x8dbf0b*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a1); /*0x8dbf10*/
  }
  return result; /*0x8dbf16*/
}
