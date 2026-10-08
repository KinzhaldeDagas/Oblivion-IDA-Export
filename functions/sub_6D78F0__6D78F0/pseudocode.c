// Viewer output reports key count and each ordered record as Time plus Text.
unsigned int __thiscall NiTextKeyExtraData_GetViewerStrings(_DWORD *this, unsigned __int16 *a2)
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
  unsigned __int16 *v11; // ebp
  bool v12; // zf
  va_list v13; // edi
  char *v14; // ebx
  char *v15; // eax
  unsigned int v16; // edi
  char *v17; // ebp
  bool v18; // cf
  char *ArgList; // [esp+14h] [ebp-Ch]
  char *v21; // [esp+1Ch] [ebp-4h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d78f6*/
  v3 = this; /*0x6d78fb*/
  sub_721730(this, a2); /*0x6d7902*/
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3DA08); /*0x6d790d*/
  end = v2->end; /*0x6d7912*/
  capacity = v2->capacity; /*0x6d7916*/
  a2 = v4; /*0x6d791f*/
  if ( end >= capacity ) /*0x6d7923*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d792e*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d793b*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", v3[3]); /*0x6d7949*/
  v8 = v2->end; /*0x6d794e*/
  v9 = v2->capacity; /*0x6d7952*/
  a2 = v7; /*0x6d795b*/
  if ( v8 >= v9 ) /*0x6d795f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d796a*/
  result = NiTArray_SetAt(v2, v8, &a2); /*0x6d7977*/
  v11 = 0; /*0x6d797c*/
  v12 = v3[3] == 0; /*0x6d797e*/
  a2 = 0; /*0x6d7981*/
  if ( !v12 )
  {
    while ( 1 )
    {
      ArgList = TESOutput_PrintLabeledFloat("Time", *(float *)(v3[4] + 8 * (_DWORD)v11)); /*0x6d79c1*/
      v21 = TESOutput_PrintLabeledString("Text", *(const char **)(v3[4] + 8 * (_DWORD)v11 + 4)); /*0x6d79d1*/
      v13 = (va_list)(strlen(v21) + strlen(ArgList) + 4); /*0x6d79fb*/
      v14 = (char *)FormHeapAlloc((unsigned int)v13); /*0x6d7a10*/
      sub_6C5D40(v13, v14, __PAIR64__("%s : %s", (unsigned int)v13), ArgList, v21);
      v15 = TESOutput_PrintLabeledString("TextKey", v14); /*0x6d7a1f*/
      v16 = v2->end; /*0x6d7a24*/
      v17 = v15; /*0x6d7a31*/
      if ( v16 >= v2->capacity ) /*0x6d7a33*/
        NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x6d7a3e*/
      if ( v16 < v2->end ) /*0x6d7a49*/
      {
        if ( v17 ) /*0x6d7a5f*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v16) ) /*0x6d7a64*/
            ++v2->numObjs; /*0x6d7a6a*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v16) ) /*0x6d7a74*/
        {
          --v2->numObjs; /*0x6d7a7a*/
        }
      }
      else
      {
        v2->end = v16 + 1; /*0x6d7a50*/
        if ( v17 ) /*0x6d7a54*/
          ++v2->numObjs; /*0x6d7a56*/
      }
      *((_DWORD *)&v2->data->vtbl + v16) = v17; /*0x6d7a88*/
      FormHeapFree((unsigned int)ArgList); /*0x6d7a8b*/
      FormHeapFree((unsigned int)v21); /*0x6d7a95*/
      FormHeapFree((unsigned int)v14); /*0x6d7a9b*/
      result = (unsigned int)a2 + 1; /*0x6d7aa8*/
      v18 = (unsigned int)a2 + 1 < *(this + 3); /*0x6d7aae*/
      a2 = (unsigned __int16 *)((char *)a2 + 1); /*0x6d7ab1*/
      if ( !v18 ) /*0x6d7ab5*/
        break; /*0x6d7ab5*/
      v11 = a2; /*0x6d7990*/
      v3 = this; /*0x6d7994*/
    }
  }
  return result; /*0x6d7abb*/
}
