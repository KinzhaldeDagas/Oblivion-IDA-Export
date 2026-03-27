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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B3FE04);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertices", *((_WORD *)this + 4));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkVertex", *((_DWORD *)this + 7));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkNormal", *((_DWORD *)this + 8));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("NormalBinormalTangent", *((_WORD *)this + 0x16) & 0xF000);
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = (unsigned __int16 *)sub_72A040((float *)this + 3, (int)"m_kBound");
  v19 = v2->end;
  v20 = v2->capacity;
  a2 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkColor", *((_DWORD *)this + 9));
  v22 = v2->end;
  v23 = v2->capacity;
  a2 = v21;
  if ( v22 >= v23 )
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
  NiTArray_SetAt(v2, v22, &a2);
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Num Texture Sets", *((_BYTE *)this + 0x2C) & 0x3F);
  v25 = v2->end;
  v26 = v2->capacity;
  a2 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  NiTArray_SetAt(v2, v25, &a2);
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkTexture", *((_DWORD *)this + 0xA));
  v28 = v2->end;
  a2 = v27;
  if ( v28 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize);
  NiTArray_SetAt(v2, v28, &a2);
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usDirtyFlags", *((_WORD *)this + 0x17));
  v30 = v2->end;
  v31 = v2->capacity;
  a2 = v29;
  if ( v30 >= v31 )
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize);
  NiTArray_SetAt(v2, v30, &a2);
  v32 = (unsigned __int16 *)sub_70FA00("m_ucKeepFlags", *((_BYTE *)this + 0x30));
  v33 = v2->end;
  v34 = v2->capacity;
  a2 = v32;
  if ( v33 >= v34 )
    NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize);
  NiTArray_SetAt(v2, v33, &a2);
  v35 = (unsigned __int16 *)sub_70FA00("m_ucCompressFlags", *((_BYTE *)this + 0x31));
  v36 = v2->end;
  a2 = v35;
  if ( v36 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v36 + v2->growSize);
  NiTArray_SetAt(v2, v36, &a2);
  v37 = *((_DWORD *)this + 0xD);
  if ( v37 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v37 + 0x30))(v37, v2);
  v39 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_spAdditionalGeomData", 0);
  v40 = v2->end;
  a2 = v39;
  if ( v40 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v40 + v2->growSize);
  return NiTArray_SetAt(v2, v40, &a2);
}
