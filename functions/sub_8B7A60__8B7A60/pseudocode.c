__m128 *__thiscall sub_8B7A60(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // eax
  unsigned int v8; // ebx
  __m128 *result; // eax
  __m128 *v10; // edi
  int v11; // edi
  __m128 v12; // xmm0
  double v13; // st7
  double v14; // st6
  char *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  char *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  __m128 *v21; // [esp+14h] [ebp-50h] BYREF
  int v22; // [esp+18h] [ebp-4Ch]
  float v23; // [esp+1Ch] [ebp-48h] BYREF
  char *v24; // [esp+20h] [ebp-44h] BYREF
  float v25; // [esp+24h] [ebp-40h]
  float v26[3]; // [esp+34h] [ebp-30h] BYREF
  char ArgList[32]; // [esp+40h] [ebp-24h] BYREF

  sub_8AE9A0(this, a2); /*0x8b7a7d*/
  v3 = TESOutput_PrintString((char *)stru_BA7FEC.name); /*0x8b7a88*/
  v4 = a2[5]; /*0x8b7a8d*/
  v5 = a2[4]; /*0x8b7a91*/
  v21 = (__m128 *)v3; /*0x8b7a9a*/
  if ( v4 >= v5 ) /*0x8b7a9e*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8b7aa9*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v21); /*0x8b7ab6*/
  if ( this && (v6 = (int)*(this + 2)) != 0 ) /*0x8b7ac4*/
    v22 = *(_DWORD *)(v6 + 0xC); /*0x8b7ac9*/
  else
    v22 = 0; /*0x8b7acf*/
  v7 = TESOutput_PrintLabeledSignedInt("Num Spheres", v22); /*0x8b7ae1*/
  v8 = a2[5]; /*0x8b7ae6*/
  v21 = (__m128 *)v7; /*0x8b7aea*/
  if ( v8 >= a2[4] ) /*0x8b7af7*/
    NiTArray_SetSize(a2, v8 + a2[7]); /*0x8b7b02*/
  result = (__m128 *)NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v21); /*0x8b7b0f*/
  if ( this ) /*0x8b7b16*/
  {
    v10 = *(this + 2); /*0x8b7b1c*/
    if ( v10 ) /*0x8b7b21*/
    {
      result = v10 + 1; /*0x8b7b27*/
      v21 = v10 + 1; /*0x8b7b2c*/
      if ( v10 != (__m128 *)0xFFFFFFF0 ) /*0x8b7b30*/
      {
        v11 = 0; /*0x8b7b36*/
        if ( v22 > 0 ) /*0x8b7b3c*/
        {
          while ( 1 ) /*0x8b7b54*/
          {
            v12 = *result; /*0x8b7b54*/
            v13 = dbl_A372E0; /*0x8b7b57*/
            v14 = result->m128_f32[3]; /*0x8b7b5d*/
            v25 = result->m128_f32[0]; /*0x8b7b60*/
            v23 = v14; /*0x8b7b66*/
            v26[0] = v25 * v13; /*0x8b7b82*/
            v25 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]; /*0x8b7b8e*/
            v26[1] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] * v13; /*0x8b7b9c*/
            v26[2] = v13 * v25; /*0x8b7ba4*/
            _sprintf(ArgList, "Pos %d", v11); /*0x8b7ba8*/
            v15 = sub_707280(v26, ArgList); /*0x8b7bb9*/
            v16 = a2[5]; /*0x8b7bbe*/
            v17 = a2[4]; /*0x8b7bc2*/
            v24 = v15; /*0x8b7bc8*/
            if ( v16 >= v17 ) /*0x8b7bcc*/
              NiTArray_SetSize(a2, v16 + a2[7]); /*0x8b7bd7*/
            NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v16, &v24); /*0x8b7be4*/
            _sprintf(ArgList, "Radius %d", v11); /*0x8b7bf4*/
            v18 = TESOutput_PrintLabeledFloat(ArgList, v23); /*0x8b7c08*/
            v19 = a2[5]; /*0x8b7c0d*/
            v20 = a2[4]; /*0x8b7c11*/
            v23 = *(float *)&v18; /*0x8b7c1a*/
            if ( v19 >= v20 ) /*0x8b7c1e*/
              NiTArray_SetSize(a2, v19 + a2[7]); /*0x8b7c29*/
            result = (__m128 *)NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v19, &v23); /*0x8b7c36*/
            ++v21; /*0x8b7c3b*/
            if ( ++v11 >= v22 ) /*0x8b7c47*/
              break; /*0x8b7c47*/
            result = v21; /*0x8b7b50*/
          }
        }
      }
    }
  }
  return result; /*0x8b7c4d*/
}
