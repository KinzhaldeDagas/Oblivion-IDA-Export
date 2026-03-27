int __cdecl sub_8E68A0(int a1, const void *a2)
{
  signed int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // esi
  unsigned __int16 v6; // ax
  unsigned int v8; // [esp-4h] [ebp-Ch]

  v2 = *(unsigned __int16 *)(a1 + 0x16);
  if ( *(_DWORD *)(a1 + 0x10) == v2 )
  {
    v3 = sub_8A7560(*(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C), v2, 0x24);
    if ( *(_DWORD *)(a1 + 4) == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)a1, 4);
    *(_DWORD *)(*(_DWORD *)a1 + 4 * (*(_DWORD *)(a1 + 4))++) = v3;
    *(_DWORD *)(a1 + 0x10) = 0;
  }
  v4 = *(_DWORD *)(a1 + 0x10);
  v5 = v4 + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4);
  v8 = *(unsigned __int16 *)(a1 + 0x14);
  *(_DWORD *)(a1 + 0x10) = v8 + v4;
  sub_8B1890((void *)v5, a2, v8);
  v6 = *(_WORD *)(v5 + 0xE);
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x14) + 0x24) + 8 * *(unsigned __int16 *)(v5 + 0xC)) = v5;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 0x18) + 0x24) + 8 * v6) = v5;
  return v5;
}
