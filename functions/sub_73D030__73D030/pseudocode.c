unsigned int __thiscall sub_73D030(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  _DWORD *v3; // edi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int result; // eax
  unsigned int v11; // ebp
  char *v12; // eax
  unsigned int v13; // edi
  char *v14; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73d034*/
  v3 = this; /*0x73d039*/
  sub_721730(this, a2); /*0x73d040*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40188.name); /*0x73d04b*/
  end = v2->end; /*0x73d050*/
  capacity = v2->capacity; /*0x73d054*/
  a2 = v4; /*0x73d05d*/
  if ( end >= capacity ) /*0x73d061*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73d06c*/
  NiTArray_SetAt(v2, end, &a2); /*0x73d079*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", v3[3]); /*0x73d087*/
  v8 = v2->end; /*0x73d08c*/
  v9 = v2->capacity; /*0x73d090*/
  a2 = v7; /*0x73d099*/
  if ( v8 >= v9 ) /*0x73d09d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73d0a8*/
  result = NiTArray_SetAt(v2, v8, &a2); /*0x73d0b5*/
  v11 = 0; /*0x73d0ba*/
  if ( v3[3] ) /*0x73d0bc*/
  {
    while ( 1 ) /*0x73d0d5*/
    {
      v12 = TESOutput_PrintLabeledString("m_ppcValue[i]", *(const char **)(v3[4] + 4 * v11)); /*0x73d0d5*/
      v13 = v2->end; /*0x73d0da*/
      v14 = v12; /*0x73d0e7*/
      if ( v13 >= v2->capacity ) /*0x73d0e9*/
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x73d0f4*/
      result = v2->end; /*0x73d0f9*/
      if ( v13 < result ) /*0x73d0ff*/
      {
        if ( v14 ) /*0x73d115*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) ) /*0x73d11a*/
            ++v2->numObjs; /*0x73d120*/
        }
        else
        {
          result = (unsigned int)v2->data; /*0x73d127*/
          if ( *(_DWORD *)(result + 4 * v13) ) /*0x73d12a*/
            --v2->numObjs; /*0x73d130*/
        }
      }
      else
      {
        v2->end = v13 + 1; /*0x73d106*/
        if ( v14 ) /*0x73d10a*/
          ++v2->numObjs; /*0x73d10c*/
      }
      ++v11; /*0x73d13d*/
      *((_DWORD *)&v2->data->vtbl + v13) = v14; /*0x73d140*/
      if ( v11 >= *(this + 3) ) /*0x73d146*/
        break; /*0x73d146*/
      v3 = this; /*0x73d0c7*/
    }
  }
  return result; /*0x73d14c*/
}
