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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40180);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", *(this + 3));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  for ( i = 0; i < *(this + 3); *((_DWORD *)&v2->data->vtbl + v12) = v11 )
  {
    v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_ppcValue[i]", *(const char **)(*(this + 4) + 4 * i));
    v12 = v2->end;
    v13 = v2->capacity;
    a2 = v11;
    if ( v12 >= v13 )
    {
      NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
      v11 = a2;
    }
    if ( v12 < v2->end )
    {
      if ( v11 )
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v12) )
          ++v2->numObjs;
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v12) )
      {
        --v2->numObjs;
      }
    }
    else
    {
      v2->end = v12 + 1;
      if ( v11 )
        ++v2->numObjs;
    }
    ++i;
  }
  v14 = TESOutput_PrintLabeledSignedInt("m_iIndex", *(this + 5));
  v15 = v2->end;
  v16 = v14;
  if ( v15 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  if ( v15 < v2->end )
  {
    if ( v16 )
    {
      data = v2->data;
      if ( !*((_DWORD *)&data->vtbl + v15) )
      {
        ++v2->numObjs;
        *((_DWORD *)&data->vtbl + v15) = v16;
        return data;
      }
    }
    else if ( *((_DWORD *)&v2->data->vtbl + v15) )
    {
      --v2->numObjs;
    }
  }
  else
  {
    v2->end = v15 + 1;
    if ( v16 )
    {
      result = v2->data;
      ++v2->numObjs;
      *((_DWORD *)&result->vtbl + v15) = v16;
      return result;
    }
  }
  result = v2->data;
  *((_DWORD *)&result->vtbl + v15) = v16;
  return result;
}
