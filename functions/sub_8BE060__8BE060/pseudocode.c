float *__thiscall sub_8BE060(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v7; // [esp+Ch] [ebp-34h] BYREF
  float v8[12]; // [esp+10h] [ebp-30h] BYREF

  sub_8A0180(this, a2); /*0x8be072*/
  v3 = TESOutput_PrintString((char *)stru_BA8068.name); /*0x8be07d*/
  v4 = a2[5]; /*0x8be082*/
  v5 = a2[4]; /*0x8be086*/
  v7 = v3; /*0x8be08f*/
  if ( v4 >= v5 ) /*0x8be093*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8be09e*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v7); /*0x8be0ab*/
  v8[4] = flt_B2F080; /*0x8be0b6*/
  v8[5] = flt_B2F084; /*0x8be0c6*/
  v8[6] = flt_B2F088; /*0x8be0d3*/
  memset(v8, 0, 0xC); /*0x8be0d7*/
  v8[7] = flt_B2F08C; /*0x8be0e5*/
  v8[8] = kFaceEarNormalMatchRadius; /*0x8be0f3*/
  v8[9] = flt_A34BA0; /*0x8be0fd*/
  return sub_8BDC60(this, v8); /*0x8be106*/
}
