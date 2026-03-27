void __userpurge sub_709160(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  float *v3; // edi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  _DWORD *v7; // ebx
  va_list v8; // edi
  char *v9; // eax
  unsigned int v10; // edi
  char *v11; // ebp
  NiTexturingProperty_Map *data; // ecx
  _DWORD *i; // ebx
  va_list v14; // edi
  char *v15; // eax
  unsigned int v16; // edi
  char *v17; // ebp
  NiTexturingProperty_Map *v18; // edx
  size_t v19; // [esp-10h] [ebp-68h]
  size_t v20; // [esp-10h] [ebp-68h]
  char ArgList[4]; // [esp+Ch] [ebp-4Ch] BYREF
  float *v22; // [esp+10h] [ebp-48h]
  char DstBuf[64]; // [esp+14h] [ebp-44h] BYREF

  v3 = this;
  v22 = this;
  sub_7086B0(this, a2, (unsigned __int16 *)a3);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B3FA88);
  end = a3->end;
  capacity = a3->capacity;
  *(_DWORD *)ArgList = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize);
  NiTArray_SetAt(a3, end, ArgList);
  if ( *((_DWORD *)v3 + 0x32) )
  {
    v7 = *((_DWORD **)v3 + 0x30);
    *(_DWORD *)ArgList = 0;
    if ( v7 )
    {
      do
      {
        v8 = (va_list)v7[2];
        HIDWORD(v19) = "affected node[%d]";
        v7 = (_DWORD *)*v7;
        LODWORD(v19) = 0x40;
        sub_6C5D40(v8, DstBuf, v19, *(char **)ArgList);
        v9 = TESOutput_PrintLabeledPointer(DstBuf, (int)v8);
        v10 = a3->end;
        v11 = v9;
        if ( v10 >= a3->capacity )
          NiTArray_SetSize((unsigned __int16 *)a3, v10 + a3->growSize);
        if ( v10 < a3->end )
        {
          if ( v11 )
          {
            if ( !*((_DWORD *)&a3->data->vtbl + v10) )
              ++a3->numObjs;
          }
          else if ( *((_DWORD *)&a3->data->vtbl + v10) )
          {
            --a3->numObjs;
          }
        }
        else
        {
          a3->end = v10 + 1;
          if ( v11 )
            ++a3->numObjs;
        }
        data = a3->data;
        ++*(_DWORD *)ArgList;
        *((_DWORD *)&data->vtbl + v10) = v11;
      }
      while ( v7 );
      v3 = v22;
    }
    for ( i = *((_DWORD **)v3 + 0x34); i; *((_DWORD *)&v18->vtbl + v16) = v17 )
    {
      v14 = (va_list)i[2];
      i = (_DWORD *)*i;
      HIDWORD(v20) = "unaffected node[%d]";
      LODWORD(v20) = 0x40;
      sub_6C5D40(v14, DstBuf, v20, *(char **)ArgList);
      v15 = TESOutput_PrintLabeledPointer(DstBuf, (int)v14);
      v16 = a3->end;
      v17 = v15;
      if ( v16 >= a3->capacity )
        NiTArray_SetSize((unsigned __int16 *)a3, v16 + a3->growSize);
      if ( v16 < a3->end )
      {
        if ( v17 )
        {
          if ( !*((_DWORD *)&a3->data->vtbl + v16) )
            ++a3->numObjs;
        }
        else if ( *((_DWORD *)&a3->data->vtbl + v16) )
        {
          --a3->numObjs;
        }
      }
      else
      {
        a3->end = v16 + 1;
        if ( v17 )
          ++a3->numObjs;
      }
      v18 = a3->data;
      ++*(_DWORD *)ArgList;
    }
  }
}
