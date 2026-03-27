int __thiscall sub_89F9A0(void *this, signed int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x74))(this, &v10);
  v4 = *(_DWORD *)(v3 + 0x14);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, *(_DWORD **)(v3 + 0xC), 8 * v4, 0x14);
  }
  v6 = *(_DWORD *)(v3 + 0x14) & 0x40000000 | 0x80000000;
  *(_DWORD *)(v3 + 0xC) = 0;
  *(_DWORD *)(v3 + 0x10) = 0;
  *(_DWORD *)(v3 + 0x14) = v6;
  if ( v3 && (v7 = *(_DWORD *)(v3 + 4)) != 0 )
    v8 = *(_DWORD *)(v7 + 8);
  else
    v8 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v8);
  sub_89D7B0(this, a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x64))(this, v10);
}
