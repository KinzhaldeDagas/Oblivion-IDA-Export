NiTexturingProperty_Map *__thiscall sub_73CA60(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned int i; // ebx
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // edi
  char *v16; // ebx
  NiTexturingProperty_Map *result; // eax
  NiTexturingProperty_Map *data; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73ca63*/
  sub_721730(this, a2); /*0x73ca6b*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40180.name); /*0x73ca76*/
  end = v2->end; /*0x73ca7b*/
  capacity = v2->capacity; /*0x73ca7f*/
  a2 = v4; /*0x73ca88*/
  if ( end >= capacity ) /*0x73ca8c*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73ca97*/
  NiTArray_SetAt(v2, end, &a2); /*0x73caa4*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", *(this + 3)); /*0x73cab2*/
  v8 = v2->end; /*0x73cab7*/
  v9 = v2->capacity; /*0x73cabb*/
  a2 = v7; /*0x73cac4*/
  if ( v8 >= v9 ) /*0x73cac8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73cad3*/
  NiTArray_SetAt(v2, v8, &a2); /*0x73cae0*/
  for ( i = 0; i < *(this + 3); *((_DWORD *)&v2->data->vtbl + v12) = v11 ) /*0x73cae7*/
  {
    v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_ppcValue[i]", *(const char **)(*(this + 4) + 4 * i)); /*0x73cafc*/
    v12 = v2->end; /*0x73cb01*/
    v13 = v2->capacity; /*0x73cb05*/
    a2 = v11; /*0x73cb0e*/
    if ( v12 >= v13 ) /*0x73cb12*/
    {
      NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x73cb1d*/
      v11 = a2; /*0x73cb22*/
    }
    if ( v12 < v2->end ) /*0x73cb2c*/
    {
      if ( v11 ) /*0x73cb42*/
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v12) ) /*0x73cb47*/
          ++v2->numObjs; /*0x73cb4d*/
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v12) ) /*0x73cb57*/
      {
        --v2->numObjs; /*0x73cb5d*/
      }
    }
    else
    {
      v2->end = v12 + 1; /*0x73cb33*/
      if ( v11 ) /*0x73cb37*/
        ++v2->numObjs; /*0x73cb39*/
    }
    ++i; /*0x73cb66*/
  }
  v14 = TESOutput_PrintLabeledSignedInt("m_iIndex", *(this + 5)); /*0x73cb7e*/
  v15 = v2->end; /*0x73cb83*/
  v16 = v14; /*0x73cb87*/
  if ( v15 >= v2->capacity ) /*0x73cb92*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x73cb9d*/
  if ( v15 < v2->end ) /*0x73cba8*/
  {
    if ( v16 ) /*0x73cbc9*/
    {
      data = v2->data; /*0x73cbcb*/
      if ( !*((_DWORD *)&data->vtbl + v15) ) /*0x73cbce*/
      {
        ++v2->numObjs; /*0x73cbd4*/
        *((_DWORD *)&data->vtbl + v15) = v16; /*0x73cbdb*/
        return data; /*0x73cbe2*/
      }
    }
    else if ( *((_DWORD *)&v2->data->vtbl + v15) ) /*0x73cbe8*/
    {
      --v2->numObjs; /*0x73cbee*/
    }
  }
  else
  {
    v2->end = v15 + 1; /*0x73cbaf*/
    if ( v16 ) /*0x73cbb3*/
    {
      result = v2->data; /*0x73cbb5*/
      ++v2->numObjs; /*0x73cbb8*/
      *((_DWORD *)&result->vtbl + v15) = v16; /*0x73cbbd*/
      return result; /*0x73cbc4*/
    }
  }
  result = v2->data; /*0x73cbf4*/
  *((_DWORD *)&result->vtbl + v15) = v16; /*0x73cbf7*/
  return result; /*0x73cbc0*/
}
