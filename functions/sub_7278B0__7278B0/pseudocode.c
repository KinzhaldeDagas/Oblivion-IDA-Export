unsigned int __thiscall sub_7278B0(unsigned __int16 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // ebp
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  int v12; // ebx
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  unsigned __int16 *v16; // edi
  bool v17; // cf
  char *v18; // eax
  unsigned int v19; // edi
  char *v20; // ebx
  unsigned int result; // eax
  unsigned int v22; // ebp
  char *v23; // eax
  unsigned int v24; // edi
  char *v25; // ebx
  int *v26; // ecx
  char *v27; // eax
  unsigned int v28; // edi
  char *v29; // ebx
  char *v30; // eax
  unsigned int v31; // edi
  char *v32; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7278b4*/
  v3 = this; /*0x7278b9*/
  sub_7009A0(this, a2); /*0x7278c0*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD90.name); /*0x7278cb*/
  end = v2->end; /*0x7278d0*/
  capacity = v2->capacity; /*0x7278d4*/
  a2 = v4; /*0x7278dd*/
  if ( end >= capacity ) /*0x7278e1*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7278ec*/
  NiTArray_SetAt(v2, end, &a2); /*0x7278f9*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertexCount", v3[6]); /*0x727908*/
  v8 = v2->end; /*0x72790d*/
  v9 = v2->capacity; /*0x727911*/
  a2 = v7; /*0x72791a*/
  if ( v8 >= v9 ) /*0x72791e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x727929*/
  NiTArray_SetAt(v2, v8, &a2); /*0x727936*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiDataStreamCount", *((_DWORD *)v3 + 4)); /*0x727944*/
  v11 = v2->end; /*0x727949*/
  a2 = v10; /*0x72794d*/
  if ( v11 >= v2->capacity ) /*0x72795a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x727965*/
  NiTArray_SetAt(v2, v11, &a2); /*0x727972*/
  v12 = 0; /*0x727977*/
  if ( *((_DWORD *)v3 + 4) ) /*0x727979*/
  {
    a2 = 0; /*0x727982*/
    do /*0x727a1d*/
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("    DataStream Index", v12); /*0x727996*/
      v14 = v2->end; /*0x72799b*/
      v15 = v13; /*0x72799f*/
      if ( v14 >= v2->capacity ) /*0x7279aa*/
        NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x7279b5*/
      if ( v14 < v2->end ) /*0x7279c0*/
      {
        if ( v15 ) /*0x7279d6*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v14) ) /*0x7279db*/
            ++v2->numObjs; /*0x7279e1*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v14) ) /*0x7279eb*/
        {
          --v2->numObjs; /*0x7279f1*/
        }
      }
      else
      {
        v2->end = v14 + 1; /*0x7279c7*/
        if ( v15 ) /*0x7279cb*/
          ++v2->numObjs; /*0x7279cd*/
      }
      *((_DWORD *)&v2->data->vtbl + v14) = v15; /*0x7279fa*/
      v3 = this; /*0x7279fd*/
      v16 = a2; /*0x727a04*/
      sub_726F90((unsigned __int16 *)((char *)a2 + *((_DWORD *)this + 5)), (unsigned __int16 *)v2); /*0x727a0b*/
      v17 = (unsigned int)++v12 < *((_DWORD *)this + 4); /*0x727a16*/
      a2 = v16 + 0xE; /*0x727a19*/
    }
    while ( v17 ); /*0x727a1d*/
  }
  v18 = TESOutput_PrintLabeledUnsignedInt("m_aDataBlocks.GetSize()", v3[0x13]); /*0x727a2d*/
  v19 = v2->end; /*0x727a32*/
  v20 = v18; /*0x727a3f*/
  if ( v19 >= v2->capacity ) /*0x727a41*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x727a4c*/
  result = v2->end; /*0x727a51*/
  if ( v19 < result ) /*0x727a57*/
  {
    if ( v20 ) /*0x727a6d*/
    {
      if ( !*((_DWORD *)&v2->data->vtbl + v19) ) /*0x727a72*/
        ++v2->numObjs; /*0x727a78*/
    }
    else
    {
      result = (unsigned int)v2->data; /*0x727a7f*/
      if ( *(_DWORD *)(result + 4 * v19) ) /*0x727a82*/
        --v2->numObjs; /*0x727a88*/
    }
  }
  else
  {
    v2->end = v19 + 1; /*0x727a5e*/
    if ( v20 ) /*0x727a62*/
      ++v2->numObjs; /*0x727a64*/
  }
  v22 = 0; /*0x727a95*/
  *((_DWORD *)&v2->data->vtbl + v19) = v20; /*0x727a97*/
  if ( *(this + 0x13) ) /*0x727a9a*/
  {
    do /*0x727c16*/
    {
      v23 = TESOutput_PrintLabeledUnsignedInt("    DataBlock Index", v22); /*0x727aaa*/
      v24 = v2->end; /*0x727aaf*/
      v25 = v23; /*0x727ab3*/
      if ( v24 >= v2->capacity ) /*0x727abe*/
        NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize); /*0x727ac9*/
      if ( v24 < v2->end ) /*0x727ad4*/
      {
        if ( v25 ) /*0x727aea*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v24) ) /*0x727aef*/
            ++v2->numObjs; /*0x727af5*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v24) ) /*0x727aff*/
        {
          --v2->numObjs; /*0x727b05*/
        }
      }
      else
      {
        v2->end = v24 + 1; /*0x727adb*/
        if ( v25 ) /*0x727adf*/
          ++v2->numObjs; /*0x727ae1*/
      }
      *((_DWORD *)&v2->data->vtbl + v24) = v25; /*0x727b12*/
      v26 = *(int **)(*((_DWORD *)this + 8) + 4 * v22); /*0x727b18*/
      if ( v26 ) /*0x727b1d*/
      {
        sub_727820(v26, (unsigned __int16 *)v2); /*0x727b20*/
      }
      else
      {
        v27 = TESOutput_PrintLabeledSignedInt("        m_uiDataBlockSize", 0); /*0x727b31*/
        v28 = v2->end; /*0x727b36*/
        v29 = v27; /*0x727b3a*/
        if ( v28 >= v2->capacity ) /*0x727b45*/
          NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x727b50*/
        if ( v28 < v2->end ) /*0x727b5b*/
        {
          if ( v29 ) /*0x727b71*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v28) ) /*0x727b76*/
              ++v2->numObjs; /*0x727b7c*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v28) ) /*0x727b86*/
          {
            --v2->numObjs; /*0x727b8c*/
          }
        }
        else
        {
          v2->end = v28 + 1; /*0x727b62*/
          if ( v29 ) /*0x727b66*/
            ++v2->numObjs; /*0x727b68*/
        }
        *((_DWORD *)&v2->data->vtbl + v28) = v29; /*0x727b9f*/
        v30 = TESOutput_PrintLabeledString("        m_pucDataBlock", "NULL"); /*0x727ba2*/
        v31 = v2->end; /*0x727ba7*/
        v32 = v30; /*0x727bb4*/
        if ( v31 >= v2->capacity ) /*0x727bb6*/
          NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize); /*0x727bc1*/
        if ( v31 < v2->end ) /*0x727bcc*/
        {
          if ( v32 ) /*0x727be2*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v31) ) /*0x727be7*/
              ++v2->numObjs; /*0x727bed*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v31) ) /*0x727bf7*/
          {
            --v2->numObjs; /*0x727bfd*/
          }
        }
        else
        {
          v2->end = v31 + 1; /*0x727bd3*/
          if ( v32 ) /*0x727bd7*/
            ++v2->numObjs; /*0x727bd9*/
        }
        *((_DWORD *)&v2->data->vtbl + v31) = v32; /*0x727c06*/
      }
      result = *(this + 0x13); /*0x727c0d*/
      ++v22; /*0x727c11*/
    }
    while ( v22 < result ); /*0x727c16*/
  }
  return result; /*0x727c1c*/
}
