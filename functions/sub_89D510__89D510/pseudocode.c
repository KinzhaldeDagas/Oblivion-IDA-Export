unsigned int __thiscall sub_89D510(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int result; // eax
  int v10; // ebx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edx
  char *v14; // [esp+Ch] [ebp-28h] BYREF
  char v15[32]; // [esp+10h] [ebp-24h] BYREF

  sub_7009A0(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7BA4);
  v4 = a2[5];
  v5 = a2[4];
  v14 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v14);
  _sprintf(v15, "0x%08X", *(this + 2));
  v6 = TESOutput_PrintLabeledString("hkObject", v15);
  v7 = a2[5];
  v8 = a2[4];
  v14 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(a2, v7 + a2[7]);
  result = NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v14);
  v10 = *(this + 2);
  if ( v10 )
  {
    v11 = TESOutput_PrintLabeledSignedInt("hkRefcount", *(__int16 *)(v10 + 6));
    v12 = a2[5];
    v13 = a2[4];
    v14 = v11;
    if ( v12 >= v13 )
      NiTArray_SetSize(a2, v12 + a2[7]);
    return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, &v14);
  }
  return result;
}
