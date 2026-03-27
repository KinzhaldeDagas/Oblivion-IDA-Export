unsigned int __thiscall sub_8C5900(_DWORD *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  char *v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int result; // eax
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  char *v16; // edx
  char *v17; // edi
  unsigned int v18; // [esp+10h] [ebp-Ch]
  char *v19; // [esp+14h] [ebp-8h] BYREF
  unsigned int v20; // [esp+18h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_8CE640(this, (unsigned __int16 *)a2);
  v4 = TESOutput_PrintString(*(char **)dword_BA8124);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = 0;
  if ( this )
    a2 = (char *)*(this + 2);
  else
    a2 = 0;
  v8 = *(unsigned __int16 *)(*((_DWORD *)a2 + 4) + 0x10);
  v18 = v8;
  v9 = TESOutput_PrintLabeledUnsignedInt("Subparts", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  v19 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  result = NiTArray_SetAt(v2, v10, &v19);
  if ( v8 > 5 )
  {
    v18 = 5;
    v8 = 5;
  }
  if ( v8 )
  {
    v19 = 0;
    do
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("Part", v7);
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
      v16 = a2;
      *((_DWORD *)&v2->data->vtbl + v14) = v15;
      v17 = v19;
      v20 = *(_DWORD *)&v19[*(_DWORD *)(*((_DWORD *)v16 + 4) + 0x1C)];
      result = sub_8A9100(&v20, (unsigned __int16 *)v2);
      ++v7;
      v19 = v17 + 0xC;
    }
    while ( v7 < v18 );
  }
  return result;
}
