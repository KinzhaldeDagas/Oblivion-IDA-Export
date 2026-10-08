unsigned int __thiscall sub_8B0080(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  _DWORD *v6; // ecx
  char *v7; // eax
  char *v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // edx
  int v11; // eax
  char *v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  int v15; // edi
  int v16; // edi
  char *v17; // eax
  unsigned int v18; // edi
  char v20; // [esp+Fh] [ebp-49h] BYREF
  char v21[4]; // [esp+10h] [ebp-48h] BYREF
  char v22[64]; // [esp+14h] [ebp-44h] BYREF

  sub_89FB70(this, a2); /*0x8b0098*/
  v3 = TESOutput_PrintString((char *)stru_BA7F90.name); /*0x8b00a3*/
  v4 = a2[5]; /*0x8b00a8*/
  v5 = a2[4]; /*0x8b00ac*/
  *(_DWORD *)v21 = v3; /*0x8b00b5*/
  if ( v4 >= v5 ) /*0x8b00b9*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8b00c4*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v21); /*0x8b00d1*/
  if ( this && (v6 = (_DWORD *)*(this + 2)) != 0 ) /*0x8b00e1*/
  {
    v7 = sub_8A63F0(v6, &v20); /*0x8b00e8*/
  }
  else
  {
    v20 = 0; /*0x8b00ef*/
    v7 = &v20; /*0x8b00f3*/
  }
  v21[0] = *v7 != 0; /*0x8b00fd*/
  v8 = TESOutput_PrintLabeledBool("Active", v21[0]); /*0x8b010b*/
  v9 = a2[5]; /*0x8b0110*/
  v10 = a2[4]; /*0x8b0114*/
  *(_DWORD *)v21 = v8; /*0x8b011d*/
  if ( v9 >= v10 ) /*0x8b0121*/
    NiTArray_SetSize(a2, v9 + a2[7]); /*0x8b012c*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, v21); /*0x8b0139*/
  if ( this && (v11 = *(this + 2)) != 0 ) /*0x8b0147*/
    v20 = *(_BYTE *)(v11 + 0x91); /*0x8b014f*/
  else
    v20 = 0; /*0x8b0155*/
  v12 = TESOutput_PrintLabeledBool("Fixed", v20 != 0); /*0x8b0168*/
  v13 = a2[5]; /*0x8b016d*/
  v14 = a2[4]; /*0x8b0171*/
  *(_DWORD *)v21 = v12; /*0x8b017a*/
  if ( v13 >= v14 ) /*0x8b017e*/
    NiTArray_SetSize(a2, v13 + a2[7]); /*0x8b0189*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, v21); /*0x8b0196*/
  if ( this && (v15 = *(this + 2)) != 0 ) /*0x8b01a5*/
    v16 = *(_DWORD *)(v15 + 0x54); /*0x8b01a7*/
  else
    v16 = 0; /*0x8b01ac*/
  _sprintf(v22, "0x%08X", v16); /*0x8b01b9*/
  v17 = TESOutput_PrintLabeledString("SimIsland", v22); /*0x8b01c8*/
  v18 = a2[5]; /*0x8b01cd*/
  *(_DWORD *)v21 = v17; /*0x8b01d1*/
  if ( v18 >= a2[4] ) /*0x8b01de*/
    NiTArray_SetSize(a2, v18 + a2[7]); /*0x8b01e9*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v21); /*0x8b01fb*/
}
