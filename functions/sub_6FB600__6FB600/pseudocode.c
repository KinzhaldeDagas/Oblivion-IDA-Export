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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F4B4);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((unsigned __int16 *)v3 + 0xC);
  v28 = v7;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"iMarks", v7);
  v9 = v2->end;
  v10 = v2->capacity;
  a2 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
  NiTArray_SetAt(v2, v9, &a2);
  result = 0;
  a2 = 0;
  if ( v7 )
  {
    v25 = 0;
    while ( 1 )
    {
      v12 = TESOutput_PrintLabeledUnsignedInt((int)"Mark", (int)a2);
      v13 = v2->end;
      v14 = v12;
      if ( v13 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
      if ( v13 < v2->end )
      {
        if ( v14 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v13) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v13) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v13 + 1;
        if ( v14 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v13) = v14;
      v15 = v25 + v3[4];
      v16 = TESOutput_PrintLabeledUnsignedInt((int)" Number", *(unsigned __int8 *)(v15 + 0xE));
      v17 = v2->end;
      v18 = v16;
      if ( v17 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
      if ( v17 < v2->end )
      {
        if ( v18 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v17) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v17) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v17 + 1;
        if ( v18 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v17) = v18;
      v19 = sub_707280((float *)v15, (int)" Pos");
      v20 = v2->end;
      v21 = v19;
      if ( v20 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize);
      if ( v20 < v2->end )
      {
        if ( v21 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v20) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v20) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v20 + 1;
        if ( v21 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v20) = v21;
      v27 = (double)*(unsigned __int16 *)(v15 + 0xC) / dbl_A2FC70;
      v22 = TESOutput_PrintLabeledFloat((int)" Heading", v27);
      v23 = v2->end;
      v24 = v22;
      if ( v23 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize);
      if ( v23 < v2->end )
      {
        if ( v24 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v23) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v23) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v23 + 1;
        if ( v24 )
          ++v2->numObjs;
      }
      v25 += 0x10;
      *((_DWORD *)&v2->data->vtbl + v23) = v24;
      result = (int)a2 + 1;
      a2 = (unsigned __int16 *)((char *)a2 + 1);
      if ( (unsigned int)a2 >= v28 )
        break;
      v3 = this;
    }
  }
  return result;
}
