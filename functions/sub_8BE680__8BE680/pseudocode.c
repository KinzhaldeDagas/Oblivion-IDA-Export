float *__thiscall sub_8BE680(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v7; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v8[16]; // [esp+10h] [ebp-40h] BYREF

  sub_8A0180(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA8074);
  v4 = a2[5];
  v5 = a2[4];
  v7 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v7);
  *(float *)&v8[4] = 0.0;
  *(float *)&v8[5] = 0.0;
  *(float *)&v8[6] = 0.0;
  *(float *)&v8[7] = 0.0;
  *(float *)&v8[8] = 0.0;
  memset(v8, 0, 0xC);
  *(float *)&v8[9] = 0.0;
  *(float *)&v8[0xA] = 0.0;
  *(float *)&v8[0xB] = 0.0;
  *(float *)&v8[0xC] = flt_A2FAAC;
  *(float *)&v8[0xD] = flt_A34BA0;
  return sub_8BE190(this, (int)v8);
}
