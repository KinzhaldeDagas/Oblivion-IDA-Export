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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c5906*/
  sub_8CE640(this, (unsigned __int16 *)a2); /*0x8c590e*/
  v4 = TESOutput_PrintString((char *)stru_BA8124.name); /*0x8c5919*/
  end = v2->end; /*0x8c591e*/
  capacity = v2->capacity; /*0x8c5922*/
  a2 = v4; /*0x8c592b*/
  if ( end >= capacity ) /*0x8c592f*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c593a*/
  NiTArray_SetAt(v2, end, &a2); /*0x8c5947*/
  v7 = 0; /*0x8c594c*/
  if ( this ) /*0x8c5950*/
    a2 = (char *)*(this + 2); /*0x8c5955*/
  else
    a2 = 0; /*0x8c595b*/
  v8 = *(unsigned __int16 *)(*((_DWORD *)a2 + 4) + 0x10); /*0x8c5966*/
  v18 = v8; /*0x8c5970*/
  v9 = TESOutput_PrintLabeledUnsignedInt("Subparts", v8); /*0x8c5974*/
  v10 = v2->end; /*0x8c5979*/
  v11 = v2->capacity; /*0x8c597d*/
  v19 = v9; /*0x8c5986*/
  if ( v10 >= v11 ) /*0x8c598a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8c5995*/
  result = NiTArray_SetAt(v2, v10, &v19); /*0x8c59a2*/
  if ( v8 > 5 ) /*0x8c59aa*/
  {
    v18 = 5; /*0x8c59ac*/
    v8 = 5; /*0x8c59b4*/
  }
  if ( v8 ) /*0x8c59ba*/
  {
    v19 = 0; /*0x8c59c0*/
    do /*0x8c5a5e*/
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("Part", v7); /*0x8c59ca*/
      v14 = v2->end; /*0x8c59cf*/
      v15 = v13; /*0x8c59dc*/
      if ( v14 >= v2->capacity ) /*0x8c59de*/
        NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x8c59e9*/
      if ( v14 < v2->end ) /*0x8c59f4*/
      {
        if ( v15 ) /*0x8c5a0a*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v14) ) /*0x8c5a0f*/
            ++v2->numObjs; /*0x8c5a15*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v14) ) /*0x8c5a1f*/
        {
          --v2->numObjs; /*0x8c5a25*/
        }
      }
      else
      {
        v2->end = v14 + 1; /*0x8c59fb*/
        if ( v15 ) /*0x8c59ff*/
          ++v2->numObjs; /*0x8c5a01*/
      }
      v16 = a2; /*0x8c5a2e*/
      *((_DWORD *)&v2->data->vtbl + v14) = v15; /*0x8c5a32*/
      v17 = v19; /*0x8c5a3b*/
      v20 = *(_DWORD *)&v19[*(_DWORD *)(*((_DWORD *)v16 + 4) + 0x1C)]; /*0x8c5a47*/
      result = sub_8A9100(&v20, (unsigned __int16 *)v2); /*0x8c5a4b*/
      ++v7; /*0x8c5a50*/
      v19 = v17 + 0xC; /*0x8c5a5a*/
    }
    while ( v7 < v18 ); /*0x8c5a5e*/
  }
  return result; /*0x8c5a64*/
}
