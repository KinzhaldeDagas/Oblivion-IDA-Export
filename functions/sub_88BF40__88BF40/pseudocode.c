unsigned int __thiscall sub_88BF40(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 *v20; // eax
  unsigned int v21; // edi
  unsigned __int16 *v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // edx
  unsigned __int16 *v28; // eax
  unsigned int v29; // edi
  unsigned __int16 *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x88bf42*/
  sub_89D820(this, a2); /*0x88bf4a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7938.name); /*0x88bf55*/
  end = v2->end; /*0x88bf5a*/
  capacity = v2->capacity; /*0x88bf5e*/
  a2 = v4; /*0x88bf67*/
  if ( end >= capacity ) /*0x88bf6b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x88bf76*/
  NiTArray_SetAt(v2, end, &a2); /*0x88bf83*/
  LOBYTE(a2) = *((_BYTE *)this + 0x19); /*0x88bf8b*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Enabled", (char)a2); /*0x88bf99*/
  v8 = v2->end; /*0x88bf9e*/
  a2 = v7; /*0x88bfa2*/
  if ( v8 >= v2->capacity ) /*0x88bfaf*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x88bfba*/
  NiTArray_SetAt(v2, v8, &a2); /*0x88bfc7*/
  LOBYTE(a2) = *(this + 5) != 0; /*0x88bfd3*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Vis Debug", (char)a2); /*0x88bfe1*/
  v10 = v2->end; /*0x88bfe6*/
  v11 = v2->capacity; /*0x88bfea*/
  a2 = v9; /*0x88bff3*/
  if ( v10 >= v11 ) /*0x88bff7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x88c002*/
  NiTArray_SetAt(v2, v10, &a2); /*0x88c00f*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Worlds", unk_BA7900); /*0x88c020*/
  v13 = v2->end; /*0x88c025*/
  a2 = v12; /*0x88c029*/
  if ( v13 >= v2->capacity ) /*0x88c036*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x88c041*/
  NiTArray_SetAt(v2, v13, &a2); /*0x88c04e*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Actions", unk_BA7D00); /*0x88c05e*/
  v15 = v2->end; /*0x88c063*/
  v16 = v2->capacity; /*0x88c067*/
  a2 = v14; /*0x88c070*/
  if ( v15 >= v16 ) /*0x88c074*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x88c07f*/
  NiTArray_SetAt(v2, v15, &a2); /*0x88c08c*/
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Contraints", unk_BA7D4C); /*0x88c09d*/
  v18 = v2->end; /*0x88c0a2*/
  v19 = v2->capacity; /*0x88c0a6*/
  a2 = v17; /*0x88c0af*/
  if ( v18 >= v19 ) /*0x88c0b3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x88c0be*/
  NiTArray_SetAt(v2, v18, &a2); /*0x88c0cb*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Entities", unk_BA7F8C); /*0x88c0dc*/
  v21 = v2->end; /*0x88c0e1*/
  a2 = v20; /*0x88c0e5*/
  if ( v21 >= v2->capacity ) /*0x88c0f2*/
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize); /*0x88c0fd*/
  NiTArray_SetAt(v2, v21, &a2); /*0x88c10a*/
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("RigidBodies", unk_BA7D80); /*0x88c11a*/
  v23 = v2->end; /*0x88c11f*/
  v24 = v2->capacity; /*0x88c123*/
  a2 = v22; /*0x88c12c*/
  if ( v23 >= v24 ) /*0x88c130*/
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x88c13b*/
  NiTArray_SetAt(v2, v23, &a2); /*0x88c148*/
  v25 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Shapes", unk_BA7D70); /*0x88c159*/
  v26 = v2->end; /*0x88c15e*/
  v27 = v2->capacity; /*0x88c162*/
  a2 = v25; /*0x88c16b*/
  if ( v26 >= v27 ) /*0x88c16f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize); /*0x88c17a*/
  NiTArray_SetAt(v2, v26, &a2); /*0x88c187*/
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Phantoms", unk_BA7F5C); /*0x88c198*/
  v29 = v2->end; /*0x88c19d*/
  a2 = v28; /*0x88c1a1*/
  if ( v29 >= v2->capacity ) /*0x88c1ae*/
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize); /*0x88c1b9*/
  NiTArray_SetAt(v2, v29, &a2); /*0x88c1c6*/
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("MoppBVTreeShapes", unk_BA80F4); /*0x88c1d6*/
  v31 = v2->end; /*0x88c1db*/
  v32 = v2->capacity; /*0x88c1df*/
  a2 = v30; /*0x88c1e8*/
  if ( v31 >= v32 ) /*0x88c1ec*/
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize); /*0x88c1f7*/
  return NiTArray_SetAt(v2, v31, &a2); /*0x88c209*/
}
