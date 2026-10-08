int __thiscall sub_8C9520(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v4)(_DWORD *, char *); // edx
  int v5; // eax
  __m128 *v6; // edi
  int v7; // eax
  int v8; // esi
  __m128 v9; // xmm0
  int v10; // eax
  __int32 v11; // eax
  char v13; // [esp+17h] [ebp-9h] BYREF
  float v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v4 = *(int (__thiscall **)(_DWORD *, char *))(*this + 0x74); /*0x8c9534*/
  v15 = a2; /*0x8c9538*/
  v5 = v4(this, &v13); /*0x8c9548*/
  v6 = (__m128 *)v5; /*0x8c954a*/
  if ( v5 ) /*0x8c954e*/
  {
    v7 = *(_DWORD *)(v5 + 8); /*0x8c9550*/
    if ( v7 ) /*0x8c9555*/
      v8 = *(_DWORD *)(v7 + 8); /*0x8c9557*/
    else
      v8 = 0; /*0x8c955c*/
    v14 = *(float *)(a3 + 0x10); /*0x8c9565*/
    if ( 1.0 != v14 ) /*0x8c9574*/
    {
      v9 = 0; /*0x8c957c*/
      v9.m128_f32[0] = v14; /*0x8c957f*/
      v6[4] = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v6[4]); /*0x8c9591*/
LABEL_9:
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x18))(v8, a3); /*0x8c95b0*/
      if ( v10 ) /*0x8c95c0*/
        v11 = *(_DWORD *)(v10 + 8); /*0x8c95c2*/
      else
        v11 = 0; /*0x8c95c7*/
      v6->m128_i32[2] = v11; /*0x8c95c9*/
      return sub_8A2670(this, v15, (_DWORD **)a3); /*0x8c95c9*/
    }
    if ( v8 && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x8C))(v8, a3) ) /*0x8c95aa*/
      goto LABEL_9; /*0x8c95ae*/
  }
  return sub_8A2670(this, v15, (_DWORD **)a3); /*0x8c95dd*/
}
