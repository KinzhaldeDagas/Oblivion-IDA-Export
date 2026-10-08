float *__thiscall sub_8BE680(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v7; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v8[16]; // [esp+10h] [ebp-40h] BYREF

  sub_8A0180(this, a2); /*0x8be692*/
  v3 = TESOutput_PrintString((char *)stru_BA8074.name); /*0x8be69d*/
  v4 = a2[5]; /*0x8be6a2*/
  v5 = a2[4]; /*0x8be6a6*/
  v7 = v3; /*0x8be6af*/
  if ( v4 >= v5 ) /*0x8be6b3*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8be6be*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v7); /*0x8be6cb*/
  *(float *)&v8[4] = 0.0; /*0x8be6d2*/
  *(float *)&v8[5] = 0.0; /*0x8be6d8*/
  *(float *)&v8[6] = 0.0; /*0x8be6e0*/
  *(float *)&v8[7] = 0.0; /*0x8be6e5*/
  *(float *)&v8[8] = 0.0; /*0x8be6eb*/
  memset(v8, 0, 0xC); /*0x8be6ef*/
  *(float *)&v8[9] = 0.0; /*0x8be6f3*/
  *(float *)&v8[0xA] = 0.0; /*0x8be6fb*/
  *(float *)&v8[0xB] = 0.0; /*0x8be703*/
  *(float *)&v8[0xC] = kFaceEarNormalMatchRadius; /*0x8be70d*/
  *(float *)&v8[0xD] = flt_A34BA0; /*0x8be717*/
  return sub_8BE190(this, (int)v8); /*0x8be720*/
}
