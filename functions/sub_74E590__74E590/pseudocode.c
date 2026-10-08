unsigned int __thiscall sub_74E590(void *this, unsigned __int16 *a2)
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
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // eax
  unsigned int v25; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74e592*/
  sub_752EC0(this, a2); /*0x74e59a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40AA4.name); /*0x74e5a5*/
  end = v2->end; /*0x74e5aa*/
  capacity = v2->capacity; /*0x74e5ae*/
  a2 = v4; /*0x74e5b7*/
  if ( end >= capacity ) /*0x74e5bb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74e5c6*/
  NiTArray_SetAt(v2, end, &a2); /*0x74e5d3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Speed", *((float *)this + 6)); /*0x74e5e4*/
  v8 = v2->end; /*0x74e5e9*/
  v9 = v2->capacity; /*0x74e5ed*/
  a2 = v7; /*0x74e5f6*/
  if ( v8 >= v9 ) /*0x74e5fa*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x74e605*/
  NiTArray_SetAt(v2, v8, &a2); /*0x74e612*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Speed Variation", *((float *)this + 7)); /*0x74e623*/
  v11 = v2->end; /*0x74e628*/
  v12 = v2->capacity; /*0x74e62c*/
  a2 = v10; /*0x74e635*/
  if ( v11 >= v12 ) /*0x74e639*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x74e644*/
  NiTArray_SetAt(v2, v11, &a2); /*0x74e651*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Random Rot Speed Sign", *((_BYTE *)this + 0x35)); /*0x74e660*/
  v14 = v2->end; /*0x74e665*/
  v15 = v2->capacity; /*0x74e669*/
  a2 = v13; /*0x74e672*/
  if ( v14 >= v15 ) /*0x74e676*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x74e681*/
  NiTArray_SetAt(v2, v14, &a2); /*0x74e68e*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Angle", *((float *)this + 8)); /*0x74e69f*/
  v17 = v2->end; /*0x74e6a4*/
  v18 = v2->capacity; /*0x74e6a8*/
  a2 = v16; /*0x74e6b1*/
  if ( v17 >= v18 ) /*0x74e6b5*/
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x74e6c0*/
  NiTArray_SetAt(v2, v17, &a2); /*0x74e6cd*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Rotation Angle Variation", *((float *)this + 9)); /*0x74e6de*/
  v20 = v2->end; /*0x74e6e3*/
  v21 = v2->capacity; /*0x74e6e7*/
  a2 = v19; /*0x74e6f0*/
  if ( v20 >= v21 ) /*0x74e6f4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x74e6ff*/
  NiTArray_SetAt(v2, v20, &a2); /*0x74e70c*/
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Random Initial Axis", *((_BYTE *)this + 0x34)); /*0x74e71b*/
  v23 = v2->end; /*0x74e720*/
  a2 = v22; /*0x74e724*/
  if ( v23 >= v2->capacity ) /*0x74e731*/
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x74e73c*/
  NiTArray_SetAt(v2, v23, &a2); /*0x74e749*/
  v24 = (unsigned __int16 *)sub_707280((float *)this + 0xA, "Initial Axis"); /*0x74e756*/
  v25 = v2->end; /*0x74e75b*/
  a2 = v24; /*0x74e75f*/
  if ( v25 >= v2->capacity ) /*0x74e769*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x74e774*/
  return NiTArray_SetAt(v2, v25, &a2); /*0x74e786*/
}
