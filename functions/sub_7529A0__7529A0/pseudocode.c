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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7529a2*/
  sub_752EC0(this, a2); /*0x7529aa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40C84.name); /*0x7529b5*/
  end = v2->end; /*0x7529ba*/
  capacity = v2->capacity; /*0x7529be*/
  a2 = v4; /*0x7529c7*/
  if ( end >= capacity ) /*0x7529cb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7529d6*/
  NiTArray_SetAt(v2, end, &a2); /*0x7529e3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Num Spawn Generations", *((_WORD *)this + 0xC)); /*0x7529f2*/
  v8 = v2->end; /*0x7529f7*/
  v9 = v2->capacity; /*0x7529fb*/
  a2 = v7; /*0x752a04*/
  if ( v8 >= v9 ) /*0x752a08*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x752a13*/
  NiTArray_SetAt(v2, v8, &a2); /*0x752a20*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Percentage Spawned", *((float *)this + 7)); /*0x752a31*/
  v11 = v2->end; /*0x752a36*/
  v12 = v2->capacity; /*0x752a3a*/
  a2 = v10; /*0x752a43*/
  if ( v11 >= v12 ) /*0x752a47*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x752a52*/
  NiTArray_SetAt(v2, v11, &a2); /*0x752a5f*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Min Num to Spawn", *((_WORD *)this + 0x10)); /*0x752a6e*/
  v14 = v2->end; /*0x752a73*/
  a2 = v13; /*0x752a77*/
  if ( v14 >= v2->capacity ) /*0x752a84*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x752a8f*/
  NiTArray_SetAt(v2, v14, &a2); /*0x752a9c*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Max Num to Spawn", *((_WORD *)this + 0x11)); /*0x752aab*/
  v16 = v2->end; /*0x752ab0*/
  v17 = v2->capacity; /*0x752ab4*/
  a2 = v15; /*0x752abd*/
  if ( v16 >= v17 ) /*0x752ac1*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x752acc*/
  NiTArray_SetAt(v2, v16, &a2); /*0x752ad9*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Spawn Speed Chaos", *((float *)this + 9)); /*0x752aea*/
  v19 = v2->end; /*0x752aef*/
  v20 = v2->capacity; /*0x752af3*/
  a2 = v18; /*0x752afc*/
  if ( v19 >= v20 ) /*0x752b00*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x752b0b*/
  NiTArray_SetAt(v2, v19, &a2); /*0x752b18*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Spawn Dir Chaos", *((float *)this + 0xA)); /*0x752b29*/
  v22 = v2->end; /*0x752b2e*/
  v23 = v2->capacity; /*0x752b32*/
  a2 = v21; /*0x752b3b*/
  if ( v22 >= v23 ) /*0x752b3f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x752b4a*/
  NiTArray_SetAt(v2, v22, &a2); /*0x752b57*/
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span", *((float *)this + 0xB)); /*0x752b68*/
  v25 = v2->end; /*0x752b6d*/
  v26 = v2->capacity; /*0x752b71*/
  a2 = v24; /*0x752b7a*/
  if ( v25 >= v26 ) /*0x752b7e*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x752b89*/
  NiTArray_SetAt(v2, v25, &a2); /*0x752b96*/
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span Variation", *((float *)this + 0xC)); /*0x752ba7*/
  v28 = v2->end; /*0x752bac*/
  v29 = v2->capacity; /*0x752bb0*/
  a2 = v27; /*0x752bb9*/
  if ( v28 >= v29 ) /*0x752bbd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x752bc8*/
  return NiTArray_SetAt(v2, v28, &a2); /*0x752bda*/
}
