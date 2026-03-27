char __usercall sub_936790@<al>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ebx>, int a4, int a5)
{
  __int32 v5; // esi
  __int32 v6; // ecx
  __m128 v7; // xmm0
  char result; // al
  __m128 v9; // [esp+10h] [ebp-20h]
  __m128 v10; // [esp+20h] [ebp-10h]

  v9.m128_u64[0] = *(_QWORD *)a4;
  v5 = *(_DWORD *)(a4 + 8);
  v9.m128_i32[3] = *(_DWORD *)(a4 + 0xC);
  v10.m128_u64[0] = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 8);
  v10.m128_i32[3] = *(_DWORD *)(a1 + 0xC);
  v10.m128_i32[2] = v6;
  v9.m128_i32[2] = v5;
  v9.m128_i32[a5] = 0x3F800000;
  v7 = v9;
  v10.m128_i32[a3] = 0x3F800000;
  result = a3 + 0x10 * (~(unsigned __int8)_mm_movemask_ps(v10) & 7);
  *a2 = a5 | (0x10 * (_mm_movemask_ps(v7) | 0xF8));
  a2[1] = result;
  return result;
}
