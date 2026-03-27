int __userpurge sub_8ECC60@<eax>(
        __m128 *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        __m128 *a5,
        __m128 *a6,
        int a7,
        int a8)
{
  __int32 v9; // ecx
  __int32 v10; // eax
  __int32 v11; // eax
  __m128 *v12; // eax
  __int32 v13; // eax
  int v14; // edi
  int result; // eax
  int v16; // eax
  float v17; // [esp+0h] [ebp-88h]
  int v19; // [esp+28h] [ebp-60h]
  _DWORD **v20; // [esp+2Ch] [ebp-5Ch]
  int i; // [esp+30h] [ebp-58h]
  __m128 v22; // [esp+34h] [ebp-54h] BYREF
  __m128 v23; // [esp+44h] [ebp-44h] BYREF
  __m128 v24; // [esp+54h] [ebp-34h]
  __m128 v25[2]; // [esp+64h] [ebp-24h] BYREF
  __int32 v26; // [esp+84h] [ebp-4h]
  __int32 retaddr; // [esp+8Ch] [ebp+4h]

  v9 = a1[1].m128_i32[1];
  v10 = a1->m128_i32[2];
  a1[0xA] = *a5;
  v17 = *(float *)(*(_DWORD *)(v10 + 0x74) + 8) * flt_A3D65C + a6[1].m128_f32[1];
  (*(void (__stdcall **)(__m128 *, _DWORD, __int16 *, int, int, int))(*(_DWORD *)v9 + 0xC))(
    a1 + 7,
    LODWORD(v17),
    &v22.m128_i16[2],
    a3,
    a4,
    a2);
  v22 = _mm_sub_ps(*a6, *a5);
  v23 = _mm_add_ps(v23, _mm_min_ps((__m128)0LL, v22));
  v24 = _mm_add_ps(v24, _mm_max_ps((__m128)0LL, v22));
  sub_8DE950(a1, (int)&v23);
  v11 = a1->m128_i32[2];
  v26 = 0x34000000;
  v12 = *(__m128 **)(v11 + 0x74);
  v25[0] = *v12;
  retaddr = v12[2].m128_i32[0];
  sub_8D9870(v25, &v22, a6[1].m128_i32[1]);
  v13 = a1->m128_i32[2];
  v14 = a1[0x12].m128_i32[1] - 1;
  v26 = a6[1].m128_i32[0];
  result = *(_DWORD *)(v13 + 0x7C);
  for ( i = result; v14 >= 0; --v14 )
  {
    v20 = (_DWORD **)(a1[0x12].m128_i32[0] + 4 * v14);
    v19 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)**v20 + 8))(**v20);
    if ( v19 == 0x18 && ((*v20)[7] & 0x2000) != 0 )
      v19 = 3;
    v16 = (*(int (__thiscall **)(__int32))(*(_DWORD *)a1[1].m128_i32[1] + 8))(a1[1].m128_i32[1]);
    result = (*(int (__cdecl **)(__int32 *, _DWORD, __m128 *, int, int))(i
                                                                       + 0x14
                                                                       * (*(unsigned __int8 *)(v19
                                                                                             + 0x20 * v16
                                                                                             + i
                                                                                             + 0x190)
                                                                        + 0x7B)))(
               &a1[1].m128_i32[1],
               *v20,
               v25,
               a7,
               a8);
  }
  return result;
}
