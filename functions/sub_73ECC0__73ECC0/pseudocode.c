char *__thiscall sub_73ECC0(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char *result; // eax
  va_list v13; // edi
  bool v14; // zf
  char *v15; // ebx
  unsigned int v16; // edi
  float *v17; // ecx
  size_t v19; // [esp-Ch] [ebp-54h]
  char *v20; // [esp+4h] [ebp-44h]
  char *v21; // [esp+40h] [ebp-8h] BYREF
  float *v22; // [esp+44h] [ebp-4h]

  v20 = *(char **)dword_B401C0;
  v22 = this;
  v3 = TESOutput_PrintString(v20);
  end = a2->end;
  capacity = a2->capacity;
  v21 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(a2, end, &v21);
  v6 = sub_72A040(this + 2, "Bound");
  v7 = a2->end;
  v8 = a2->capacity;
  v21 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize);
  NiTArray_SetAt(a2, v7, &v21);
  v9 = sub_72A040(this + 6, "World Bound");
  v10 = a2->end;
  v11 = a2->capacity;
  v21 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize);
  result = (char *)NiTArray_SetAt(a2, v10, &v21);
  v13 = 0;
  v14 = *((_DWORD *)this + 0xA) == 0;
  v21 = 0;
  if ( !v14 )
  {
    while ( 1 )
    {
      HIDWORD(v19) = "Proportion[%d] = %g";
      v15 = (char *)FormHeapAlloc(0x80u);
      LODWORD(v19) = 0x80;
      sub_6C5D40(v13, v15, v19, v13, *(float *)(*((_DWORD *)v22 + 0xB) + 4 * (_DWORD)v13));
      v16 = a2->end;
      if ( v16 >= a2->capacity )
        NiTArray_SetSize((unsigned __int16 *)a2, v16 + a2->growSize);
      if ( v16 < a2->end )
      {
        if ( v15 )
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v16) )
            ++a2->numObjs;
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v16) )
        {
          --a2->numObjs;
        }
      }
      else
      {
        a2->end = v16 + 1;
        if ( v15 )
          ++a2->numObjs;
      }
      v17 = v22;
      *((_DWORD *)&a2->data->vtbl + v16) = v15;
      result = v21 + 1;
      if ( (unsigned int)++v21 >= *((_DWORD *)v17 + 0xA) )
        break;
      v13 = v21;
    }
  }
  return result;
}
