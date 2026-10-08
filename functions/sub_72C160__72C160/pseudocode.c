void __thiscall sub_72C160(int *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v6; // eax
  char *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebp
  int v11; // eax
  char *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  char *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  va_list v19; // edi
  unsigned int v20; // eax
  char *j; // ebx
  const char *v22; // eax
  char *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  size_t v26; // [esp-Ch] [ebp-34h]
  char *i; // [esp+10h] [ebp-18h] BYREF
  char *v28; // [esp+14h] [ebp-14h]
  char DstBuf[12]; // [esp+18h] [ebp-10h] BYREF

  sub_7009A0(this, (unsigned __int16 *)a2); /*0x72c179*/
  v3 = TESOutput_PrintString((char *)stru_B3FF1C.name); /*0x72c184*/
  end = a2->end; /*0x72c189*/
  capacity = a2->capacity; /*0x72c18d*/
  i = v3; /*0x72c196*/
  if ( end >= capacity ) /*0x72c19a*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x72c1a5*/
  NiTArray_SetAt(a2, end, &i); /*0x72c1b2*/
  v6 = *(this + 4); /*0x72c1b7*/
  if ( v6 ) /*0x72c1bc*/
  {
    v7 = TESOutput_PrintLabeledString("Root Parent", *(const char **)(v6 + 8)); /*0x72c1c7*/
    v8 = a2->end; /*0x72c1cc*/
    v9 = a2->capacity; /*0x72c1d0*/
    i = v7; /*0x72c1d9*/
    if ( v8 >= v9 ) /*0x72c1dd*/
      NiTArray_SetSize((unsigned __int16 *)a2, v8 + a2->growSize); /*0x72c1e8*/
    NiTArray_SetAt(a2, v8, &i); /*0x72c1f5*/
  }
  v10 = *(this + 2); /*0x72c1fa*/
  if ( v10 )
  {
    v11 = *(this + 3); /*0x72c205*/
    if ( v11 ) /*0x72c20a*/
      v11 = *(_DWORD *)(v11 + 8); /*0x72c20c*/
    v12 = TESOutput_PrintLabeledUnsignedInt("Hardware partitions", v11); /*0x72c215*/
    v13 = a2->end; /*0x72c21a*/
    v14 = a2->capacity; /*0x72c21e*/
    i = v12; /*0x72c227*/
    if ( v13 >= v14 ) /*0x72c22b*/
      NiTArray_SetSize((unsigned __int16 *)a2, v13 + a2->growSize); /*0x72c236*/
    NiTArray_SetAt(a2, v13, &i); /*0x72c243*/
    v15 = *(_DWORD *)(v10 + 0x40); /*0x72c248*/
    v16 = TESOutput_PrintLabeledUnsignedInt("Bone Count", v15); /*0x72c251*/
    v17 = a2->end; /*0x72c256*/
    v18 = a2->capacity; /*0x72c25a*/
    i = v16; /*0x72c263*/
    if ( v17 >= v18 ) /*0x72c267*/
      NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize); /*0x72c272*/
    NiTArray_SetAt(a2, v17, &i); /*0x72c27f*/
    v19 = (va_list)FormHeapAlloc((unsigned __int64)v15 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v15);
    v20 = 0; /*0x72c2a1*/
    for ( i = v19; v20 < v15; ++v20 ) /*0x72c2a9*/
      *(_DWORD *)&v19[4 * v20] = *(_DWORD *)(*(_DWORD *)(*(this + 5) + 4 * v20) + 8); /*0x72c2b9*/
    unknown_libname_60((int)v19, (int)v19, v15, 4, (int)sub_72BAE0); /*0x72c2cc*/
    for ( j = 0; (unsigned int)j < v15; v19 = i ) /*0x72c2d8*/
    {
      HIDWORD(v26) = "  %3d"; /*0x72c2e1*/
      LODWORD(v26) = 0xA; /*0x72c2ea*/
      sub_6C5D40(v19, DstBuf, v26, j); /*0x72c2ed*/
      v22 = *(const char **)&v19[4 * (_DWORD)j]; /*0x72c2f2*/
      if ( !v22 ) /*0x72c2fa*/
        v22 = "<noname>"; /*0x72c2fc*/
      v23 = TESOutput_PrintLabeledString(DstBuf, v22); /*0x72c307*/
      v24 = a2->end; /*0x72c30c*/
      v25 = a2->capacity; /*0x72c310*/
      v28 = v23; /*0x72c319*/
      if ( v24 >= v25 ) /*0x72c31d*/
      {
        NiTArray_SetSize((unsigned __int16 *)a2, v24 + a2->growSize); /*0x72c328*/
        v23 = v28; /*0x72c32d*/
      }
      if ( v24 < a2->end ) /*0x72c337*/
      {
        if ( v23 ) /*0x72c34d*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v24) ) /*0x72c352*/
            ++a2->numObjs; /*0x72c358*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v24) ) /*0x72c362*/
        {
          --a2->numObjs; /*0x72c368*/
        }
      }
      else
      {
        a2->end = v24 + 1; /*0x72c33e*/
        if ( v23 ) /*0x72c342*/
          ++a2->numObjs; /*0x72c344*/
      }
      ++j; /*0x72c371*/
      *((_DWORD *)&a2->data->vtbl + v24) = v23; /*0x72c376*/
    }
    FormHeapFree((unsigned int)v19); /*0x72c384*/
  }
}
