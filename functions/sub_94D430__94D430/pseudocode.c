int __thiscall sub_94D430(__m128 *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int result; // eax
  int v11; // ecx
  const void *v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v12[0] = 0; /*0x94d440*/
  v12[1] = 0; /*0x94d444*/
  v13 = 0x80000000; /*0x94d448*/
  sub_94D2E0(this, v12); /*0x94d450*/
  v3 = 2 * *((_DWORD *)this + 0x27); /*0x94d462*/
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x94d464*/
  if ( v4 < v3 ) /*0x94d46b*/
  {
    v5 = 2 * v4; /*0x94d46d*/
    if ( v3 >= v5 ) /*0x94d471*/
      v5 = 2 * *((_DWORD *)this + 0x27); /*0x94d473*/
    sub_8A6E40((const void **)a2, v5, 0x10); /*0x94d479*/
  }
  *(_DWORD *)(a2 + 4) = v3; /*0x94d481*/
  v6 = 0; /*0x94d48a*/
  if ( *((int *)this + 0x27) > 0 ) /*0x94d48e*/
  {
    v7 = 0; /*0x94d490*/
    v8 = 0; /*0x94d492*/
    do /*0x94d4c3*/
    {
      *(_OWORD *)(*(_DWORD *)a2 + v7) = *(_OWORD *)((char *)v12[0] + v8); /*0x94d49e*/
      v9 = v7 + 0x10; /*0x94d4ad*/
      *(_OWORD *)(*(_DWORD *)a2 + v9) = *(_OWORD *)((char *)v12[0] + v8 + 0x10); /*0x94d4b0*/
      v7 = v9 + 0x10; /*0x94d4ba*/
      ++v6; /*0x94d4bd*/
      v8 += 0x10; /*0x94d4be*/
    }
    while ( v6 < *((_DWORD *)this + 0x27) ); /*0x94d4c3*/
  }
  result = v13; /*0x94d4c5*/
  if ( v13 >= 0 ) /*0x94d4cf*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94d4e1*/
    if ( !v11 ) /*0x94d4e9*/
      v11 = unk_BA7D9C; /*0x94d4eb*/
    return sub_8A75D0(v11, (_DWORD *)v12[0], 0x10 * v13, 0x14); /*0x94d500*/
  }
  return result; /*0x94d4cb*/
}
