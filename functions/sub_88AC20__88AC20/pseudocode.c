void __cdecl sub_88AC20(_DWORD *a1, int a2)
{
  float *v2; // edi
  NiRTTI *v3; // eax
  char v4; // al
  int v5; // esi
  NiRTTI *v6; // eax
  char v7; // al
  int v8; // esi
  __m128 *v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm2
  hkVector4 v13; // xmm1
  void (__thiscall *v14)(int, char *); // edx
  char v15[20]; // [esp+Ch] [ebp-34h] BYREF
  __m128 v16; // [esp+20h] [ebp-20h]

  if ( a1 )
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*a1 + 4))(a1); /*0x88ac4c*/
    if ( v3 ) /*0x88ac50*/
    {
      while ( v3 != &MEMORY[0xBA7A20] ) /*0x88ac57*/
      {
        v3 = v3->parent; /*0x88ac5d*/
        if ( !v3 ) /*0x88ac62*/
          goto LABEL_6; /*0x88ac62*/
      }
      v4 = 1; /*0x88ad79*/
    }
    else
    {
LABEL_6:
      v4 = 0; /*0x88ac64*/
    }
    v2 = v4 != 0 ? (float *)a1 : 0;
  }
  else
  {
    v2 = 0; /*0x88ac41*/
  }
  v5 = a1[4]; /*0x88ac6e*/
  if ( v5 )
  {
    v6 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x88ac80*/
    if ( v6 ) /*0x88ac84*/
    {
      while ( v6 != &stru_BA7D84 ) /*0x88ac95*/
      {
        v6 = v6->parent; /*0x88ac9b*/
        if ( !v6 ) /*0x88aca0*/
          goto LABEL_12; /*0x88aca0*/
      }
      v7 = 1; /*0x88ad80*/
    }
    else
    {
LABEL_12:
      v7 = 0; /*0x88aca2*/
    }
    v8 = v7 != 0 ? v5 : 0;
    if ( v8 ) /*0x88acac*/
    {
      v9 = *(__m128 **)(a2 + 0xC); /*0x88acb2*/
      if ( v9 ) /*0x88acb7*/
      {
        v10 = *v9; /*0x88acbf*/
        v16 = *v9; /*0x88acc2*/
        if ( !v2 /*0x88ad34*/
          || v2[5] >= 1.0
          || 0.0 != v2[5]
          && (v11 = 0,
              v11.m128_f32[0] = v2[6],
              v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v10),
              v13 = unk_BA7A40,
              v16 = v12,
              (_mm_movemask_ps(
                 _mm_cmplt_ps(
                   _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0),
                   _mm_and_ps(_mm_sub_ps(v12, (__m128)v13), (__m128)xmmword_A372D0)))
             & 7) != 0) )
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x8C))(v8, &v15[4]); /*0x88ad45*/
          v14 = *(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x94); /*0x88ad53*/
          *(__m128 *)&v15[4] = _mm_add_ps(*(__m128 *)&v15[4], v16); /*0x88ad60*/
          v14(v8, &v15[4]); /*0x88ad65*/
        }
      }
    }
  }
}
