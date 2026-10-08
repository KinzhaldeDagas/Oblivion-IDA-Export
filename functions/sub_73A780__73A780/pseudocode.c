NiTexturingProperty_Map *__thiscall sub_73A780(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  void *v3; // edi
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
  unsigned int v17; // edx
  unsigned int v18; // ebp
  int v19; // edi
  char **v20; // eax
  char *v21; // eax
  unsigned int v22; // edi
  char *v23; // ebx
  NiTexturingProperty_Map *result; // eax

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73a784*/
  v3 = this; /*0x73a789*/
  sub_7009A0(this, a2); /*0x73a790*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40148.name); /*0x73a79b*/
  end = v2->end; /*0x73a7a0*/
  capacity = v2->capacity; /*0x73a7a4*/
  a2 = v4; /*0x73a7ad*/
  if ( end >= capacity ) /*0x73a7b1*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73a7bc*/
  NiTArray_SetAt(v2, end, &a2); /*0x73a7c9*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertices", *((_WORD *)v3 + 6)); /*0x73a7d8*/
  v8 = v2->end; /*0x73a7dd*/
  v9 = v2->capacity; /*0x73a7e1*/
  a2 = v7; /*0x73a7ea*/
  if ( v8 >= v9 ) /*0x73a7ee*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73a7f9*/
  NiTArray_SetAt(v2, v8, &a2); /*0x73a806*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkVertex", *((_DWORD *)v3 + 4)); /*0x73a814*/
  v11 = v2->end; /*0x73a819*/
  a2 = v10; /*0x73a81d*/
  if ( v11 >= v2->capacity ) /*0x73a82a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x73a835*/
  NiTArray_SetAt(v2, v11, &a2); /*0x73a842*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkTexture", *((_DWORD *)v3 + 5)); /*0x73a850*/
  v13 = v2->end; /*0x73a855*/
  v14 = v2->capacity; /*0x73a859*/
  a2 = v12; /*0x73a862*/
  if ( v13 >= v14 ) /*0x73a866*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x73a871*/
  NiTArray_SetAt(v2, v13, &a2); /*0x73a87e*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkColor", *((_DWORD *)v3 + 6)); /*0x73a88c*/
  v16 = v2->end; /*0x73a891*/
  v17 = v2->capacity; /*0x73a895*/
  a2 = v15; /*0x73a89e*/
  if ( v16 >= v17 ) /*0x73a8a2*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x73a8ad*/
  NiTArray_SetAt(v2, v16, &a2); /*0x73a8ba*/
  v18 = 8; /*0x73a8bf*/
  while ( 1 ) /*0x73a8cd*/
  {
    v19 = *(_DWORD *)(*((_DWORD *)v3 + 2) + v18); /*0x73a8cd*/
    v20 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19); /*0x73a8d7*/
    v21 = TESOutput_PrintLabeledPointer(*v20, v19); /*0x73a8dd*/
    v22 = v2->end; /*0x73a8e2*/
    v23 = v21; /*0x73a8e6*/
    if ( v22 >= v2->capacity ) /*0x73a8f1*/
      NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x73a8fc*/
    if ( v22 < v2->end ) /*0x73a907*/
    {
      if ( v23 ) /*0x73a91d*/
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v22) ) /*0x73a922*/
          ++v2->numObjs; /*0x73a928*/
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v22) ) /*0x73a932*/
      {
        --v2->numObjs; /*0x73a938*/
      }
    }
    else
    {
      v2->end = v22 + 1; /*0x73a90e*/
      if ( v23 ) /*0x73a912*/
        ++v2->numObjs; /*0x73a914*/
    }
    result = v2->data; /*0x73a93e*/
    v18 += 4; /*0x73a941*/
    *((_DWORD *)&result->vtbl + v22) = v23; /*0x73a947*/
    if ( v18 >= 0x30 ) /*0x73a94a*/
      break; /*0x73a94a*/
    v3 = this; /*0x73a8c6*/
  }
  return result; /*0x73a950*/
}
