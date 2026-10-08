unsigned int __thiscall sub_8A0D20(int *this, unsigned __int16 *a2)
{
  int v3; // eax
  const char *v4; // eax
  char *v5; // eax
  unsigned int v6; // ebx
  char *v7; // eax
  unsigned int v8; // ebx
  char *v9; // eax
  unsigned int v10; // ebx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  char *v15; // [esp+Ch] [ebp-28h] BYREF
  char v16[32]; // [esp+10h] [ebp-24h] BYREF

  if ( *(this + 1) ) /*0x8a0d37*/
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xC))(*(this + 1)); /*0x8a0d45*/
    v4 = sub_8E7D80(v3); /*0x8a0d48*/
    v5 = TESOutput_PrintLabeledString("Type", v4); /*0x8a0d53*/
    v6 = a2[5]; /*0x8a0d58*/
    v15 = v5; /*0x8a0d5c*/
    if ( v6 >= a2[4] ) /*0x8a0d69*/
      NiTArray_SetSize(a2, v6 + a2[7]); /*0x8a0d74*/
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v6, &v15); /*0x8a0d81*/
  }
  _sprintf(v16, "0x%8X", *(this + 3)); /*0x8a0d94*/
  v7 = TESOutput_PrintLabeledString("hkEntityA", v16); /*0x8a0da3*/
  v8 = a2[5]; /*0x8a0da8*/
  v15 = v7; /*0x8a0dac*/
  if ( v8 >= a2[4] ) /*0x8a0db9*/
    NiTArray_SetSize(a2, v8 + a2[7]); /*0x8a0dc4*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v15); /*0x8a0dd1*/
  _sprintf(v16, "0x%8X", *(this + 4)); /*0x8a0de4*/
  v9 = TESOutput_PrintLabeledString("hkEntityB", v16); /*0x8a0df3*/
  v10 = a2[5]; /*0x8a0df8*/
  v15 = v9; /*0x8a0dfc*/
  if ( v10 >= a2[4] ) /*0x8a0e09*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x8a0e14*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v15); /*0x8a0e21*/
  v11 = TESOutput_PrintLabeledSignedInt("ePriority", *(this + 2)); /*0x8a0e2f*/
  v12 = a2[5]; /*0x8a0e34*/
  v13 = a2[4]; /*0x8a0e38*/
  v15 = v11; /*0x8a0e41*/
  if ( v12 >= v13 ) /*0x8a0e45*/
    NiTArray_SetSize(a2, v12 + a2[7]); /*0x8a0e50*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, &v15); /*0x8a0e62*/
}
