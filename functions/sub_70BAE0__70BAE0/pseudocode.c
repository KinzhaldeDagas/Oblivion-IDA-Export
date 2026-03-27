unsigned int __userpurge sub_70BAE0@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int result; // eax
  _DWORD *v11; // ebx
  va_list v12; // edi
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  NiTexturingProperty_Map *data; // ecx
  size_t v17; // [esp-10h] [ebp-64h]
  char ArgList[4]; // [esp+Ch] [ebp-48h] BYREF
  char DstBuf[64]; // [esp+10h] [ebp-44h] BYREF

  sub_7086B0(this, a2, (unsigned __int16 *)a3);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B3FAB0);
  end = a3->end;
  capacity = a3->capacity;
  *(_DWORD *)ArgList = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize);
  NiTArray_SetAt(a3, end, ArgList);
  v7 = TESOutput_PrintLabeledBool((int)"m_bVisual", 0.0 != *(this + 0xB));
  v8 = a3->end;
  v9 = a3->capacity;
  *(_DWORD *)ArgList = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)a3, v8 + a3->growSize);
  result = NiTArray_SetAt(a3, v8, ArgList);
  if ( *((_DWORD *)this + 0x32) )
  {
    v11 = *((_DWORD **)this + 0x30);
    for ( *(_DWORD *)ArgList = 0; v11; *((_DWORD *)&data->vtbl + v14) = v15 )
    {
      v12 = (va_list)v11[2];
      HIDWORD(v17) = "effect[%d]";
      v11 = (_DWORD *)*v11;
      LODWORD(v17) = 0x40;
      sub_6C5D40(v12, DstBuf, v17, *(char **)ArgList);
      v13 = TESOutput_PrintLabeledPointer(DstBuf, (int)v12);
      v14 = a3->end;
      v15 = v13;
      if ( v14 >= a3->capacity )
        NiTArray_SetSize((unsigned __int16 *)a3, v14 + a3->growSize);
      result = a3->end;
      if ( v14 < result )
      {
        if ( v15 )
        {
          if ( !*((_DWORD *)&a3->data->vtbl + v14) )
            ++a3->numObjs;
        }
        else
        {
          result = (unsigned int)a3->data;
          if ( *(_DWORD *)(result + 4 * v14) )
            --a3->numObjs;
        }
      }
      else
      {
        a3->end = v14 + 1;
        if ( v15 )
          ++a3->numObjs;
      }
      data = a3->data;
      ++*(_DWORD *)ArgList;
    }
  }
  return result;
}
