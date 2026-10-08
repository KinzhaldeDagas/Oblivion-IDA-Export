unsigned int __thiscall sub_89E7A0(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  char *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // edx
  char *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx
  char *v19; // [esp+10h] [ebp-44h] BYREF
  float v20[16]; // [esp+14h] [ebp-40h] BYREF

  sub_89E210(this, a2); /*0x89e7b2*/
  v3 = TESOutput_PrintString((char *)stru_BA7D1C.name); /*0x89e7bd*/
  v4 = a2[5]; /*0x89e7c2*/
  v5 = a2[4]; /*0x89e7c6*/
  v19 = v3; /*0x89e7cf*/
  if ( v4 >= v5 ) /*0x89e7d3*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x89e7de*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v19); /*0x89e7eb*/
  sub_47F9F0(v20); /*0x89e7f4*/
  sub_89E370(this, v20); /*0x89e800*/
  v6 = TESOutput_PrintLabeledFloat("Damping", v20[0xC]); /*0x89e812*/
  v7 = a2[5]; /*0x89e817*/
  v8 = a2[4]; /*0x89e81b*/
  v19 = v6; /*0x89e824*/
  if ( v7 >= v8 ) /*0x89e828*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x89e833*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v19); /*0x89e840*/
  v9 = TESOutput_PrintLabeledFloat("Elasticity", v20[0xD]); /*0x89e852*/
  v10 = a2[5]; /*0x89e857*/
  v11 = a2[4]; /*0x89e85b*/
  v19 = v9; /*0x89e864*/
  if ( v10 >= v11 ) /*0x89e868*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x89e873*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v19); /*0x89e880*/
  v12 = TESOutput_PrintLabeledFloat("Object Damping", v20[0xF]); /*0x89e892*/
  v13 = a2[5]; /*0x89e897*/
  v14 = a2[4]; /*0x89e89b*/
  v19 = v12; /*0x89e8a4*/
  if ( v13 >= v14 ) /*0x89e8a8*/
    NiTArray_SetSize(a2, v13 + a2[7]); /*0x89e8b3*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, &v19); /*0x89e8c0*/
  v15 = TESOutput_PrintLabeledFloat("Max Force", v20[0xE]); /*0x89e8d2*/
  v16 = a2[5]; /*0x89e8d7*/
  v17 = a2[4]; /*0x89e8db*/
  v19 = v15; /*0x89e8e4*/
  if ( v16 >= v17 ) /*0x89e8e8*/
    NiTArray_SetSize(a2, v16 + a2[7]); /*0x89e8f3*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v16, &v19); /*0x89e905*/
}
