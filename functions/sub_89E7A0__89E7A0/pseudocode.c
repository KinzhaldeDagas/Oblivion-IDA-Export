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

  sub_89E210(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7D1C);
  v4 = a2[5];
  v5 = a2[4];
  v19 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v19);
  sub_47F9F0(v20);
  sub_89E370(this, v20);
  v6 = TESOutput_PrintLabeledFloat("Damping", v20[0xC]);
  v7 = a2[5];
  v8 = a2[4];
  v19 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(a2, v7 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v19);
  v9 = TESOutput_PrintLabeledFloat("Elasticity", v20[0xD]);
  v10 = a2[5];
  v11 = a2[4];
  v19 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize(a2, v10 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v19);
  v12 = TESOutput_PrintLabeledFloat("Object Damping", v20[0xF]);
  v13 = a2[5];
  v14 = a2[4];
  v19 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize(a2, v13 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, &v19);
  v15 = TESOutput_PrintLabeledFloat("Max Force", v20[0xE]);
  v16 = a2[5];
  v17 = a2[4];
  v19 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize(a2, v16 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v16, &v19);
}
