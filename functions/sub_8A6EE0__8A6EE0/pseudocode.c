int __cdecl sub_8A6EE0(const void **a1, int a2)
{
  const void *v3; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ebx
  int result; // eax
  int v9; // ecx
  const void *v10; // ecx
  int v11; // [esp+14h] [ebp+4h]

  v3 = a1[1]; /*0x8a6ee7*/
  v4 = 2 * (_DWORD)v3; /*0x8a6eed*/
  if ( !v3 ) /*0x8a6ef0*/
    v4 = 1; /*0x8a6ef2*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8a6f03*/
  v6 = *(_DWORD *)(v5 + 0x19C); /*0x8a6f06*/
  v11 = v5; /*0x8a6f0e*/
  if ( !v6 ) /*0x8a6f12*/
    v6 = unk_BA7D9C; /*0x8a6f14*/
  v7 = sub_8A7560(v6, a2 * v4, 0x14); /*0x8a6f2d*/
  sub_8B1890(v7, *a1, a2 * (_DWORD)a1[1]); /*0x8a6f38*/
  result = (int)a1[2]; /*0x8a6f3d*/
  if ( result >= 0 ) /*0x8a6f45*/
  {
    v9 = *(_DWORD *)(v11 + 0x19C); /*0x8a6f4b*/
    if ( !v9 ) /*0x8a6f53*/
      v9 = unk_BA7D9C; /*0x8a6f55*/
    result = sub_8A75D0(v9, *a1, a2 * (result & 0x3FFFFFFF), 0x14); /*0x8a6f69*/
  }
  v10 = (const void *)(v4 | (unsigned int)a1[2] & 0x40000000); /*0x8a6f77*/
  *a1 = v7; /*0x8a6f7a*/
  a1[2] = v10; /*0x8a6f7c*/
  return result; /*0x8a6f79*/
}
