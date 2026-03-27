unsigned int __thiscall sub_7529A0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned __int16 *v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40C84);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Num Spawn Generations", *((_WORD *)this + 0xC));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Percentage Spawned", *((float *)this + 7));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Min Num to Spawn", *((_WORD *)this + 0x10));
  v14 = v2->end;
  a2 = v13;
  if ( v14 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Max Num to Spawn", *((_WORD *)this + 0x11));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Spawn Speed Chaos", *((float *)this + 9));
  v19 = v2->end;
  v20 = v2->capacity;
  a2 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Spawn Dir Chaos", *((float *)this + 0xA));
  v22 = v2->end;
  v23 = v2->capacity;
  a2 = v21;
  if ( v22 >= v23 )
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
  NiTArray_SetAt(v2, v22, &a2);
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span", *((float *)this + 0xB));
  v25 = v2->end;
  v26 = v2->capacity;
  a2 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  NiTArray_SetAt(v2, v25, &a2);
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span Variation", *((float *)this + 0xC));
  v28 = v2->end;
  v29 = v2->capacity;
  a2 = v27;
  if ( v28 >= v29 )
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize);
  return NiTArray_SetAt(v2, v28, &a2);
}
