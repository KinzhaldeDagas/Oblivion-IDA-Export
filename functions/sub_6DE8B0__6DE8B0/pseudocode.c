unsigned int __thiscall sub_6DE8B0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  int *v3; // ebx
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int result; // eax
  unsigned int v15; // ebp
  char *v16; // eax
  char *v17; // eax
  unsigned int v18; // edi
  char *v19; // ebx
  NiTexturingProperty_Map *data; // eax

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6de8b4*/
  v3 = this; /*0x6de8b9*/
  sub_7009A0(this, a2); /*0x6de8c0*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DE14.name); /*0x6de8cb*/
  end = v2->end; /*0x6de8d0*/
  capacity = v2->capacity; /*0x6de8d4*/
  a2 = v4; /*0x6de8dd*/
  if ( end >= capacity ) /*0x6de8e1*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6de8ec*/
  NiTArray_SetAt(v2, end, &a2); /*0x6de8f9*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumTargets", v3[2]); /*0x6de907*/
  v8 = v2->end; /*0x6de90c*/
  v9 = v2->capacity; /*0x6de910*/
  a2 = v7; /*0x6de919*/
  if ( v8 >= v9 ) /*0x6de91d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6de928*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6de935*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumVertsPerTarget", v3[3]); /*0x6de943*/
  v11 = v2->end; /*0x6de948*/
  a2 = v10; /*0x6de94c*/
  if ( v11 >= v2->capacity ) /*0x6de959*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6de964*/
  NiTArray_SetAt(v2, v11, &a2); /*0x6de971*/
  v12 = (unsigned __int16 *)TESOutput_PrintString("MorphTargets"); /*0x6de97b*/
  v13 = v2->end; /*0x6de980*/
  a2 = v12; /*0x6de984*/
  if ( v13 >= v2->capacity ) /*0x6de991*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6de99c*/
  NiTArray_SetAt(v2, v13, &a2); /*0x6de9a9*/
  result = v3[2]; /*0x6de9ae*/
  v15 = 0; /*0x6de9b1*/
  if ( result )
  {
    a2 = 0; /*0x6de9bb*/
    while ( 1 )
    {
      v16 = v15 >= result ? 0 : (char *)a2 + v3[4];
      v17 = TESOutput_PrintLabeledString("m_pcName", *((const char **)v16 + 1)); /*0x6de9db*/
      v18 = v2->end; /*0x6de9e0*/
      v19 = v17; /*0x6de9e4*/
      if ( v18 >= v2->capacity ) /*0x6de9ef*/
        NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x6de9fa*/
      if ( v18 < v2->end ) /*0x6dea05*/
      {
        if ( v19 ) /*0x6dea1b*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v18) ) /*0x6dea20*/
            ++v2->numObjs; /*0x6dea26*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v18) ) /*0x6dea30*/
        {
          --v2->numObjs; /*0x6dea36*/
        }
      }
      else
      {
        v2->end = v18 + 1; /*0x6dea0c*/
        if ( v19 ) /*0x6dea10*/
          ++v2->numObjs; /*0x6dea12*/
      }
      data = v2->data; /*0x6dea3c*/
      a2 += 6; /*0x6dea43*/
      *((_DWORD *)&data->vtbl + v18) = v19; /*0x6dea48*/
      result = *(this + 2); /*0x6dea4b*/
      if ( ++v15 >= result ) /*0x6dea53*/
        break; /*0x6dea53*/
      v3 = this; /*0x6de9c1*/
    }
  }
  return result; /*0x6dea59*/
}
