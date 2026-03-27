unsigned int __thiscall sub_898210(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // ebx
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  char *v17; // eax
  unsigned int v18; // ebx
  char v19; // al
  char *v20; // eax
  unsigned int v21; // ebx
  NiAVObject *v22; // eax
  char *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  char v27[4]; // [esp+Ch] [ebp-28h] BYREF
  char v28[32]; // [esp+10h] [ebp-24h] BYREF

  sub_711E60(this, a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7B80);
  v4 = a2[5];
  v5 = a2[4];
  *(_DWORD *)v27 = v3;
  if ( v4 >= v5 )
    NiTArray_SetSize(a2, v4 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v27);
  _sprintf(v28, "0x%8X", *(this + 4));
  v6 = TESOutput_PrintLabeledString("bhkWorldObject", v28);
  v7 = a2[5];
  v8 = a2[4];
  *(_DWORD *)v27 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize(a2, v7 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, v27);
  v27[0] = *(_BYTE *)(this + 3) & 1;
  v9 = TESOutput_PrintLabeledBool("bActive", v27[0]);
  v10 = a2[5];
  *(_DWORD *)v27 = v9;
  if ( v10 >= a2[4] )
    NiTArray_SetSize(a2, v10 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, v27);
  v27[0] = (*(_BYTE *)(this + 3) & 0x40) != 0;
  v11 = TESOutput_PrintLabeledBool("bReset", v27[0]);
  v12 = a2[5];
  v13 = a2[4];
  *(_DWORD *)v27 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize(a2, v12 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, v27);
  v27[0] = (*(_BYTE *)(this + 3) & 4) != 0;
  v14 = TESOutput_PrintLabeledBool("bNotify", v27[0]);
  v15 = a2[5];
  v16 = a2[4];
  *(_DWORD *)v27 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize(a2, v15 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v15, v27);
  v27[0] = (*(_BYTE *)(this + 3) & 8) != 0;
  v17 = TESOutput_PrintLabeledBool("bSetLocal", v27[0]);
  v18 = a2[5];
  *(_DWORD *)v27 = v17;
  if ( v18 >= a2[4] )
    NiTArray_SetSize(a2, v18 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v27);
  v19 = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  v20 = TESOutput_PrintLabeledBool("bKeyframe", v19);
  v21 = a2[5];
  *(_DWORD *)v27 = v20;
  if ( v21 >= a2[4] )
    NiTArray_SetSize(a2, v21 + a2[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v21, v27);
  v27[0] = 0;
  v22 = sub_452A60((Atmosphere *)this);
  if ( v22 )
    v27[0] = v22->members.m_worldTransform.rot.data[2][0] < 0.0;
  v23 = TESOutput_PrintLabeledBool("bFaceDown", v27[0]);
  v24 = a2[5];
  v25 = a2[4];
  *(_DWORD *)v27 = v23;
  if ( v24 >= v25 )
    NiTArray_SetSize(a2, v24 + a2[7]);
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v24, v27);
}
