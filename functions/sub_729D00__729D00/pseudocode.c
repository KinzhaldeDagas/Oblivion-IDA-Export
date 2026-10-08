unsigned int __thiscall sub_729D00(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned __int16 *v27; // eax
  unsigned int v28; // ebx
  unsigned __int16 *v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  unsigned __int16 *v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // edx
  unsigned __int16 *v35; // eax
  unsigned int v36; // ebx
  int v37; // ecx
  unsigned __int16 *v39; // eax
  unsigned int v40; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x729d02*/
  sub_7009A0(this, a2); /*0x729d0a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FE04.name); /*0x729d15*/
  end = v2->end; /*0x729d1a*/
  capacity = v2->capacity; /*0x729d1e*/
  a2 = v4; /*0x729d27*/
  if ( end >= capacity ) /*0x729d2b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x729d36*/
  NiTArray_SetAt(v2, end, &a2); /*0x729d43*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertices", *((_WORD *)this + 4)); /*0x729d52*/
  v8 = v2->end; /*0x729d57*/
  v9 = v2->capacity; /*0x729d5b*/
  a2 = v7; /*0x729d64*/
  if ( v8 >= v9 ) /*0x729d68*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x729d73*/
  NiTArray_SetAt(v2, v8, &a2); /*0x729d80*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkVertex", *((_DWORD *)this + 7)); /*0x729d8e*/
  v11 = v2->end; /*0x729d93*/
  a2 = v10; /*0x729d97*/
  if ( v11 >= v2->capacity ) /*0x729da4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x729daf*/
  NiTArray_SetAt(v2, v11, &a2); /*0x729dbc*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkNormal", *((_DWORD *)this + 8)); /*0x729dca*/
  v13 = v2->end; /*0x729dcf*/
  v14 = v2->capacity; /*0x729dd3*/
  a2 = v12; /*0x729ddc*/
  if ( v13 >= v14 ) /*0x729de0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x729deb*/
  NiTArray_SetAt(v2, v13, &a2); /*0x729df8*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("NormalBinormalTangent", *((_WORD *)this + 0x16) & 0xF000); /*0x729e0c*/
  v16 = v2->end; /*0x729e11*/
  v17 = v2->capacity; /*0x729e15*/
  a2 = v15; /*0x729e1e*/
  if ( v16 >= v17 ) /*0x729e22*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x729e2d*/
  NiTArray_SetAt(v2, v16, &a2); /*0x729e3a*/
  v18 = (unsigned __int16 *)sub_72A040((float *)this + 3, "m_kBound"); /*0x729e47*/
  v19 = v2->end; /*0x729e4c*/
  v20 = v2->capacity; /*0x729e50*/
  a2 = v18; /*0x729e56*/
  if ( v19 >= v20 ) /*0x729e5a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x729e65*/
  NiTArray_SetAt(v2, v19, &a2); /*0x729e72*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkColor", *((_DWORD *)this + 9)); /*0x729e80*/
  v22 = v2->end; /*0x729e85*/
  v23 = v2->capacity; /*0x729e89*/
  a2 = v21; /*0x729e92*/
  if ( v22 >= v23 ) /*0x729e96*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x729ea1*/
  NiTArray_SetAt(v2, v22, &a2); /*0x729eae*/
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Num Texture Sets", *((_BYTE *)this + 0x2C) & 0x3F); /*0x729ec0*/
  v25 = v2->end; /*0x729ec5*/
  v26 = v2->capacity; /*0x729ec9*/
  a2 = v24; /*0x729ed2*/
  if ( v25 >= v26 ) /*0x729ed6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x729ee1*/
  NiTArray_SetAt(v2, v25, &a2); /*0x729eee*/
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkTexture", *((_DWORD *)this + 0xA)); /*0x729efc*/
  v28 = v2->end; /*0x729f01*/
  a2 = v27; /*0x729f05*/
  if ( v28 >= v2->capacity ) /*0x729f12*/
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x729f1d*/
  NiTArray_SetAt(v2, v28, &a2); /*0x729f2a*/
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usDirtyFlags", *((_WORD *)this + 0x17)); /*0x729f39*/
  v30 = v2->end; /*0x729f3e*/
  v31 = v2->capacity; /*0x729f42*/
  a2 = v29; /*0x729f4b*/
  if ( v30 >= v31 ) /*0x729f4f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize); /*0x729f5a*/
  NiTArray_SetAt(v2, v30, &a2); /*0x729f67*/
  v32 = (unsigned __int16 *)sub_70FA00("m_ucKeepFlags", *((_BYTE *)this + 0x30)); /*0x729f76*/
  v33 = v2->end; /*0x729f7b*/
  v34 = v2->capacity; /*0x729f7f*/
  a2 = v32; /*0x729f88*/
  if ( v33 >= v34 ) /*0x729f8c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize); /*0x729f97*/
  NiTArray_SetAt(v2, v33, &a2); /*0x729fa4*/
  v35 = (unsigned __int16 *)sub_70FA00("m_ucCompressFlags", *((_BYTE *)this + 0x31)); /*0x729fb3*/
  v36 = v2->end; /*0x729fb8*/
  a2 = v35; /*0x729fbc*/
  if ( v36 >= v2->capacity ) /*0x729fc9*/
    NiTArray_SetSize((unsigned __int16 *)v2, v36 + v2->growSize); /*0x729fd4*/
  NiTArray_SetAt(v2, v36, &a2); /*0x729fe1*/
  v37 = *((_DWORD *)this + 0xD); /*0x729fe6*/
  if ( v37 ) /*0x729feb*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v37 + 0x30))(v37, v2); /*0x729ff3*/
  v39 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_spAdditionalGeomData", 0); /*0x72a002*/
  v40 = v2->end; /*0x72a007*/
  a2 = v39; /*0x72a00b*/
  if ( v40 >= v2->capacity ) /*0x72a018*/
    NiTArray_SetSize((unsigned __int16 *)v2, v40 + v2->growSize); /*0x72a023*/
  return NiTArray_SetAt(v2, v40, &a2); /*0x729ff5*/
}
