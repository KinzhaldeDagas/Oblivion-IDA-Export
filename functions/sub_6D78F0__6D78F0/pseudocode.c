unsigned int __thiscall sub_6D78F0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  _DWORD *v3; // edi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int result; // eax
  int v11; // ebp
  bool v12; // zf
  va_list v13; // edi
  char *v14; // ebx
  char *v15; // eax
  unsigned int v16; // edi
  char *v17; // ebp
  bool v18; // cf
  char *ArgList; // [esp+14h] [ebp-Ch]
  char *v21; // [esp+1Ch] [ebp-4h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3DA08);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"m_uiNumKeys", v3[3]);
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  result = NiTArray_SetAt(v2, v8, &a2);
  v11 = 0;
  v12 = v3[3] == 0;
  a2 = 0;
  if ( !v12 )
  {
    while ( 1 )
    {
      ArgList = TESOutput_PrintLabeledFloat((int)"Time", *(float *)(v3[4] + 8 * v11));
      v21 = TESOutput_PrintLabeledString(v11, (int)"Text", *(_DWORD *)(v3[4] + 8 * v11 + 4));
      v13 = (va_list)(strlen(v21) + strlen(ArgList) + 4);
      v14 = (char *)FormHeapAlloc((unsigned int)v13);
      sub_6C5D40(v13, v14, __PAIR64__("%s : %s", (unsigned int)v13), ArgList, v21);
      v15 = TESOutput_PrintLabeledString((int)v21, (int)"TextKey", (int)v14);
      v16 = v2->end;
      v17 = v15;
      if ( v16 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
      if ( v16 < v2->end )
      {
        if ( v17 )
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v16) )
            ++v2->numObjs;
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v16) )
        {
          --v2->numObjs;
        }
      }
      else
      {
        v2->end = v16 + 1;
        if ( v17 )
          ++v2->numObjs;
      }
      *((_DWORD *)&v2->data->vtbl + v16) = v17;
      FormHeapFree((unsigned int)ArgList);
      FormHeapFree((unsigned int)v21);
      FormHeapFree((unsigned int)v14);
      result = (unsigned int)a2 + 1;
      v18 = (unsigned int)a2 + 1 < *(this + 3);
      a2 = (unsigned __int16 *)((char *)a2 + 1);
      if ( !v18 )
        break;
      v11 = (int)a2;
      v3 = this;
    }
  }
  return result;
}
