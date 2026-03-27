unsigned int __thiscall sub_8AAE50(unsigned __int8 *this, NiTArray_NiTexturingPropertyMap *a2)
{
  unsigned __int8 *v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int result; // eax
  bool v10; // zf
  char *v11; // ebx
  unsigned int v12; // edi
  NiTexturingProperty_Map *data; // edx
  unsigned __int8 *v14; // ecx
  bool v15; // cf
  char *v16; // [esp+44h] [ebp-54h] BYREF
  unsigned int v17; // [esp+48h] [ebp-50h]
  unsigned __int8 *v18; // [esp+4Ch] [ebp-4Ch]
  char v19[68]; // [esp+50h] [ebp-48h] BYREF

  v2 = this;
  v18 = this;
  sub_716140(this, (unsigned __int16 *)a2);
  v3 = TESOutput_PrintString(*(char **)dword_BA7F3C);
  end = a2->end;
  capacity = a2->capacity;
  v16 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  NiTArray_SetAt(a2, end, &v16);
  v6 = TESOutput_PrintLabeledUnsignedInt("iKeys", *((_DWORD *)v2 + 0x14));
  v7 = a2->end;
  v8 = a2->capacity;
  v16 = v6;
  if ( v7 >= v8 )
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize);
  NiTArray_SetAt(a2, v7, &v16);
  result = 0;
  v10 = *((_DWORD *)v2 + 0x14) == 0;
  v17 = 0;
  if ( !v10 )
  {
    v16 = 0;
    while ( 1 )
    {
      _sprintf(
        v19,
        "Key%d: %.4f, %.4f, %.4f",
        v17,
        *(float *)&v16[*((_DWORD *)v2 + 0x11)],
        *(float *)&v16[*((_DWORD *)v2 + 0x11) + 4],
        *(float *)&v16[*((_DWORD *)v2 + 0x11) + 8]);
      v11 = (char *)FormHeapAlloc(strlen(v19) + 1);
      strcpy(v11, v19);
      v12 = a2->end;
      if ( v12 >= a2->capacity )
        NiTArray_SetSize((unsigned __int16 *)a2, v12 + a2->growSize);
      if ( v12 < a2->end )
      {
        if ( v11 )
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v12) )
            ++a2->numObjs;
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v12) )
        {
          --a2->numObjs;
        }
      }
      else
      {
        a2->end = v12 + 1;
        if ( v11 )
          ++a2->numObjs;
      }
      data = a2->data;
      v14 = v18;
      v16 += 0xC;
      result = v17 + 1;
      *((_DWORD *)&data->vtbl + v12) = v11;
      v15 = result < *((_DWORD *)v14 + 0x14);
      v17 = result;
      if ( !v15 )
        break;
      v2 = v14;
    }
  }
  return result;
}
