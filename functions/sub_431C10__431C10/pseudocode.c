unsigned int __thiscall sub_431C10(unsigned __int16 *this, NiTArray_NiTexturingPropertyMap *a2)
{
  unsigned __int16 *v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int result; // eax
  int v6; // ebp
  char *v7; // eax
  unsigned int v8; // edi
  char *v9; // ebx
  char *v11; // [esp+14h] [ebp-4h] BYREF

  v2 = this;
  v3 = TESOutput_PrintLabeledUnsignedInt((int)"FileFinder Paths", *(this + 8));
  end = a2->end;
  v11 = v3;
  if ( end >= a2->capacity )
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize);
  result = NiTArray_SetAt(a2, end, &v11);
  v6 = 0;
  if ( v2[8] )
  {
    while ( 1 )
    {
      v7 = TESOutput_PrintLabeledString(v6, (int)word_A36430, *(_DWORD *)(*((_DWORD *)v2 + 2) + 4 * v6));
      v8 = a2->end;
      v9 = v7;
      if ( v8 >= a2->capacity )
        NiTArray_SetSize((unsigned __int16 *)a2, v8 + a2->growSize);
      if ( v8 < a2->end )
      {
        if ( v9 )
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v8) )
            ++a2->numObjs;
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v8) )
        {
          --a2->numObjs;
        }
      }
      else
      {
        a2->end = v8 + 1;
        if ( v9 )
          ++a2->numObjs;
      }
      *((_DWORD *)&a2->data->vtbl + v8) = v9;
      result = *(this + 8);
      if ( ++v6 >= result )
        break;
      v2 = this;
    }
  }
  return result;
}
