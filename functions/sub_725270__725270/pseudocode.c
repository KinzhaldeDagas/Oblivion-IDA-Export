char *__thiscall sub_725270(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  va_list v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  char *result; // eax
  char *v13; // ebx
  unsigned int v14; // edi
  NiTexturingProperty_Map *data; // ecx
  float *v16; // edx
  size_t v17; // [esp-Ch] [ebp-5Ch]
  char *v18; // [esp+Ch] [ebp-44h]
  char *ArgList; // [esp+44h] [ebp-Ch]
  char *v20; // [esp+48h] [ebp-8h] BYREF
  float *v21; // [esp+4Ch] [ebp-4h]

  v2 = (va_list)this;
  v18 = *(char **)dword_B3FD78;
  v21 = this;
  v3 = TESOutput_PrintString(v18);
  end = a2->end;
  capacity = a2->capacity;
  v20 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(a2, end, &v20);
  v6 = sub_707280((float *)v2 + 2, "m_kCenter");
  v7 = a2->end;
  v8 = a2->capacity;
  v20 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize);
  NiTArray_SetAt(a2, v7, &v20);
  v9 = sub_707280((float *)v2 + 5, "m_kWorldCenter");
  v10 = a2->end;
  v11 = a2->capacity;
  v20 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize);
  NiTArray_SetAt(a2, v10, &v20);
  result = 0;
  ArgList = 0;
  if ( *((_DWORD *)v2 + 8) )
  {
    v20 = 0;
    while ( 1 )
    {
      v13 = (char *)FormHeapAlloc(0x80u);
      HIDWORD(v17) = "range[%d] = %g   %g";
      LODWORD(v17) = 0x80;
      sub_6C5D40(v2, v13, v17, ArgList, *(float *)&v20[*((_DWORD *)v2 + 9)], *(float *)&v20[*((_DWORD *)v2 + 9) + 4]);
      v14 = a2->end;
      if ( v14 >= a2->capacity )
        NiTArray_SetSize((unsigned __int16 *)a2, v14 + a2->growSize);
      if ( v14 < a2->end )
      {
        if ( v13 )
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v14) )
            ++a2->numObjs;
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v14) )
        {
          --a2->numObjs;
        }
      }
      else
      {
        a2->end = v14 + 1;
        if ( v13 )
          ++a2->numObjs;
      }
      data = a2->data;
      v16 = v21;
      v20 += 0x10;
      result = ArgList + 1;
      *((_DWORD *)&data->vtbl + v14) = v13;
      if ( (unsigned int)++ArgList >= *((_DWORD *)v16 + 8) )
        break;
      v2 = (va_list)v16;
    }
  }
  return result;
}
