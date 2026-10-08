unsigned int __thiscall sub_723620(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int result; // eax
  int v12; // ecx
  const char **v13; // eax
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x723622*/
  sub_7086B0(this, a2); /*0x72362a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD5C.name); /*0x723635*/
  end = v3->end; /*0x72363a*/
  capacity = v3->capacity; /*0x72363e*/
  a2 = v5; /*0x723647*/
  if ( end >= capacity ) /*0x72364b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x723656*/
  NiTArray_SetAt(v3, end, &a2); /*0x723663*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("GeomData", *((_DWORD *)this + 0x2D)); /*0x723674*/
  v9 = v3->end; /*0x723679*/
  v10 = v3->capacity; /*0x72367d*/
  a2 = v8; /*0x723686*/
  if ( v9 >= v10 ) /*0x72368a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x723695*/
  result = NiTArray_SetAt(v3, v9, &a2); /*0x7236a2*/
  v12 = *((_DWORD *)this + 0x2F); /*0x7236a7*/
  if ( v12 ) /*0x7236af*/
  {
    v13 = (const char **)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x7236b6*/
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledString("shader", *v13); /*0x7236c0*/
    v15 = v3->end; /*0x7236c5*/
    v16 = v3->capacity; /*0x7236c9*/
    a2 = v14; /*0x7236d2*/
    if ( v15 >= v16 ) /*0x7236d6*/
      NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x7236e1*/
    result = NiTArray_SetAt(v3, v15, &a2); /*0x7236ee*/
  }
  v17 = *((_DWORD *)this + 0x2E); /*0x7236f3*/
  if ( v17 ) /*0x7236fb*/
  {
    result = *(_DWORD *)(v17 + 0xC); /*0x7236fd*/
    if ( result ) /*0x723702*/
    {
      v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("skin partitions", *(_DWORD *)(result + 8)); /*0x72370d*/
      v19 = v3->end; /*0x723712*/
      v20 = v3->capacity; /*0x723716*/
      a2 = v18; /*0x72371f*/
      if ( v19 >= v20 ) /*0x723723*/
        NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize); /*0x72372e*/
      return NiTArray_SetAt(v3, v19, &a2); /*0x72373b*/
    }
  }
  return result; /*0x723740*/
}
