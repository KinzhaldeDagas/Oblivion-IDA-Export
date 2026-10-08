char __usercall sub_936790@<al>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ebx>, int a4, int a5)
{
  __int32 v5; // esi
  __int32 v6; // ecx
  __m128 v7; // xmm0
  char result; // al
  __m128 v9; // [esp+10h] [ebp-20h]
  __m128 v10; // [esp+20h] [ebp-10h]

  v9.m128_u64[0] = *(_QWORD *)a4; /*0x93679f*/
  v5 = *(_DWORD *)(a4 + 8); /*0x9367aa*/
  v9.m128_i32[3] = *(_DWORD *)(a4 + 0xC); /*0x9367b0*/
  v10.m128_u64[0] = *(_QWORD *)a1; /*0x9367b6*/
  v6 = *(_DWORD *)(a1 + 8); /*0x9367c1*/
  v10.m128_i32[3] = *(_DWORD *)(a1 + 0xC); /*0x9367c7*/
  v10.m128_i32[2] = v6; /*0x9367ce*/
  v9.m128_i32[2] = v5; /*0x9367d7*/
  v9.m128_i32[a5] = 0x3F800000; /*0x9367db*/
  v7 = v9; /*0x9367df*/
  v10.m128_i32[a3] = 0x3F800000; /*0x9367e4*/
  result = a3 + 0x10 * (~(unsigned __int8)_mm_movemask_ps(v10) & 7); /*0x936802*/
  *a2 = a5 | (0x10 * (_mm_movemask_ps(v7) | 0xF8)); /*0x936804*/
  a2[1] = result; /*0x936806*/
  return result; /*0x936809*/
}
