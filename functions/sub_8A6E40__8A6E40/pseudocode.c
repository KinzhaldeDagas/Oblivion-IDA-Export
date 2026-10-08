int __cdecl sub_8A6E40(const void **a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ebx
  int result; // eax
  int v7; // ecx
  const void *v8; // ecx
  int v9; // [esp+0h] [ebp-4h]

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8a6e4d*/
  v4 = *(_DWORD *)(v3 + 0x19C); /*0x8a6e50*/
  v9 = v3; /*0x8a6e58*/
  if ( !v4 ) /*0x8a6e5b*/
    v4 = unk_BA7D9C; /*0x8a6e5d*/
  v5 = sub_8A7560(v4, a3 * a2, 0x14); /*0x8a6e82*/
  sub_8B1890(v5, *a1, a3 * (_DWORD)a1[1]); /*0x8a6e8d*/
  result = (int)a1[2]; /*0x8a6e92*/
  if ( result >= 0 ) /*0x8a6e9a*/
  {
    v7 = *(_DWORD *)(v9 + 0x19C); /*0x8a6ea0*/
    if ( !v7 ) /*0x8a6ea8*/
      v7 = unk_BA7D9C; /*0x8a6eaa*/
    result = sub_8A75D0(v7, *a1, a3 * (result & 0x3FFFFFFF), 0x14); /*0x8a6ebe*/
  }
  v8 = (const void *)(a2 | (unsigned int)a1[2] & 0x40000000); /*0x8a6ecc*/
  *a1 = v5; /*0x8a6ecf*/
  a1[2] = v8; /*0x8a6ed1*/
  return result; /*0x8a6ed8*/
}
