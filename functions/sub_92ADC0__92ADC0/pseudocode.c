int __thiscall sub_92ADC0(void *this, int a2, int a3, __m128 *a4)
{
  int result; // eax
  int i; // ebx
  int v7; // eax
  __m128 v8; // xmm0
  char v9[20]; // [esp+10h] [ebp-234h] BYREF
  __m128 v10; // [esp+24h] [ebp-220h]
  _BYTE v11[524]; // [esp+34h] [ebp-210h] BYREF

  a4->m128_i32[0] = 0x7F7FFFFF; /*0x92ade2*/
  a4->m128_i32[1] = 0x7F7FFFFF; /*0x92ade4*/
  a4->m128_i32[2] = 0x7F7FFFFF; /*0x92ade7*/
  a4->m128_i32[3] = 0; /*0x92adef*/
  a4[1].m128_i32[0] = 0xFF7FFFFF; /*0x92adf7*/
  a4[1].m128_i32[1] = 0xFF7FFFFF; /*0x92adfa*/
  a4[1].m128_u64[1] = 0xFF7FFFFFLL; /*0x92adfd*/
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x92ae07*/
  for ( i = result; result != 0xFFFFFFFF; i = result ) /*0x92ae0f*/
  {
    v7 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, i, v11); /*0x92ae1b*/
    (*(void (__thiscall **)(int, int, int, char *))(*(_DWORD *)v7 + 0xC))(v7, a2, a3, &v9[4]); /*0x92ae2f*/
    v8 = v10; /*0x92ae3d*/
    *a4 = _mm_min_ps(*a4, *(__m128 *)&v9[4]); /*0x92ae42*/
    a4[1] = _mm_max_ps(a4[1], v8); /*0x92ae4c*/
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i); /*0x92ae55*/
  }
  return result; /*0x92ae5f*/
}
