unsigned int __thiscall sub_740BC0(_DWORD *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x740bc4*/
  v3 = this; /*0x740bc9*/
  sub_721730(this, a2); /*0x740bd0*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B401EC.name); /*0x740bdb*/
  end = v2->end; /*0x740be0*/
  capacity = v2->capacity; /*0x740be4*/
  a2 = v4; /*0x740bed*/
  if ( end >= capacity ) /*0x740bf1*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x740bfc*/
  NiTArray_SetAt(v2, end, &a2); /*0x740c09*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", v3[3]); /*0x740c17*/
  v8 = v2->end; /*0x740c1c*/
  v9 = v2->capacity; /*0x740c20*/
  a2 = v7; /*0x740c29*/
  if ( v8 >= v9 ) /*0x740c2d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x740c38*/
  result = NiTArray_SetAt(v2, v8, &a2); /*0x740c45*/
  v11 = 0; /*0x740c4a*/
  if ( v3[3] ) /*0x740c4c*/
  {
    while ( 1 ) /*0x740c65*/
    {
      v12 = TESOutput_PrintLabeledSignedInt("m_piValue[i]", *(_DWORD *)(v3[4] + 4 * v11)); /*0x740c65*/
      v13 = v2->end; /*0x740c6a*/
      v14 = v12; /*0x740c77*/
      if ( v13 >= v2->capacity ) /*0x740c79*/
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x740c84*/
      result = v2->end; /*0x740c89*/
      if ( v13 < result ) /*0x740c8f*/
      {
        if ( v14 ) /*0x740ca5*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) ) /*0x740caa*/
            ++v2->numObjs; /*0x740cb0*/
        }
        else
        {
          result = (unsigned int)v2->data; /*0x740cb7*/
          if ( *(_DWORD *)(result + 4 * v13) ) /*0x740cba*/
            --v2->numObjs; /*0x740cc0*/
        }
      }
      else
      {
        v2->end = v13 + 1; /*0x740c96*/
        if ( v14 ) /*0x740c9a*/
          ++v2->numObjs; /*0x740c9c*/
      }
      ++v11; /*0x740ccd*/
      *((_DWORD *)&v2->data->vtbl + v13) = v14; /*0x740cd0*/
      if ( v11 >= *(this + 3) ) /*0x740cd6*/
        break; /*0x740cd6*/
      v3 = this; /*0x740c57*/
    }
  }
  return result; /*0x740cdc*/
}
