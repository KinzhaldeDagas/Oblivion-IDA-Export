const void *__cdecl sub_8A6F90(const void **a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  const void *result; // eax

  v4 = a3; /*0x8a6f91*/
  if ( a3 && (v5 = a4, (int)a1[1] < a4) ) /*0x8a6fa7*/
  {
    v6 = 0x80000000; /*0x8a6fa9*/
  }
  else
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a6fc2*/
    v5 = ((int)a1[2] >> 1) & 0x1FFFFFFF; /*0x8a6fca*/
    if ( !v7 ) /*0x8a6fd2*/
      v7 = unk_BA7D9C; /*0x8a6fd4*/
    v4 = sub_8A7560(v7, a2 * v5, 0x14); /*0x8a6fea*/
    v6 = 0; /*0x8a6fec*/
  }
  sub_8B1890(v4, *a1, a2 * (_DWORD)a1[1]); /*0x8a6ffb*/
  v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a7010*/
  if ( !v8 ) /*0x8a701b*/
    v8 = unk_BA7D9C; /*0x8a701d*/
  sub_8A75D0(v8, *a1, a2 * ((unsigned int)a1[2] & 0x3FFFFFFF), 0x14); /*0x8a7038*/
  result = (const void *)(v5 | v6 | (unsigned int)a1[2] & 0x40000000); /*0x8a7047*/
  *a1 = v4; /*0x8a704a*/
  a1[2] = result; /*0x8a704c*/
  return result; /*0x8a7049*/
}
