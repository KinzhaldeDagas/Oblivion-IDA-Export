int __thiscall sub_94DE80(__m128 *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int i; // eax
  int v9; // ecx
  int result; // eax
  int v11; // ecx
  _DWORD *v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v12[0] = 0; /*0x94de90*/
  v12[1] = 0; /*0x94de94*/
  v13 = 0x80000000; /*0x94de98*/
  sub_94DB40(this, (int)v12); /*0x94dea0*/
  v3 = 4 * *((_DWORD *)this + 0x20); /*0x94deb2*/
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x94deb5*/
  if ( v4 < v3 ) /*0x94debc*/
  {
    v5 = 2 * v4; /*0x94debe*/
    if ( v3 >= v5 ) /*0x94dec2*/
      v5 = 4 * *((_DWORD *)this + 0x20); /*0x94dec4*/
    sub_8A6E40((const void **)a2, v5, 0x10); /*0x94deca*/
  }
  *(_DWORD *)(a2 + 4) = v3; /*0x94ded2*/
  v6 = 0; /*0x94dedb*/
  if ( *((int *)this + 0x20) > 0 ) /*0x94dedf*/
  {
    v7 = 0; /*0x94dee1*/
    for ( i = 0; ; i += 4 ) /*0x94dee3*/
    {
      *(__m128 *)(*(_DWORD *)a2 + v7) = *(this + 6); /*0x94def6*/
      *(_OWORD *)(*(_DWORD *)a2 + v7 + 0x10) = *(_OWORD *)&v12[0][i]; /*0x94df04*/
      v9 = v7 + 0x10; /*0x94df13*/
      *(_OWORD *)(*(_DWORD *)a2 + v9 + 0x10) = *(_OWORD *)&v12[0][i]; /*0x94df19*/
      ++v6; /*0x94df25*/
      v7 = v9 + 0x30; /*0x94df38*/
      *(_OWORD *)(*(_DWORD *)a2 + v7 - 0x10) = *(_OWORD *)&v12[0][4 * (v6 % *((_DWORD *)this + 0x20))]; /*0x94df42*/
      if ( v6 >= *((_DWORD *)this + 0x20) ) /*0x94df4d*/
        break; /*0x94df4d*/
    }
  }
  result = v13; /*0x94df4f*/
  if ( v13 >= 0 ) /*0x94df59*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94df6b*/
    if ( !v11 ) /*0x94df73*/
      v11 = unk_BA7D9C; /*0x94df75*/
    return sub_8A75D0(v11, v12[0], 0x10 * v13, 0x14); /*0x94df8a*/
  }
  return result; /*0x94df55*/
}
