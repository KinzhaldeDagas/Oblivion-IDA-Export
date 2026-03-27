float *__thiscall sub_8BE060(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v7; // [esp+Ch] [ebp-34h] BYREF
  float v8[12]; // [esp+10h] [ebp-30h] BYREF

  sub_8A0180(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA8068);
  v4 = a2[5];
  v5 = a2[4];
  v7 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v7);
  v8[4] = flt_B2F080;
  v8[5] = flt_B2F084;
  v8[6] = flt_B2F088;
  memset(v8, 0, 0xC);
  v8[7] = flt_B2F08C;
  v8[8] = flt_A2FAAC;
  v8[9] = flt_A34BA0;
  return sub_8BDC60(this, v8);
}
