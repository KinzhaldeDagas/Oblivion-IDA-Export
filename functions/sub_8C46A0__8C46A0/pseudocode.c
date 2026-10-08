unsigned int __thiscall sub_8C46A0(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __m128 *v6; // edi
  char *v7; // eax
  unsigned int v8; // edi
  char *v9; // eax
  unsigned int v10; // edi
  char *v12; // [esp+14h] [ebp-30h] BYREF
  float v13[3]; // [esp+18h] [ebp-2Ch] BYREF
  __m128 v14; // [esp+24h] [ebp-20h] BYREF

  sub_914F30(this, a2); /*0x8c46bd*/
  v3 = TESOutput_PrintString((char *)stru_BA8110.name); /*0x8c46c8*/
  v4 = a2[5]; /*0x8c46cd*/
  v5 = a2[4]; /*0x8c46d1*/
  v12 = v3; /*0x8c46da*/
  if ( v4 >= v5 ) /*0x8c46de*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8c46e9*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v12); /*0x8c46f6*/
  if ( this ) /*0x8c46fd*/
  {
    v6 = *(this + 2); /*0x8c46ff*/
    if ( v6 ) /*0x8c4704*/
      v14 = v6[1]; /*0x8c470a*/
  }
  HavokVector_ToWorldVector(v13, &v14); /*0x8c4719*/
  v7 = sub_707280(v13, "Normal"); /*0x8c472a*/
  v8 = a2[5]; /*0x8c472f*/
  v12 = v7; /*0x8c4733*/
  if ( v8 >= a2[4] ) /*0x8c473d*/
    NiTArray_SetSize(a2, v8 + a2[7]); /*0x8c4748*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v12); /*0x8c4755*/
  v9 = TESOutput_PrintLabeledFloat("Constant", v14.m128_f32[3]); /*0x8c4767*/
  v10 = a2[5]; /*0x8c476c*/
  v12 = v9; /*0x8c4770*/
  if ( v10 >= a2[4] ) /*0x8c477d*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x8c4788*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v12); /*0x8c479a*/
}
