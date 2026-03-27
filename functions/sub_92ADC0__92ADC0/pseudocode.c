int __thiscall sub_92ADC0(void *this, int a2, int a3, __m128 *a4)
{
  int result; // eax
  int i; // ebx
  int v7; // eax
  __m128 v8; // xmm0
  char v9[20]; // [esp+10h] [ebp-234h] BYREF
  __m128 v10; // [esp+24h] [ebp-220h]
  _BYTE v11[524]; // [esp+34h] [ebp-210h] BYREF

  a4->m128_i32[0] = 0x7F7FFFFF;
  a4->m128_i32[1] = 0x7F7FFFFF;
  a4->m128_i32[2] = 0x7F7FFFFF;
  a4->m128_i32[3] = 0;
  a4[1].m128_i32[0] = 0xFF7FFFFF;
  a4[1].m128_i32[1] = 0xFF7FFFFF;
  a4[1].m128_u64[1] = 0xFF7FFFFFLL;
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
  for ( i = result; result != 0xFFFFFFFF; i = result )
  {
    v7 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, i, v11);
    (*(void (__thiscall **)(int, int, int, char *))(*(_DWORD *)v7 + 0xC))(v7, a2, a3, &v9[4]);
    v8 = v10;
    *a4 = _mm_min_ps(*a4, *(__m128 *)&v9[4]);
    a4[1] = _mm_max_ps(a4[1], v8);
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i);
  }
  return result;
}
