__m128 *__thiscall sub_917720(__m128 *this, char *a2, signed int a3, int a4, _DWORD *a5, __int32 a6)
{
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  _OWORD *v11; // eax
  int v12; // edx

  this->m128_i32[3] = a6;
  this->m128_i16[3] = 1;
  this->m128_i32[2] = 0;
  this->m128_i32[0] = (__int32)&off_A9D068;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  *((_QWORD *)this + 8) = 0;
  *((_DWORD *)this + 0x12) = 0x80000000;
  if ( (int)a5[1] > 0 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    v8 = sub_8A7560(v7, 0x10 * a5[1], 0x14);
    v9 = *((_DWORD *)this + 0x12);
    *((_DWORD *)this + 0x10) = v8;
    *((_DWORD *)this + 0x12) = a5[1] | v9 & 0x40000000;
  }
  v10 = a5[1];
  v11 = *((_OWORD **)this + 0x10);
  *((_DWORD *)this + 0x11) = v10;
  if ( v10 > 0 )
  {
    v12 = *a5 - (_DWORD)v11;
    do
    {
      *v11 = *(_OWORD *)((char *)v11 + v12);
      ++v11;
      --v10;
    }
    while ( v10 );
  }
  sub_917290(this, a2, a4, a3);
  return this;
}
