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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B3FD90);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertexCount", v3[6]);
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiDataStreamCount", *((_DWORD *)v3 + 4));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = 0;
  if ( *((_DWORD *)v3 + 4) )
  {
    a2 = 0;
    do
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("    DataStream Index", v12);
      v14 = v2->end;
      v15 = v13;
      if ( v14 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
      if ( v14 < v2->end )
      {
        if ( v15 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v14) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v14) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v14 + 1;
        if ( v15 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v14) = v15;
      v3 = this;
      v16 = a2;
      sub_726F90((unsigned __int16 *)((char *)a2 + *((_DWORD *)this + 5)), (unsigned __int16 *)v2);
      v17 = (unsigned int)++v12 < *((_DWORD *)this + 4);
      a2 = v16 + 0xE;
    }
    while ( v17 );
  }
  v18 = TESOutput_PrintLabeledUnsignedInt("m_aDataBlocks.GetSize()", v3[0x13]);
  v19 = v2->end;
  v20 = v18;
  if ( v19 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  result = v2->end;
  if ( v19 < result )
  {
    if ( v20 )
    {
      if ( !*((_DWORD *)&v2->data->vtbl + v19) )
        ++v2->numObjs;
    }
    else
    {
      result = (unsigned int)v2->data;
      if ( *(_DWORD *)(result + 4 * v19) )
        --v2->numObjs;
    }
  }
  else
  {
    v2->end = v19 + 1;
    if ( v20 )
      ++v2->numObjs;
  }
  v22 = 0;
  *((_DWORD *)&v2->data->vtbl + v19) = v20;
  if ( *(this + 0x13) )
  {
    do
    {
      v23 = TESOutput_PrintLabeledUnsignedInt("    DataBlock Index", v22);
      v24 = v2->end;
      v25 = v23;
      if ( v24 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize);
      if ( v24 < v2->end )
      {
        if ( v25 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v24) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v24) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v24 + 1;
        if ( v25 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v24) = v25;
      v26 = *(int **)(*((_DWORD *)this + 8) + 4 * v22);
      if ( v26 )
      {
        sub_727820(v26, (unsigned __int16 *)v2);
      }
      else
      {
        v27 = TESOutput_PrintLabeledSignedInt("        m_uiDataBlockSize", 0);
        v28 = v2->end;
        v29 = v27;
        if ( v28 >= v2->capacity )
          NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize);
        if ( v28 < v2->end )
        {
          if ( v29 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v28) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v28) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v28 + 1;
          if ( v29 )
            ++v2->numObjs;
        }
        *((_DWORD *)&v2->data->vtbl + v28) = v29;
        v30 = TESOutput_PrintLabeledString("        m_pucDataBlock", "NULL");
        v31 = v2->end;
        v32 = v30;
        if ( v31 >= v2->capacity )
          NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize);
        if ( v31 < v2->end )
        {
          if ( v32 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v31) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v31) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v31 + 1;
          if ( v32 )
            ++v2->numObjs;
        }
        *((_DWORD *)&v2->data->vtbl + v31) = v32;
      }
      result = *(this + 0x13);
      ++v22;
    }
    while ( v22 < result );
  }
  return result;
}
