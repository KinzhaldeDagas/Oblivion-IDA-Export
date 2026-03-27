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

  sub_914F30(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA8110);
  v4 = a2[5];
  v5 = a2[4];
  v12 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v12);
  if ( this )
  {
    v6 = *(this + 2);
    if ( v6 )
      v14 = v6[1];
  }
  sub_43F3E0(v13, &v14);
  v7 = sub_707280(v13, "Normal");
  v8 = a2[5];
  v12 = v7;
  if ( v8 >= a2[4] )
    NiTArray_SetSize(a2, v8 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v12);
  v9 = TESOutput_PrintLabeledFloat("Constant", v14.m128_f32[3]);
  v10 = a2[5];
  v12 = v9;
  if ( v10 >= a2[4] )
    NiTArray_SetSize(a2, v10 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v12);
}
