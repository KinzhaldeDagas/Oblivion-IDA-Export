void __thiscall sub_6FEC00(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  float *v3; // ebx
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebp
  int v11; // eax
  char *v12; // eax
  unsigned int v13; // edi
  char *v14; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  v3 = this;
  sub_7531E0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F54C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)sub_6FE340("ArrayType", *((_DWORD *)v3 + 0x15));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = *((unsigned __int16 *)v3 + 0x31);
  if ( *((_WORD *)v3 + 0x31) )
  {
    do
    {
      v11 = *(_DWORD *)(*((_DWORD *)v3 + 0x17) + 4 * v10-- - 4);
      if ( v11 )
      {
        v12 = TESOutput_PrintLabeledString(v10, (int)"E", *(_DWORD *)(v11 + 8));
        v13 = v2->end;
        v14 = v12;
        if ( v13 >= v2->capacity )
          NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
        if ( v13 < v2->end )
        {
          if ( v14 )
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v13) )
              ++v2->numObjs;
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v13) )
          {
            --v2->numObjs;
          }
        }
        else
        {
          v2->end = v13 + 1;
          if ( v14 )
            ++v2->numObjs;
        }
        *((_DWORD *)&v2->data->vtbl + v13) = v14;
        v3 = this;
      }
    }
    while ( v10 );
  }
}
