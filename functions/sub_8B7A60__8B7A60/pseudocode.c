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
  unsigned int v21; // [esp+14h] [ebp-50h] BYREF
  int v22; // [esp+18h] [ebp-4Ch]
  float v23; // [esp+1Ch] [ebp-48h] BYREF
  char *v24; // [esp+20h] [ebp-44h] BYREF
  float v25; // [esp+24h] [ebp-40h]
  float v26[3]; // [esp+34h] [ebp-30h] BYREF
  char ArgList[32]; // [esp+40h] [ebp-24h] BYREF

  sub_8AE9A0(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7FEC);
  v4 = a2[5];
  v5 = a2[4];
  v21 = (unsigned int)v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v21);
  if ( this && (v6 = (int)*(this + 2)) != 0 )
    v22 = *(_DWORD *)(v6 + 0xC);
  else
    v22 = 0;
  v7 = TESOutput_PrintLabeledSignedInt("Num Spheres", v22);
  v8 = a2[5];
  v21 = (unsigned int)v7;
  if ( v8 >= a2[4] )
    NiTArray_SetSize(a2, v8 + a2[7]);
  result = (__m128 *)NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v21);
  if ( this )
  {
    v10 = *(this + 2);
    if ( v10 )
    {
      result = v10 + 1;
      v21 = (unsigned int)&v10[1];
      if ( v10 != (__m128 *)0xFFFFFFF0 )
      {
        v11 = 0;
        if ( v22 > 0 )
        {
          while ( 1 )
          {
            v12 = *result;
            v13 = dbl_A372E0;
            v14 = result->m128_f32[3];
            v25 = result->m128_f32[0];
            v23 = v14;
            v26[0] = v25 * v13;
            v25 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0];
            v26[1] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] * v13;
            v26[2] = v13 * v25;
            _sprintf(ArgList, "Pos %d", v11);
            v15 = sub_707280(v26, ArgList);
            v16 = a2[5];
            v17 = a2[4];
            v24 = v15;
            if ( v16 >= v17 )
              NiTArray_SetSize(a2, v16 + a2[7]);
            NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v16, &v24);
            _sprintf(ArgList, "Radius %d", v11);
            v18 = TESOutput_PrintLabeledFloat(ArgList, v23);
            v19 = a2[5];
            v20 = a2[4];
            v23 = *(float *)&v18;
            if ( v19 >= v20 )
              NiTArray_SetSize(a2, v19 + a2[7]);
            result = (__m128 *)NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v19, &v23);
            v21 += 0x10;
            if ( ++v11 >= v22 )
              break;
            result = (__m128 *)v21;
          }
        }
      }
    }
  }
  return result;
}
