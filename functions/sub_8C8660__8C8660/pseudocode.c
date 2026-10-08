unsigned int __thiscall sub_8C8660(__m128 **this, unsigned __int16 *a2)
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

  sub_8AEAC0(this, *(float *)&a2); /*0x8c867d*/
  v3 = TESOutput_PrintString((char *)stru_BA8144.name); /*0x8c8688*/
  v4 = a2[5]; /*0x8c868d*/
  v5 = a2[4]; /*0x8c8691*/
  v15 = v3; /*0x8c869a*/
  if ( v4 >= v5 ) /*0x8c869e*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8c86a9*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v15); /*0x8c86b6*/
  v17[1] = flt_B2EFC4; /*0x8c86c1*/
  v26 = 0.0; /*0x8c86cc*/
  v18 = 0.0; /*0x8c86d2*/
  v17[0] = 0.0; /*0x8c86d6*/
  v19 = 0.0; /*0x8c86de*/
  v20 = 0.0; /*0x8c86e2*/
  v21 = 0.0; /*0x8c86e6*/
  v22 = 1.0; /*0x8c86ec*/
  v23 = 0.0; /*0x8c86f0*/
  v24 = 0.0; /*0x8c86f4*/
  v25 = 0.0; /*0x8c86f8*/
  sub_8C8080(this, v17); /*0x8c86fc*/
  v6 = TESOutput_PrintLabeledFloat((char *)&off_A996C8, v26); /*0x8c870e*/
  v7 = a2[5]; /*0x8c8713*/
  v8 = a2[4]; /*0x8c8717*/
  v15 = v6; /*0x8c8720*/
  if ( v7 >= v8 ) /*0x8c8724*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x8c872f*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v15); /*0x8c873c*/
  v27.m128_f32[0] = v18; /*0x8c8745*/
  v27.m128_f32[1] = v19; /*0x8c8752*/
  v27.m128_f32[2] = v20; /*0x8c875f*/
  v27.m128_f32[3] = v21; /*0x8c8767*/
  sub_4D68A0(v16, &v27); /*0x8c876b*/
  v9 = sub_707280(v16, "VA"); /*0x8c877c*/
  v10 = a2[5]; /*0x8c8781*/
  v11 = a2[4]; /*0x8c8785*/
  v15 = v9; /*0x8c878b*/
  if ( v10 >= v11 ) /*0x8c878f*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x8c879a*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v15); /*0x8c87a7*/
  v27.m128_f32[0] = v22; /*0x8c87b0*/
  v27.m128_f32[1] = v23; /*0x8c87bd*/
  v27.m128_f32[2] = v24; /*0x8c87ca*/
  v27.m128_f32[3] = v25; /*0x8c87d2*/
  sub_4D68A0(v16, &v27); /*0x8c87d6*/
  v12 = sub_707280(v16, "VB"); /*0x8c87e7*/
  v13 = a2[5]; /*0x8c87ec*/
  v15 = v12; /*0x8c87f0*/
  if ( v13 >= a2[4] ) /*0x8c87fa*/
    NiTArray_SetSize(a2, v13 + a2[7]); /*0x8c8805*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, &v15); /*0x8c8817*/
}
