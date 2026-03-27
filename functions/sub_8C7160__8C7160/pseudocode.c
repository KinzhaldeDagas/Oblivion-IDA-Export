unsigned int __thiscall sub_8C7160(_DWORD *this, unsigned int i)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  _DWORD *v3; // ebx
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // eax
  unsigned int v8; // ebp
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int result; // eax
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  int v16; // eax
  int *v17; // ebx
  int v18; // eax
  char *v19; // eax
  unsigned int v20; // edi
  char *v21; // ebp
  int v22; // ebx
  char *v23; // eax
  unsigned int v24; // edi
  char *v25; // ebp
  _DWORD *v26; // eax
  bool v27; // zf
  int v28; // eax
  int *v29; // ebp
  int v30; // eax
  char *v31; // eax
  unsigned int v32; // edi
  char *v33; // ebx
  unsigned int v34; // [esp+10h] [ebp-14h]
  unsigned int v35; // [esp+14h] [ebp-10h] BYREF
  unsigned int v36; // [esp+18h] [ebp-Ch]
  _DWORD *v37; // [esp+1Ch] [ebp-8h]
  int v38; // [esp+20h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)i;
  v3 = this;
  v37 = this;
  sub_8CE640(this, (unsigned __int16 *)i);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA8130);
  end = v2->end;
  capacity = v2->capacity;
  i = (unsigned int)v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &i);
  if ( v3 && (v7 = v3[2]) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 0x30);
    i = v8;
  }
  else
  {
    i = 0;
    v8 = 0;
  }
  v36 = v8;
  v9 = TESOutput_PrintLabeledUnsignedInt("Subparts", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  v35 = (unsigned int)v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  result = NiTArray_SetAt(v2, v10, &v35);
  v35 = 0;
  if ( v8 > 5 )
  {
    result = v36 - 5;
    i = 5;
    v8 = 5;
    v35 = v36 - 5;
    if ( v36 - 5 > 3 )
      v35 = 3;
  }
  v34 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("Part", v34);
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
      if ( v3 && (v16 = v3[2]) != 0 )
        v17 = (int *)(*(_DWORD *)(v16 + 0x28) + 8 * v34);
      else
        v17 = &dword_BA8138;
      v18 = *v17 ? (*(unsigned __int16 *)(*v17 + 0x2C) >> 6) & 0x3F : 0;
      v19 = TESOutput_PrintLabeledString("MATERIAL", *(const char **)(4 * v18 + 0xB2E908));
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
      v38 = v17[1];
      sub_8A9100((unsigned int *)&v38, (unsigned __int16 *)v2);
      result = ++v34;
      if ( v34 >= i )
        break;
      v3 = v37;
    }
  }
  for ( i = 0; i < v35; ++i )
  {
    v22 = v36 - i - 1;
    v23 = TESOutput_PrintLabeledUnsignedInt("Part", v22);
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
    v26 = v37;
    v27 = v37 == 0;
    *((_DWORD *)&v2->data->vtbl + v24) = v25;
    if ( v27 || (v28 = v26[2]) == 0 )
      v29 = &dword_BA8138;
    else
      v29 = (int *)(*(_DWORD *)(v28 + 0x28) + 8 * v22);
    if ( *v29 )
      v30 = (*(unsigned __int16 *)(*v29 + 0x2C) >> 6) & 0x3F;
    else
      v30 = 0;
    v31 = TESOutput_PrintLabeledString("MATERIAL", *(const char **)(4 * v30 + 0xB2E908));
    v32 = v2->end;
    v33 = v31;
    if ( v32 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize);
    if ( v32 < v2->end )
    {
      if ( v33 )
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v32) )
          ++v2->numObjs;
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v32) )
      {
        --v2->numObjs;
      }
    }
    else
    {
      v2->end = v32 + 1;
      if ( v33 )
        ++v2->numObjs;
    }
    *((_DWORD *)&v2->data->vtbl + v32) = v33;
    v38 = v29[1];
    sub_8A9100((unsigned int *)&v38, (unsigned __int16 *)v2);
    result = i + 1;
  }
  return result;
}
