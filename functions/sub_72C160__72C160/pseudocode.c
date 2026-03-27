void __thiscall sub_72C160(int *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v6; // eax
  char *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebp
  int v11; // eax
  char *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  char *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  va_list v19; // edi
  unsigned int v20; // eax
  char *j; // ebx
  const char *v22; // eax
  char *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  size_t v26; // [esp-Ch] [ebp-34h]
  char *i; // [esp+10h] [ebp-18h] BYREF
  char *v28; // [esp+14h] [ebp-14h]
  char DstBuf[12]; // [esp+18h] [ebp-10h] BYREF

  sub_7009A0(this, (unsigned __int16 *)a2);
  v3 = TESOutput_PrintString(*(char **)dword_B3FF1C);
  end = a2->end;
  capacity = a2->capacity;
  i = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(a2, end, &i);
  v6 = *(this + 4);
  if ( v6 )
  {
    v7 = TESOutput_PrintLabeledString("Root Parent", *(const char **)(v6 + 8));
    v8 = a2->end;
    v9 = a2->capacity;
    i = v7;
    if ( v8 >= v9 )
      NiTArray_SetSize((unsigned __int16 *)a2, v8 + a2->growSize);
    NiTArray_SetAt(a2, v8, &i);
  }
  v10 = *(this + 2);
  if ( v10 )
  {
    v11 = *(this + 3);
    if ( v11 )
      v11 = *(_DWORD *)(v11 + 8);
    v12 = TESOutput_PrintLabeledUnsignedInt("Hardware partitions", v11);
    v13 = a2->end;
    v14 = a2->capacity;
    i = v12;
    if ( v13 >= v14 )
      NiTArray_SetSize((unsigned __int16 *)a2, v13 + a2->growSize);
    NiTArray_SetAt(a2, v13, &i);
    v15 = *(_DWORD *)(v10 + 0x40);
    v16 = TESOutput_PrintLabeledUnsignedInt("Bone Count", v15);
    v17 = a2->end;
    v18 = a2->capacity;
    i = v16;
    if ( v17 >= v18 )
      NiTArray_SetSize((unsigned __int16 *)a2, v17 + a2->growSize);
    NiTArray_SetAt(a2, v17, &i);
    v19 = (va_list)FormHeapAlloc((unsigned __int64)v15 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v15);
    v20 = 0;
    for ( i = v19; v20 < v15; ++v20 )
      *(_DWORD *)&v19[4 * v20] = *(_DWORD *)(*(_DWORD *)(*(this + 5) + 4 * v20) + 8);
    unknown_libname_60(v19, v15, 4, sub_72BAE0);
    for ( j = 0; (unsigned int)j < v15; v19 = i )
    {
      HIDWORD(v26) = "  %3d";
      LODWORD(v26) = 0xA;
      sub_6C5D40(v19, DstBuf, v26, j);
      v22 = *(const char **)&v19[4 * (_DWORD)j];
      if ( !v22 )
        v22 = "<noname>";
      v23 = TESOutput_PrintLabeledString(DstBuf, v22);
      v24 = a2->end;
      v25 = a2->capacity;
      v28 = v23;
      if ( v24 >= v25 )
      {
        NiTArray_SetSize((unsigned __int16 *)a2, v24 + a2->growSize);
        v23 = v28;
      }
      if ( v24 < a2->end )
      {
        if ( v23 )
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v24) )
            ++a2->numObjs;
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v24) )
        {
          --a2->numObjs;
        }
      }
      else
      {
        a2->end = v24 + 1;
        if ( v23 )
          ++a2->numObjs;
      }
      ++j;
      *((_DWORD *)&a2->data->vtbl + v24) = v23;
    }
    FormHeapFree((unsigned int)v19);
  }
}
