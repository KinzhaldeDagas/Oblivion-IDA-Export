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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3DE14);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"m_uiNumTargets", v3[2]);
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"m_uiNumVertsPerTarget", v3[3]);
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintString((int)"MorphTargets");
  v13 = v2->end;
  a2 = v12;
  if ( v13 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  result = v3[2];
  v15 = 0;
  if ( result )
  {
    a2 = 0;
    while ( 1 )
    {
      v16 = v15 >= result ? 0 : (char *)a2 + v3[4];
      v17 = TESOutput_PrintLabeledString(v15, (int)"m_pcName", *((_DWORD *)v16 + 1));
      v18 = v2->end;
      v19 = v17;
      if ( v18 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
      if ( v18 < v2->end )
      {
        if ( v19 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v18) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v18) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v18 + 1;
        if ( v19 )
          ++v2->numObjs;
      }
      data = v2->data;
      a2 += 6;
      *((_DWORD *)&data->vtbl + v18) = v19;
      result = *(this + 2);
      if ( ++v15 >= result )
        break;
      v3 = this;
    }
  }
  return result;
}
