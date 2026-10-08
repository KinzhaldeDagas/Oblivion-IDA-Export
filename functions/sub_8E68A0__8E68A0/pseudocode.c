int __cdecl sub_8E68A0(int a1, const void *a2)
{
  signed int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // esi
  unsigned __int16 v6; // ax
  unsigned int v8; // [esp-4h] [ebp-Ch]

  v2 = *(unsigned __int16 *)(a1 + 0x16); /*0x8e68a6*/
  if ( *(_DWORD *)(a1 + 0x10) == v2 ) /*0x8e68ad*/
  {
    v3 = sub_8A7560( /*0x8e68d0*/
           *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
           v2,
           0x24);
    if ( *(_DWORD *)(a1 + 4) == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) ) /*0x8e68dd*/
      sub_8A6EE0((const void **)a1, 4); /*0x8e68e2*/
    *(_DWORD *)(*(_DWORD *)a1 + 4 * (*(_DWORD *)(a1 + 4))++) = v3; /*0x8e68ef*/
    *(_DWORD *)(a1 + 0x10) = 0; /*0x8e68f5*/
  }
  v4 = *(_DWORD *)(a1 + 0x10); /*0x8e6905*/
  v5 = v4 + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4); /*0x8e690c*/
  v8 = *(unsigned __int16 *)(a1 + 0x14); /*0x8e6915*/
  *(_DWORD *)(a1 + 0x10) = v8 + v4; /*0x8e6918*/
  sub_8B1890((void *)v5, a2, v8); /*0x8e691b*/
  v6 = *(_WORD *)(v5 + 0xE); /*0x8e6927*/
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x14) + 0x24) + 8 * *(unsigned __int16 *)(v5 + 0xC)) = v5; /*0x8e692e*/
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x18) + 0x24) + 8 * v6) = v5; /*0x8e693d*/
  return v5; /*0x8e6940*/
}
