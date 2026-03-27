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

  sub_89FB70(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7F90);
  v4 = a2[5];
  v5 = a2[4];
  *(_DWORD *)v21 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v21);
  if ( this && (v6 = (_DWORD *)*(this + 2)) != 0 )
  {
    v7 = sub_8A63F0(v6, &v20);
  }
  else
  {
    v20 = 0;
    v7 = &v20;
  }
  v21[0] = *v7 != 0;
  v8 = TESOutput_PrintLabeledBool("Active", v21[0]);
  v9 = a2[5];
  v10 = a2[4];
  *(_DWORD *)v21 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize(a2, v9 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, v21);
  if ( this && (v11 = *(this + 2)) != 0 )
    v20 = *(_BYTE *)(v11 + 0x91);
  else
    v20 = 0;
  v12 = TESOutput_PrintLabeledBool("Fixed", v20 != 0);
  v13 = a2[5];
  v14 = a2[4];
  *(_DWORD *)v21 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize(a2, v13 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v13, v21);
  if ( this && (v15 = *(this + 2)) != 0 )
    v16 = *(_DWORD *)(v15 + 0x54);
  else
    v16 = 0;
  _sprintf(v22, "0x%08X", v16);
  v17 = TESOutput_PrintLabeledString("SimIsland", v22);
  v18 = a2[5];
  *(_DWORD *)v21 = v17;
  if ( v18 >= a2[4] )
    NiTArray_SetSize(a2, v18 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v21);
}
