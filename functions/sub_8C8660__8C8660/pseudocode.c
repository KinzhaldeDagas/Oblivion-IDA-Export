unsigned int __thiscall sub_8C8660(float **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char *v12; // eax
  unsigned int v13; // edi
  char *v15; // [esp+14h] [ebp-70h] BYREF
  float v16[3]; // [esp+18h] [ebp-6Ch] BYREF
  float v17[4]; // [esp+24h] [ebp-60h] BYREF
  float v18; // [esp+34h] [ebp-50h]
  float v19; // [esp+38h] [ebp-4Ch]
  float v20; // [esp+3Ch] [ebp-48h]
  float v21; // [esp+40h] [ebp-44h]
  float v22; // [esp+44h] [ebp-40h]
  float v23; // [esp+48h] [ebp-3Ch]
  float v24; // [esp+4Ch] [ebp-38h]
  float v25; // [esp+50h] [ebp-34h]
  float v26; // [esp+54h] [ebp-30h]
  __m128 v27; // [esp+64h] [ebp-20h] BYREF

  sub_8AEAC0(this, *(float *)&a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA8144);
  v4 = a2[5];
  v5 = a2[4];
  v15 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v15);
  v17[1] = flt_B2EFC4;
  v26 = 0.0;
  v18 = 0.0;
  v17[0] = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 1.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  sub_8C8080(this, v17);
  v6 = TESOutput_PrintLabeledFloat((char *)&off_A996C8, v26);
  v7 = a2[5];
  v8 = a2[4];
  v15 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(a2, v7 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v15);
  v27.m128_f32[0] = v18;
  v27.m128_f32[1] = v19;
  v27.m128_f32[2] = v20;
  v27.m128_f32[3] = v21;
  sub_4D68A0(v16, &v27);
  v9 = sub_707280(v16, "VA");
  v10 = a2[5];
  v11 = a2[4];
  v15 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize(a2, v10 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v15);
  v27.m128_f32[0] = v22;
  v27.m128_f32[1] = v23;
  v27.m128_f32[2] = v24;
  v27.m128_f32[3] = v25;
  sub_4D68A0(v16, &v27);
  v12 = sub_707280(v16, "VB");
  v13 = a2[5];
  v15 = v12;
  if ( v13 >= a2[4] )
    NiTArray_SetSize(a2, v13 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, &v15);
}
