unsigned int __thiscall sub_756FF0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756ff2*/
  sub_752EC0(this, a2); /*0x756ffa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4128C.name); /*0x757005*/
  end = v2->end; /*0x75700a*/
  capacity = v2->capacity; /*0x75700e*/
  a2 = v4; /*0x757017*/
  if ( end >= capacity ) /*0x75701b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757026*/
  NiTArray_SetAt(v2, end, &a2); /*0x757033*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Grow Time", *((float *)this + 6)); /*0x757044*/
  v8 = v2->end; /*0x757049*/
  v9 = v2->capacity; /*0x75704d*/
  a2 = v7; /*0x757056*/
  if ( v8 >= v9 ) /*0x75705a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x757065*/
  NiTArray_SetAt(v2, v8, &a2); /*0x757072*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Grow Generation", *((_WORD *)this + 0xE)); /*0x757081*/
  v11 = v2->end; /*0x757086*/
  v12 = v2->capacity; /*0x75708a*/
  a2 = v10; /*0x757093*/
  if ( v11 >= v12 ) /*0x757097*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x7570a2*/
  NiTArray_SetAt(v2, v11, &a2); /*0x7570af*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fade Time", *((float *)this + 8)); /*0x7570c0*/
  v14 = v2->end; /*0x7570c5*/
  v15 = v2->capacity; /*0x7570c9*/
  a2 = v13; /*0x7570d2*/
  if ( v14 >= v15 ) /*0x7570d6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x7570e1*/
  NiTArray_SetAt(v2, v14, &a2); /*0x7570ee*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("Fade Generation", *((_WORD *)this + 0x12)); /*0x7570fd*/
  v17 = v2->end; /*0x757102*/
  a2 = v16; /*0x757106*/
  if ( v17 >= v2->capacity ) /*0x757113*/
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x75711e*/
  return NiTArray_SetAt(v2, v17, &a2); /*0x757130*/
}
