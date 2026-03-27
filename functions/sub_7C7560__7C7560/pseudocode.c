void __userpurge sub_7C7560(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *i)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  _DWORD **v15; // eax
  int *v16; // ecx
  _DWORD *v17; // eax
  int *v18; // ecx
  char *v19; // eax
  unsigned int v20; // edi
  char *v21; // ebx
  NiTexturingProperty_Map *v22; // edx
  NiTexturingProperty_Map *data; // eax

  v3 = i;
  sub_70BAE0(this, a2, i);
  v5 = TESOutput_PrintString(*(char **)dword_B43388);
  end = v3->end;
  capacity = v3->capacity;
  i = (NiTArray_NiTexturingPropertyMap *)v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &i);
  v8 = TESOutput_PrintLabeledUnsignedShort("light count", *((_DWORD *)this + 0x3C));
  v9 = v3->end;
  v10 = v3->capacity;
  i = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &i);
  v11 = *((_DWORD *)this + 0x3C);
  v12 = 0;
  i = 0;
  if ( (_WORD)v11 )
  {
    do
    {
      v13 = (unsigned __int16)v12;
      if ( (unsigned __int16)v12 < v11 )
      {
        v15 = *((_DWORD ***)this + 0x3A);
        v16 = (int *)(v15 + 2);
        v17 = *v15;
        v14 = *v16;
        if ( (_WORD)v12 )
        {
          do
          {
            --v13;
            v18 = v17 + 2;
            v17 = (_DWORD *)*v17;
            v14 = *v18;
          }
          while ( v13 );
        }
      }
      else
      {
        v14 = 0;
      }
      if ( *(_BYTE *)(v14 + 0xF4) )
        i = (NiTArray_NiTexturingPropertyMap *)((char *)i + 1);
      ++v12;
    }
    while ( v12 < (unsigned __int16)v11 );
  }
  v19 = TESOutput_PrintLabeledSignedInt("shadow light count", (int)i);
  v20 = v3->end;
  v21 = v19;
  if ( v20 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize);
  if ( v20 < v3->end )
  {
    if ( v21 )
    {
      data = v3->data;
      if ( !*((_DWORD *)&data->vtbl + v20) )
      {
        ++v3->numObjs;
        *((_DWORD *)&data->vtbl + v20) = v21;
        return;
      }
    }
    else if ( *((_DWORD *)&v3->data->vtbl + v20) )
    {
      --v3->numObjs;
    }
  }
  else
  {
    v3->end = v20 + 1;
    if ( v21 )
    {
      v22 = v3->data;
      ++v3->numObjs;
      *((_DWORD *)&v22->vtbl + v20) = v21;
      return;
    }
  }
  *((_DWORD *)&v3->data->vtbl + v20) = v21;
}
