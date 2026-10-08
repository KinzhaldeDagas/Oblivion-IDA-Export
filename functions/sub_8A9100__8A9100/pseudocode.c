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

  _sprintf(v25, "0x%08X", *this); /*0x8a912d*/
  v3 = TESOutput_PrintLabeledString("COLFILTER", v25); /*0x8a913c*/
  v4 = a2[5]; /*0x8a9141*/
  *(_DWORD *)v24 = v3; /*0x8a9145*/
  if ( v4 >= a2[4] ) /*0x8a9152*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8a915d*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v24); /*0x8a916a*/
  _sprintf(v25, "0x%X", *((unsigned __int16 *)this + 1)); /*0x8a917e*/
  v5 = TESOutput_PrintLabeledString("-GROUP", v25); /*0x8a918d*/
  v6 = a2[5]; /*0x8a9192*/
  *(_DWORD *)v24 = v5; /*0x8a9196*/
  if ( v6 >= a2[4] ) /*0x8a91a3*/
    NiTArray_SetSize(a2, v6 + a2[7]); /*0x8a91ae*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v6, v24); /*0x8a91bb*/
  v7 = TESOutput_PrintLabeledString("-LAYER", *(const char **)(4 * (*this & 0x3F) + 0xB2EB40)); /*0x8a91d2*/
  v8 = a2[5]; /*0x8a91d7*/
  v9 = a2[4]; /*0x8a91db*/
  *(_DWORD *)v24 = v7; /*0x8a91e4*/
  if ( v8 >= v9 ) /*0x8a91e8*/
    NiTArray_SetSize(a2, v8 + a2[7]); /*0x8a91f3*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v8, v24); /*0x8a9200*/
  v24[0] = (*this & 0x8000) != 0; /*0x8a920d*/
  v10 = TESOutput_PrintLabeledBool("-LINK", v24[0]); /*0x8a921b*/
  v11 = a2[5]; /*0x8a9220*/
  *(_DWORD *)v24 = v10; /*0x8a9224*/
  if ( v11 >= a2[4] ) /*0x8a9231*/
    NiTArray_SetSize(a2, v11 + a2[7]); /*0x8a923c*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v11, v24); /*0x8a9249*/
  v12 = *this; /*0x8a924e*/
  if ( (*this & 0x3F) == 8 ) /*0x8a9258*/
  {
    v13 = TESOutput_PrintLabeledString("-PART", *(const char **)(4 * ((v12 >> 8) & 0x1F) + 0xB2EBC0)); /*0x8a926d*/
    v14 = a2[5]; /*0x8a9272*/
    v15 = a2[4]; /*0x8a9276*/
    *(_DWORD *)v24 = v13; /*0x8a927f*/
    if ( v14 >= v15 ) /*0x8a9283*/
      NiTArray_SetSize(a2, v14 + a2[7]); /*0x8a928e*/
  }
  else
  {
    if ( (v12 & 0x8000) == 0 ) /*0x8a92a2*/
      goto LABEL_17; /*0x8a92a2*/
    v16 = TESOutput_PrintLabeledUnsignedInt("-PART", (v12 >> 8) & 0x1F); /*0x8a92b0*/
    v14 = a2[5]; /*0x8a92b5*/
    *(_DWORD *)v24 = v16; /*0x8a92b9*/
    if ( v14 >= a2[4] ) /*0x8a92c6*/
      NiTArray_SetSize(a2, v14 + a2[7]); /*0x8a92d1*/
  }
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v14, v24); /*0x8a92de*/
LABEL_17:
  v24[0] = (*this & 0x4000) != 0; /*0x8a92e3*/
  v17 = TESOutput_PrintLabeledBool("-NOCOL", v24[0]); /*0x8a92f8*/
  v18 = a2[5]; /*0x8a92fd*/
  v19 = a2[4]; /*0x8a9301*/
  *(_DWORD *)v24 = v17; /*0x8a930a*/
  if ( v18 >= v19 ) /*0x8a930e*/
    NiTArray_SetSize(a2, v18 + a2[7]); /*0x8a9319*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v24); /*0x8a9326*/
  v24[0] = (*this & 0x2000) != 0; /*0x8a9333*/
  v20 = TESOutput_PrintLabeledBool("-SCALED", v24[0]); /*0x8a9341*/
  v21 = a2[5]; /*0x8a9346*/
  v22 = a2[4]; /*0x8a934a*/
  *(_DWORD *)v24 = v20; /*0x8a9353*/
  if ( v21 >= v22 ) /*0x8a9357*/
    NiTArray_SetSize(a2, v21 + a2[7]); /*0x8a9362*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v21, v24); /*0x8a9374*/
}
