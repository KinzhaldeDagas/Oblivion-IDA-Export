int __cdecl sub_8A7260(int a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // ecx

  if ( a1 ) /*0x8a7268*/
    ++*(_DWORD *)(a1 + 0x14); /*0x8a726a*/
  result = MEMORY[0xBA9DE4]; /*0x8a7274*/
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8a7279*/
  v3 = *(_DWORD **)(v2 + 0x19C); /*0x8a727c*/
  if ( v3 ) /*0x8a7284*/
  {
    if ( v3[5]-- == 1 ) /*0x8a7286*/
      result = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 8))(v3, 1); /*0x8a728f*/
  }
  *(_DWORD *)(v2 + 0x19C) = a1; /*0x8a7292*/
  return result; /*0x8a7298*/
}
