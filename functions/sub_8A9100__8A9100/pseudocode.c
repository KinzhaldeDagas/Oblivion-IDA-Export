unsigned int __thiscall sub_8A9100(unsigned int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  char *v5; // eax
  unsigned int v6; // ebx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  char *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  char *v16; // eax
  char *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  char *v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // ecx
  char v24[4]; // [esp+Ch] [ebp-88h] BYREF
  char v25[128]; // [esp+10h] [ebp-84h] BYREF

  _sprintf(v25, "0x%08X", *this);
  v3 = TESOutput_PrintLabeledString("COLFILTER", v25);
  v4 = a2[5];
  *(_DWORD *)v24 = v3;
  if ( v4 >= a2[4] )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v24);
  _sprintf(v25, "0x%X", *((unsigned __int16 *)this + 1));
  v5 = TESOutput_PrintLabeledString("-GROUP", v25);
  v6 = a2[5];
  *(_DWORD *)v24 = v5;
  if ( v6 >= a2[4] )
    NiTArray_SetSize(a2, v6 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v6, v24);
  v7 = TESOutput_PrintLabeledString("-LAYER", *(const char **)(4 * (*this & 0x3F) + 0xB2EB40));
  v8 = a2[5];
  v9 = a2[4];
  *(_DWORD *)v24 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize(a2, v8 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, v24);
  v24[0] = (*this & 0x8000) != 0;
  v10 = TESOutput_PrintLabeledBool("-LINK", v24[0]);
  v11 = a2[5];
  *(_DWORD *)v24 = v10;
  if ( v11 >= a2[4] )
    NiTArray_SetSize(a2, v11 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v11, v24);
  v12 = *this;
  if ( (*this & 0x3F) == 8 )
  {
    v13 = TESOutput_PrintLabeledString("-PART", *(const char **)(4 * ((v12 >> 8) & 0x1F) + 0xB2EBC0));
    v14 = a2[5];
    v15 = a2[4];
    *(_DWORD *)v24 = v13;
    if ( v14 >= v15 )
      NiTArray_SetSize(a2, v14 + a2[7]);
  }
  else
  {
    if ( (v12 & 0x8000) == 0 )
      goto LABEL_17;
    v16 = TESOutput_PrintLabeledUnsignedInt("-PART", (v12 >> 8) & 0x1F);
    v14 = a2[5];
    *(_DWORD *)v24 = v16;
    if ( v14 >= a2[4] )
      NiTArray_SetSize(a2, v14 + a2[7]);
  }
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v14, v24);
LABEL_17:
  v24[0] = (*this & 0x4000) != 0;
  v17 = TESOutput_PrintLabeledBool("-NOCOL", v24[0]);
  v18 = a2[5];
  v19 = a2[4];
  *(_DWORD *)v24 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize(a2, v18 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v24);
  v24[0] = (*this & 0x2000) != 0;
  v20 = TESOutput_PrintLabeledBool("-SCALED", v24[0]);
  v21 = a2[5];
  v22 = a2[4];
  *(_DWORD *)v24 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize(a2, v21 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v21, v24);
}
