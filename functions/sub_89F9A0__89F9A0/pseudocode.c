int __thiscall sub_89F9A0(void *this, signed int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x74))(this, &v10); /*0x89f9b3*/
  v4 = *(_DWORD *)(v3 + 0x14); /*0x89f9b5*/
  if ( v4 >= 0 ) /*0x89f9ba*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89f9cc*/
    if ( !v5 ) /*0x89f9d4*/
      v5 = unk_BA7D9C; /*0x89f9d6*/
    sub_8A75D0(v5, *(_DWORD **)(v3 + 0xC), 8 * v4, 0x14); /*0x89f9ee*/
  }
  v6 = *(_DWORD *)(v3 + 0x14) & 0x40000000 | 0x80000000; /*0x89f9fb*/
  *(_DWORD *)(v3 + 0xC) = 0; /*0x89fa02*/
  *(_DWORD *)(v3 + 0x10) = 0; /*0x89fa09*/
  *(_DWORD *)(v3 + 0x14) = v6; /*0x89fa10*/
  if ( v3 && (v7 = *(_DWORD *)(v3 + 4)) != 0 ) /*0x89fa1a*/
    v8 = *(_DWORD *)(v7 + 8); /*0x89fa1c*/
  else
    v8 = 0; /*0x89fa21*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v8); /*0x89fa2f*/
  sub_89D7B0(this, a2); /*0x89fa34*/
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x64))(this, v10); /*0x89fa47*/
}
