unsigned int __thiscall sub_730400(_DWORD *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x730404*/
  v3 = this; /*0x730409*/
  sub_721730(this, a2); /*0x730410*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FF90.name); /*0x73041b*/
  end = v2->end; /*0x730420*/
  capacity = v2->capacity; /*0x730424*/
  a2 = v4; /*0x73042d*/
  if ( end >= capacity ) /*0x730431*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73043c*/
  NiTArray_SetAt(v2, end, &a2); /*0x730449*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", v3[3]); /*0x730457*/
  v8 = v2->end; /*0x73045c*/
  v9 = v2->capacity; /*0x730460*/
  a2 = v7; /*0x730469*/
  if ( v8 >= v9 ) /*0x73046d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x730478*/
  result = NiTArray_SetAt(v2, v8, &a2); /*0x730485*/
  v11 = 0; /*0x73048a*/
  if ( v3[3] ) /*0x73048c*/
  {
    while ( 1 ) /*0x7304a8*/
    {
      v12 = TESOutput_PrintLabeledFloat("m_pfValue[i]", *(float *)(v3[4] + 4 * v11)); /*0x7304a8*/
      v13 = v2->end; /*0x7304ad*/
      v14 = v12; /*0x7304b1*/
      if ( v13 >= v2->capacity ) /*0x7304bc*/
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x7304c7*/
      if ( v13 < v2->end ) /*0x7304d2*/
      {
        if ( v14 ) /*0x7304e8*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) ) /*0x7304ed*/
            ++v2->numObjs; /*0x7304f3*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v13) ) /*0x7304fd*/
        {
          --v2->numObjs; /*0x730503*/
        }
      }
      else
      {
        v2->end = v13 + 1; /*0x7304d9*/
        if ( v14 ) /*0x7304dd*/
          ++v2->numObjs; /*0x7304df*/
      }
      result = (unsigned int)v2->data; /*0x730509*/
      ++v11; /*0x730510*/
      *(_DWORD *)(result + 4 * v13) = v14; /*0x730513*/
      if ( v11 >= *(this + 3) ) /*0x730519*/
        break; /*0x730519*/
      v3 = this; /*0x730497*/
    }
  }
  return result; /*0x73051f*/
}
