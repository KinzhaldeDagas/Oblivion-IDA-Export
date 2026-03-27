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

  if ( *(this + 1) )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0xC))(*(this + 1));
    v4 = sub_8E7D80(v3);
    v5 = TESOutput_PrintLabeledString("Type", v4);
    v6 = a2[5];
    v15 = v5;
    if ( v6 >= a2[4] )
      NiTArray_SetSize(a2, v6 + a2[7]);
    NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v6, &v15);
  }
  _sprintf(v16, "0x%8X", *(this + 3));
  v7 = TESOutput_PrintLabeledString("hkEntityA", v16);
  v8 = a2[5];
  v15 = v7;
  if ( v8 >= a2[4] )
    NiTArray_SetSize(a2, v8 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, &v15);
  _sprintf(v16, "0x%8X", *(this + 4));
  v9 = TESOutput_PrintLabeledString("hkEntityB", v16);
  v10 = a2[5];
  v15 = v9;
  if ( v10 >= a2[4] )
    NiTArray_SetSize(a2, v10 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, &v15);
  v11 = TESOutput_PrintLabeledSignedInt("ePriority", *(this + 2));
  v12 = a2[5];
  v13 = a2[4];
  v15 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize(a2, v12 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, &v15);
}
