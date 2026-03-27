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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40188);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", v3[3]);
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  result = NiTArray_SetAt(v2, v8, &a2);
  v11 = 0;
  if ( v3[3] )
  {
    while ( 1 )
    {
      v12 = TESOutput_PrintLabeledString("m_ppcValue[i]", *(const char **)(v3[4] + 4 * v11));
      v13 = v2->end;
      v14 = v12;
      if ( v13 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
      result = v2->end;
      if ( v13 < result )
      {
        if ( v14 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) )
            ++v2->numObjs;
        }
        else
        {
          result = (unsigned int)v2->data;
          if ( *(_DWORD *)(result + 4 * v13) )
            --v2->numObjs;
        }
      }
      else
      {
        v2->end = v13 + 1;
        if ( v14 )
          ++v2->numObjs;
      }
      ++v11;
      *((_DWORD *)&v2->data->vtbl + v13) = v14;
      if ( v11 >= *(this + 3) )
        break;
      v3 = this;
    }
  }
  return result;
}
