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
  NiAVObject *PointerAtOffset08; // eax
  char *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  char v27[4]; // [esp+Ch] [ebp-28h] BYREF
  char v28[32]; // [esp+10h] [ebp-24h] BYREF

  sub_711E60(this, a2); /*0x898228*/
  v3 = TESOutput_PrintString((char *)stru_BA7B80.name); /*0x898233*/
  v4 = a2[5]; /*0x898238*/
  v5 = a2[4]; /*0x89823c*/
  *(_DWORD *)v27 = v3; /*0x898245*/
  if ( v4 >= v5 ) /*0x898249*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x898254*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, v27); /*0x898261*/
  _sprintf(v28, "0x%8X", *(this + 4)); /*0x898274*/
  v6 = TESOutput_PrintLabeledString("bhkWorldObject", v28); /*0x898283*/
  v7 = a2[5]; /*0x898288*/
  v8 = a2[4]; /*0x89828c*/
  *(_DWORD *)v27 = v6; /*0x898295*/
  if ( v7 >= v8 ) /*0x898299*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x8982a4*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, v27); /*0x8982b1*/
  v27[0] = *(_BYTE *)(this + 3) & 1; /*0x8982bc*/
  v9 = TESOutput_PrintLabeledBool("bActive", v27[0]); /*0x8982ca*/
  v10 = a2[5]; /*0x8982cf*/
  *(_DWORD *)v27 = v9; /*0x8982d3*/
  if ( v10 >= a2[4] ) /*0x8982e0*/
    NiTArray_SetSize(a2, v10 + a2[7]); /*0x8982eb*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v10, v27); /*0x8982f8*/
  v27[0] = (*(_BYTE *)(this + 3) & 0x40) != 0; /*0x898305*/
  v11 = TESOutput_PrintLabeledBool("bReset", v27[0]); /*0x898313*/
  v12 = a2[5]; /*0x898318*/
  v13 = a2[4]; /*0x89831c*/
  *(_DWORD *)v27 = v11; /*0x898325*/
  if ( v12 >= v13 ) /*0x898329*/
    NiTArray_SetSize(a2, v12 + a2[7]); /*0x898334*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v12, v27); /*0x898341*/
  v27[0] = (*(_BYTE *)(this + 3) & 4) != 0; /*0x89834f*/
  v14 = TESOutput_PrintLabeledBool("bNotify", v27[0]); /*0x89835d*/
  v15 = a2[5]; /*0x898362*/
  v16 = a2[4]; /*0x898366*/
  *(_DWORD *)v27 = v14; /*0x89836f*/
  if ( v15 >= v16 ) /*0x898373*/
    NiTArray_SetSize(a2, v15 + a2[7]); /*0x89837e*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v15, v27); /*0x89838b*/
  v27[0] = (*(_BYTE *)(this + 3) & 8) != 0; /*0x898399*/
  v17 = TESOutput_PrintLabeledBool("bSetLocal", v27[0]); /*0x8983a7*/
  v18 = a2[5]; /*0x8983ac*/
  *(_DWORD *)v27 = v17; /*0x8983b0*/
  if ( v18 >= a2[4] ) /*0x8983bd*/
    NiTArray_SetSize(a2, v18 + a2[7]); /*0x8983c8*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v18, v27); /*0x8983d5*/
  v19 = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x8983e1*/
  v20 = TESOutput_PrintLabeledBool("bKeyframe", v19); /*0x8983e9*/
  v21 = a2[5]; /*0x8983ee*/
  *(_DWORD *)v27 = v20; /*0x8983f2*/
  if ( v21 >= a2[4] ) /*0x8983ff*/
    NiTArray_SetSize(a2, v21 + a2[7]); /*0x89840a*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v21, v27); /*0x898417*/
  v27[0] = 0; /*0x898420*/
  PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x898424*/
  if ( PointerAtOffset08 ) /*0x89842b*/
    v27[0] = PointerAtOffset08->members.m_worldTransform.rot.data[2][0] < 0.0; /*0x89843e*/
  v23 = TESOutput_PrintLabeledBool("bFaceDown", v27[0]); /*0x89844c*/
  v24 = a2[5]; /*0x898451*/
  v25 = a2[4]; /*0x898455*/
  *(_DWORD *)v27 = v23; /*0x89845e*/
  if ( v24 >= v25 ) /*0x898462*/
    NiTArray_SetSize(a2, v24 + a2[7]); /*0x89846d*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v24, v27); /*0x89847f*/
}
