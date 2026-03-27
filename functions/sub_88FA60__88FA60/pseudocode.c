unsigned int __thiscall sub_88FA60(float *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  char *v12; // eax
  unsigned int v13; // ebx
  char *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  char *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx
  char v21[4]; // [esp+10h] [ebp-48h] BYREF
  char v22[64]; // [esp+14h] [ebp-44h] BYREF

  sub_89EEF0(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7A20);
  v4 = a2[5];
  v5 = a2[4];
  *(_DWORD *)v21 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v21);
  v6 = TESOutput_PrintLabeledFloat("fHeirGain", *(this + 5));
  v7 = a2[5];
  v8 = a2[4];
  *(_DWORD *)v21 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(a2, v7 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, v21);
  v9 = TESOutput_PrintLabeledFloat("fVelGain", *(this + 6));
  v10 = a2[5];
  v11 = a2[4];
  *(_DWORD *)v21 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize(a2, v10 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, v21);
  v21[0] = *((_BYTE *)this + 0xD) & 1;
  v12 = TESOutput_PrintLabeledBool("bBlendPos", v21[0]);
  v13 = a2[5];
  *(_DWORD *)v21 = v12;
  if ( v13 >= a2[4] )
    NiTArray_SetSize(a2, v13 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, v21);
  v21[0] = (*(_WORD *)(this + 3) & 0x200) != 0;
  v14 = TESOutput_PrintLabeledBool("bAlwaysBlend", v21[0]);
  v15 = a2[5];
  v16 = a2[4];
  *(_DWORD *)v21 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize(a2, v15 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v15, v21);
  _sprintf(v22, "0x%08X", *((_DWORD *)this + 8));
  v17 = TESOutput_PrintLabeledString("Stored World", v22);
  v18 = a2[5];
  v19 = a2[4];
  *(_DWORD *)v21 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize(a2, v18 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v21);
}
