NiTexturingProperty_Map *__thiscall sub_73A780(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  void *v3; // edi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // ebp
  int v19; // edi
  char **v20; // eax
  char *v21; // eax
  unsigned int v22; // edi
  char *v23; // ebx
  NiTexturingProperty_Map *result; // eax

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40148);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVertices", *((_WORD *)v3 + 6));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkVertex", *((_DWORD *)v3 + 4));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkTexture", *((_DWORD *)v3 + 5));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkColor", *((_DWORD *)v3 + 6));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = 8;
  while ( 1 )
  {
    v19 = *(_DWORD *)(*((_DWORD *)v3 + 2) + v18);
    v20 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19);
    v21 = TESOutput_PrintLabeledPointer(*v20, v19);
    v22 = v2->end;
    v23 = v21;
    if ( v22 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
    if ( v22 < v2->end )
    {
      if ( v23 )
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v22) )
          ++v2->numObjs;
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v22) )
      {
        --v2->numObjs;
      }
    }
    else
    {
      v2->end = v22 + 1;
      if ( v23 )
        ++v2->numObjs;
    }
    result = v2->data;
    v18 += 4;
    *((_DWORD *)&result->vtbl + v22) = v23;
    if ( v18 >= 0x30 )
      break;
    v3 = this;
  }
  return result;
}
