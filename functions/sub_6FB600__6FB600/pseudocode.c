int __thiscall sub_6FB600(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  _DWORD *v3; // ebp
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // ebx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int result; // eax
  char *v12; // eax
  unsigned int v13; // edi
  char *v14; // ebx
  int v15; // ebx
  char *v16; // eax
  unsigned int v17; // edi
  char *v18; // ebp
  char *v19; // eax
  unsigned int v20; // edi
  char *v21; // ebp
  char *v22; // eax
  unsigned int v23; // edi
  char *v24; // ebx
  int v25; // [esp+14h] [ebp-10h]
  float v27; // [esp+1Ch] [ebp-8h]
  unsigned int v28; // [esp+20h] [ebp-4h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6fb606*/
  v3 = this; /*0x6fb60b*/
  sub_721730(this, a2); /*0x6fb612*/
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3F4B4); /*0x6fb61d*/
  end = v2->end; /*0x6fb622*/
  capacity = v2->capacity; /*0x6fb626*/
  a2 = v4; /*0x6fb62f*/
  if ( end >= capacity ) /*0x6fb633*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6fb63e*/
  NiTArray_SetAt(v2, end, &a2); /*0x6fb64b*/
  v7 = *((unsigned __int16 *)v3 + 0xC); /*0x6fb650*/
  v28 = v7; /*0x6fb65a*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("iMarks", v7); /*0x6fb65e*/
  v9 = v2->end; /*0x6fb663*/
  v10 = v2->capacity; /*0x6fb667*/
  a2 = v8; /*0x6fb670*/
  if ( v9 >= v10 ) /*0x6fb674*/
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize); /*0x6fb67f*/
  NiTArray_SetAt(v2, v9, &a2); /*0x6fb68c*/
  result = 0; /*0x6fb691*/
  a2 = 0; /*0x6fb695*/
  if ( v7 ) /*0x6fb699*/
  {
    v25 = 0; /*0x6fb69f*/
    while ( 1 ) /*0x6fb6b3*/
    {
      v12 = TESOutput_PrintLabeledUnsignedInt("Mark", (int)a2); /*0x6fb6b3*/
      v13 = v2->end; /*0x6fb6b8*/
      v14 = v12; /*0x6fb6c5*/
      if ( v13 >= v2->capacity ) /*0x6fb6c7*/
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6fb6d2*/
      if ( v13 < v2->end ) /*0x6fb6dd*/
      {
        if ( v14 ) /*0x6fb6f3*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) ) /*0x6fb6f8*/
            ++v2->numObjs; /*0x6fb6fe*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v13) ) /*0x6fb708*/
        {
          --v2->numObjs; /*0x6fb70e*/
        }
      }
      else
      {
        v2->end = v13 + 1; /*0x6fb6e4*/
        if ( v14 ) /*0x6fb6e8*/
          ++v2->numObjs; /*0x6fb6ea*/
      }
      *((_DWORD *)&v2->data->vtbl + v13) = v14; /*0x6fb717*/
      v15 = v25 + v3[4]; /*0x6fb71d*/
      v16 = TESOutput_PrintLabeledUnsignedInt(" Number", *(unsigned __int8 *)(v15 + 0xE)); /*0x6fb72b*/
      v17 = v2->end; /*0x6fb730*/
      v18 = v16; /*0x6fb734*/
      if ( v17 >= v2->capacity ) /*0x6fb73f*/
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x6fb74a*/
      if ( v17 < v2->end ) /*0x6fb755*/
      {
        if ( v18 ) /*0x6fb76b*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v17) ) /*0x6fb770*/
            ++v2->numObjs; /*0x6fb776*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v17) ) /*0x6fb780*/
        {
          --v2->numObjs; /*0x6fb786*/
        }
      }
      else
      {
        v2->end = v17 + 1; /*0x6fb75c*/
        if ( v18 ) /*0x6fb760*/
          ++v2->numObjs; /*0x6fb762*/
      }
      *((_DWORD *)&v2->data->vtbl + v17) = v18; /*0x6fb796*/
      v19 = sub_707280((float *)v15, " Pos"); /*0x6fb799*/
      v20 = v2->end; /*0x6fb79e*/
      v21 = v19; /*0x6fb7a8*/
      if ( v20 >= v2->capacity ) /*0x6fb7aa*/
        NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x6fb7b5*/
      if ( v20 < v2->end ) /*0x6fb7c0*/
      {
        if ( v21 ) /*0x6fb7d6*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v20) ) /*0x6fb7db*/
            ++v2->numObjs; /*0x6fb7e1*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v20) ) /*0x6fb7eb*/
        {
          --v2->numObjs; /*0x6fb7f1*/
        }
      }
      else
      {
        v2->end = v20 + 1; /*0x6fb7c7*/
        if ( v21 ) /*0x6fb7cb*/
          ++v2->numObjs; /*0x6fb7cd*/
      }
      *((_DWORD *)&v2->data->vtbl + v20) = v21; /*0x6fb7fa*/
      v27 = (double)*(unsigned __int16 *)(v15 + 0xC) / dbl_A2FC70; /*0x6fb810*/
      v22 = TESOutput_PrintLabeledFloat(" Heading", v27); /*0x6fb820*/
      v23 = v2->end; /*0x6fb825*/
      v24 = v22; /*0x6fb829*/
      if ( v23 >= v2->capacity ) /*0x6fb834*/
        NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x6fb83f*/
      if ( v23 < v2->end ) /*0x6fb84a*/
      {
        if ( v24 ) /*0x6fb860*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v23) ) /*0x6fb865*/
            ++v2->numObjs; /*0x6fb86b*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v23) ) /*0x6fb875*/
        {
          --v2->numObjs; /*0x6fb87b*/
        }
      }
      else
      {
        v2->end = v23 + 1; /*0x6fb851*/
        if ( v24 ) /*0x6fb855*/
          ++v2->numObjs; /*0x6fb857*/
      }
      v25 += 0x10; /*0x6fb884*/
      *((_DWORD *)&v2->data->vtbl + v23) = v24; /*0x6fb889*/
      result = (int)a2 + 1; /*0x6fb890*/
      a2 = (unsigned __int16 *)((char *)a2 + 1); /*0x6fb897*/
      if ( (unsigned int)a2 >= v28 ) /*0x6fb89b*/
        break; /*0x6fb89b*/
      v3 = this; /*0x6fb6a5*/
    }
  }
  return result; /*0x6fb8a1*/
}
