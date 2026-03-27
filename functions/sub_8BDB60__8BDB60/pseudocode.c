__int8 __thiscall sub_8BDB60(__m128 **this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v7; // [esp+Ch] [ebp-44h] BYREF
  float v8[16]; // [esp+10h] [ebp-40h] BYREF

  sub_8A0180(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA805C);
  v4 = a2[5];
  v5 = a2[4];
  v7 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v7);
  sub_8BD940(v8);
  return sub_8BD720(this, (int)v8);
}
