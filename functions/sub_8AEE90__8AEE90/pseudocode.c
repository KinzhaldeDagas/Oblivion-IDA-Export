unsigned int __thiscall sub_8AEE90(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  char *v11; // [esp+18h] [ebp-88h] BYREF
  float v12[9]; // [esp+1Ch] [ebp-84h] BYREF
  float v13[4]; // [esp+40h] [ebp-60h] BYREF
  __m128 v14[3]; // [esp+50h] [ebp-50h] BYREF
  __m128 v15; // [esp+80h] [ebp-20h] BYREF

  sub_8AED00(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7F6C);
  v4 = a2[5];
  v5 = a2[4];
  v11 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v11);
  sub_6848D0(this, v14);
  sub_607740((int)v12, v14);
  sub_43F3E0(v13, &v15);
  v6 = sub_711A50(v12, (char *)&off_A97270);
  v7 = a2[5];
  v11 = v6;
  if ( v7 >= a2[4] )
    NiTArray_SetSize(a2, v7 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v11);
  v8 = sub_707280(v13, "Trans");
  v9 = a2[5];
  v11 = v8;
  if ( v9 >= a2[4] )
    NiTArray_SetSize(a2, v9 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v11);
}
