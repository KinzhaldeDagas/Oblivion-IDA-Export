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

  sub_89EEF0(this, a2); /*0x88fa78*/
  v3 = TESOutput_PrintString((char *)MEMORY[0xBA7A20].name); /*0x88fa83*/
  v4 = a2[5]; /*0x88fa88*/
  v5 = a2[4]; /*0x88fa8c*/
  *(_DWORD *)v21 = v3; /*0x88fa95*/
  if ( v4 >= v5 ) /*0x88fa99*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x88faa4*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v21); /*0x88fab1*/
  v6 = TESOutput_PrintLabeledFloat("fHeirGain", *(this + 5)); /*0x88fac2*/
  v7 = a2[5]; /*0x88fac7*/
  v8 = a2[4]; /*0x88facb*/
  *(_DWORD *)v21 = v6; /*0x88fad4*/
  if ( v7 >= v8 ) /*0x88fad8*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x88fae3*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, v21); /*0x88faf0*/
  v9 = TESOutput_PrintLabeledFloat("fVelGain", *(this + 6)); /*0x88fb01*/
  v10 = a2[5]; /*0x88fb06*/
  v11 = a2[4]; /*0x88fb0a*/
  *(_DWORD *)v21 = v9; /*0x88fb13*/
  if ( v10 >= v11 ) /*0x88fb17*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x88fb22*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, v21); /*0x88fb2f*/
  v21[0] = *((_BYTE *)this + 0xD) & 1; /*0x88fb3a*/
  v12 = TESOutput_PrintLabeledBool("bBlendPos", v21[0]); /*0x88fb48*/
  v13 = a2[5]; /*0x88fb4d*/
  *(_DWORD *)v21 = v12; /*0x88fb51*/
  if ( v13 >= a2[4] ) /*0x88fb5e*/
    NiTArray_SetSize(a2, v13 + a2[7]); /*0x88fb69*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, v21); /*0x88fb76*/
  v21[0] = (*(_WORD *)(this + 3) & 0x200) != 0; /*0x88fb85*/
  v14 = TESOutput_PrintLabeledBool("bAlwaysBlend", v21[0]); /*0x88fb93*/
  v15 = a2[5]; /*0x88fb98*/
  v16 = a2[4]; /*0x88fb9c*/
  *(_DWORD *)v21 = v14; /*0x88fba5*/
  if ( v15 >= v16 ) /*0x88fba9*/
    NiTArray_SetSize(a2, v15 + a2[7]); /*0x88fbb4*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v15, v21); /*0x88fbc1*/
  _sprintf(v22, "0x%08X", *((_DWORD *)this + 8)); /*0x88fbd4*/
  v17 = TESOutput_PrintLabeledString("Stored World", v22); /*0x88fbe3*/
  v18 = a2[5]; /*0x88fbe8*/
  v19 = a2[4]; /*0x88fbec*/
  *(_DWORD *)v21 = v17; /*0x88fbf5*/
  if ( v18 >= v19 ) /*0x88fbf9*/
    NiTArray_SetSize(a2, v18 + a2[7]); /*0x88fc04*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v21); /*0x88fc16*/
}
