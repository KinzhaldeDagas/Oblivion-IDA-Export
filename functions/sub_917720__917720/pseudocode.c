__m128 *__thiscall sub_917720(__m128 *this, char *a2, signed int a3, int a4, _DWORD *a5, __int32 a6)
{
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  _OWORD *v11; // eax
  int v12; // edx

  this->m128_i32[3] = a6; /*0x917730*/
  this->m128_i16[3] = 1; /*0x917733*/
  this->m128_i32[2] = 0; /*0x917739*/
  this->m128_i32[0] = (__int32)&off_A9D068; /*0x91773c*/
  *((_QWORD *)this + 6) = 0; /*0x917742*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x917748*/
  *((_QWORD *)this + 8) = 0; /*0x917754*/
  *((_DWORD *)this + 0x12) = 0x80000000; /*0x91775a*/
  if ( (int)a5[1] > 0 ) /*0x917767*/
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x9177a6*/
    if ( !v7 ) /*0x9177ae*/
      v7 = unk_BA7D9C; /*0x9177b0*/
    v8 = sub_8A7560(v7, 0x10 * a5[1], 0x14); /*0x9177c0*/
    v9 = *((_DWORD *)this + 0x12); /*0x9177c5*/
    *((_DWORD *)this + 0x10) = v8; /*0x9177c8*/
    *((_DWORD *)this + 0x12) = a5[1] | v9 & 0x40000000; /*0x9177d6*/
  }
  v10 = a5[1]; /*0x9177d9*/
  v11 = *((_OWORD **)this + 0x10); /*0x9177de*/
  *((_DWORD *)this + 0x11) = v10; /*0x9177e1*/
  if ( v10 > 0 ) /*0x9177e6*/
  {
    v12 = *a5 - (_DWORD)v11; /*0x9177e8*/
    do /*0x9177fb*/
    {
      *v11 = *(_OWORD *)((char *)v11 + v12); /*0x9177f4*/
      ++v11; /*0x9177f7*/
      --v10; /*0x9177fa*/
    }
    while ( v10 ); /*0x9177fb*/
  }
  sub_917290(this, a2, a4, a3); /*0x91780e*/
  return this; /*0x917813*/
}
