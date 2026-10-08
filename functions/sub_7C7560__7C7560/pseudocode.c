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

  v3 = i; /*0x7c7562*/
  sub_70BAE0(this, a2, i); /*0x7c756a*/
  v5 = TESOutput_PrintString((char *)stru_B43388.name); /*0x7c7575*/
  end = v3->end; /*0x7c757a*/
  capacity = v3->capacity; /*0x7c757e*/
  i = (NiTArray_NiTexturingPropertyMap *)v5; /*0x7c7587*/
  if ( end >= capacity ) /*0x7c758b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7c7596*/
  NiTArray_SetAt(v3, end, &i); /*0x7c75a3*/
  v8 = TESOutput_PrintLabeledUnsignedShort("light count", *((_DWORD *)this + 0x3C)); /*0x7c75b4*/
  v9 = v3->end; /*0x7c75b9*/
  v10 = v3->capacity; /*0x7c75bd*/
  i = (NiTArray_NiTexturingPropertyMap *)v8; /*0x7c75c6*/
  if ( v9 >= v10 ) /*0x7c75ca*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x7c75d5*/
  NiTArray_SetAt(v3, v9, &i); /*0x7c75e3*/
  v11 = *((_DWORD *)this + 0x3C); /*0x7c75e8*/
  v12 = 0; /*0x7c75f1*/
  i = 0; /*0x7c75f5*/
  if ( (_WORD)v11 ) /*0x7c75f9*/
  {
    do /*0x7c7642*/
    {
      v13 = (unsigned __int16)v12; /*0x7c7600*/
      if ( (unsigned __int16)v12 < v11 ) /*0x7c7605*/
      {
        v15 = *((_DWORD ***)this + 0x3A); /*0x7c760d*/
        v16 = (int *)(v15 + 2); /*0x7c7613*/
        v17 = *v15; /*0x7c7616*/
        v14 = *v16; /*0x7c7618*/
        if ( (_WORD)v12 ) /*0x7c761a*/
        {
          do /*0x7c762a*/
          {
            --v13; /*0x7c7620*/
            v18 = v17 + 2; /*0x7c7623*/
            v17 = (_DWORD *)*v17; /*0x7c7626*/
            v14 = *v18; /*0x7c7628*/
          }
          while ( v13 ); /*0x7c762a*/
        }
      }
      else
      {
        v14 = 0; /*0x7c7607*/
      }
      if ( *(_BYTE *)(v14 + 0xF4) ) /*0x7c762c*/
        i = (NiTArray_NiTexturingPropertyMap *)((char *)i + 1); /*0x7c7635*/
      ++v12; /*0x7c763d*/
    }
    while ( v12 < (unsigned __int16)v11 ); /*0x7c7642*/
  }
  v19 = TESOutput_PrintLabeledSignedInt("shadow light count", (int)i); /*0x7c764e*/
  v20 = v3->end; /*0x7c7653*/
  v21 = v19; /*0x7c7660*/
  if ( v20 >= v3->capacity ) /*0x7c7663*/
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize); /*0x7c766e*/
  if ( v20 < v3->end ) /*0x7c7679*/
  {
    if ( v21 ) /*0x7c7699*/
    {
      data = v3->data; /*0x7c769b*/
      if ( !*((_DWORD *)&data->vtbl + v20) ) /*0x7c769e*/
      {
        ++v3->numObjs; /*0x7c76a4*/
        *((_DWORD *)&data->vtbl + v20) = v21; /*0x7c76ab*/
        return; /*0x7c76b1*/
      }
    }
    else if ( *((_DWORD *)&v3->data->vtbl + v20) ) /*0x7c76b7*/
    {
      --v3->numObjs; /*0x7c76bd*/
    }
  }
  else
  {
    v3->end = v20 + 1; /*0x7c7680*/
    if ( v21 ) /*0x7c7684*/
    {
      v22 = v3->data; /*0x7c7686*/
      ++v3->numObjs; /*0x7c7689*/
      *((_DWORD *)&v22->vtbl + v20) = v21; /*0x7c768e*/
      return; /*0x7c7694*/
    }
  }
  *((_DWORD *)&v3->data->vtbl + v20) = v21; /*0x7c76c6*/
}
