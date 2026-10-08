unsigned int __thiscall sub_73C350(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  char *v17; // eax
  unsigned int v18; // ebx
  char *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  char *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // edx
  char *v25; // eax
  unsigned int v26; // ebx
  char *v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  char *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v3 = a2; /*0x73c352*/
  sub_709160(this, a2); /*0x73c35a*/
  v5 = TESOutput_PrintString((char *)stru_B40178.name); /*0x73c365*/
  end = v3->end; /*0x73c36a*/
  capacity = v3->capacity; /*0x73c36e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x73c377*/
  if ( end >= capacity ) /*0x73c37b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73c386*/
  NiTArray_SetAt(v3, end, &a2); /*0x73c393*/
  v8 = sub_711A50(this + 0x37, "m_kModelProjMat"); /*0x73c3a3*/
  v9 = v3->end; /*0x73c3a8*/
  v10 = v3->capacity; /*0x73c3ac*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x73c3b2*/
  if ( v9 >= v10 ) /*0x73c3b6*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x73c3c1*/
  NiTArray_SetAt(v3, v9, &a2); /*0x73c3ce*/
  v11 = sub_707280(this + 0x40, "m_kModelProjTrans"); /*0x73c3de*/
  v12 = v3->end; /*0x73c3e3*/
  v13 = v3->capacity; /*0x73c3e7*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x73c3ed*/
  if ( v12 >= v13 ) /*0x73c3f1*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x73c3fc*/
  NiTArray_SetAt(v3, v12, &a2); /*0x73c409*/
  v14 = sub_73BA20("m_eTextureMode", *((_DWORD *)this + 0x52)); /*0x73c41a*/
  v15 = v3->end; /*0x73c41f*/
  v16 = v3->capacity; /*0x73c423*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x73c42c*/
  if ( v15 >= v16 ) /*0x73c430*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x73c43b*/
  NiTArray_SetAt(v3, v15, &a2); /*0x73c448*/
  v17 = sub_703B20("m_eFilter", *((_DWORD *)this + 0x50)); /*0x73c459*/
  v18 = v3->end; /*0x73c45e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v17; /*0x73c462*/
  if ( v18 >= v3->capacity ) /*0x73c46f*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x73c47a*/
  NiTArray_SetAt(v3, v18, &a2); /*0x73c487*/
  v19 = sub_703A70("m_eClamp", *((_DWORD *)this + 0x51)); /*0x73c498*/
  v20 = v3->end; /*0x73c49d*/
  v21 = v3->capacity; /*0x73c4a1*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v19; /*0x73c4aa*/
  if ( v20 >= v21 ) /*0x73c4ae*/
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize); /*0x73c4b9*/
  NiTArray_SetAt(v3, v20, &a2); /*0x73c4c6*/
  v22 = sub_73BA20("m_eTextureMode", *((_DWORD *)this + 0x52)); /*0x73c4d7*/
  v23 = v3->end; /*0x73c4dc*/
  v24 = v3->capacity; /*0x73c4e0*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v22; /*0x73c4e9*/
  if ( v23 >= v24 ) /*0x73c4ed*/
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize); /*0x73c4f8*/
  NiTArray_SetAt(v3, v23, &a2); /*0x73c505*/
  v25 = sub_73BAD0("m_eCoordMode", *((_DWORD *)this + 0x53)); /*0x73c516*/
  v26 = v3->end; /*0x73c51b*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v25; /*0x73c51f*/
  if ( v26 >= v3->capacity ) /*0x73c52c*/
    NiTArray_SetSize((unsigned __int16 *)v3, v26 + v3->growSize); /*0x73c537*/
  NiTArray_SetAt(v3, v26, &a2); /*0x73c544*/
  v27 = TESOutput_PrintLabeledBool("m_bPlaneEnable", *((_BYTE *)this + 0x150)); /*0x73c556*/
  v28 = v3->end; /*0x73c55b*/
  v29 = v3->capacity; /*0x73c55f*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v27; /*0x73c568*/
  if ( v28 >= v29 ) /*0x73c56c*/
    NiTArray_SetSize((unsigned __int16 *)v3, v28 + v3->growSize); /*0x73c577*/
  NiTArray_SetAt(v3, v28, &a2); /*0x73c584*/
  v30 = sub_716E40(this + 0x55, "m_kModelPlane"); /*0x73c594*/
  v31 = v3->end; /*0x73c599*/
  v32 = v3->capacity; /*0x73c59d*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v30; /*0x73c5a3*/
  if ( v31 >= v32 ) /*0x73c5a7*/
    NiTArray_SetSize((unsigned __int16 *)v3, v31 + v3->growSize); /*0x73c5b2*/
  return NiTArray_SetAt(v3, v31, &a2); /*0x73c5c4*/
}
