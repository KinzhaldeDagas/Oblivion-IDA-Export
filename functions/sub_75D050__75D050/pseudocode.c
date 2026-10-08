unsigned int __thiscall sub_75D050(void *this, unsigned __int16 *a2)
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
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned __int16 *v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75d052*/
  sub_75EAA0(this, a2); /*0x75d05a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41B38.name); /*0x75d065*/
  end = v2->end; /*0x75d06a*/
  capacity = v2->capacity; /*0x75d06e*/
  a2 = v4; /*0x75d077*/
  if ( end >= capacity ) /*0x75d07b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75d086*/
  NiTArray_SetAt(v2, end, &a2); /*0x75d093*/
  v7 = (unsigned __int16 *)sub_707280((float *)this + 0x10, "Direction"); /*0x75d0a0*/
  v8 = v2->end; /*0x75d0a5*/
  v9 = v2->capacity; /*0x75d0a9*/
  a2 = v7; /*0x75d0af*/
  if ( v8 >= v9 ) /*0x75d0b3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75d0be*/
  NiTArray_SetAt(v2, v8, &a2); /*0x75d0cb*/
  v10 = (unsigned __int16 *)sub_707280((float *)this + 0x13, "Unit Direction"); /*0x75d0d8*/
  v11 = v2->end; /*0x75d0dd*/
  v12 = v2->capacity; /*0x75d0e1*/
  a2 = v10; /*0x75d0e7*/
  if ( v11 >= v12 ) /*0x75d0eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x75d0f6*/
  NiTArray_SetAt(v2, v11, &a2); /*0x75d103*/
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("AirFriction", *((float *)this + 0x16)); /*0x75d114*/
  v14 = v2->end; /*0x75d119*/
  v15 = v2->capacity; /*0x75d11d*/
  a2 = v13; /*0x75d126*/
  if ( v14 >= v15 ) /*0x75d12a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x75d135*/
  NiTArray_SetAt(v2, v14, &a2); /*0x75d142*/
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Inherit Velocity", *((float *)this + 0x17)); /*0x75d153*/
  v17 = v2->end; /*0x75d158*/
  v18 = v2->capacity; /*0x75d15c*/
  a2 = v16; /*0x75d165*/
  if ( v17 >= v18 ) /*0x75d169*/
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x75d174*/
  NiTArray_SetAt(v2, v17, &a2); /*0x75d181*/
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Inherit Rotation", *((_BYTE *)this + 0x60)); /*0x75d190*/
  v20 = v2->end; /*0x75d195*/
  v21 = v2->capacity; /*0x75d199*/
  a2 = v19; /*0x75d1a2*/
  if ( v20 >= v21 ) /*0x75d1a6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x75d1b1*/
  NiTArray_SetAt(v2, v20, &a2); /*0x75d1be*/
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Component Only", *((_BYTE *)this + 0x61)); /*0x75d1cd*/
  v23 = v2->end; /*0x75d1d2*/
  a2 = v22; /*0x75d1d6*/
  if ( v23 >= v2->capacity ) /*0x75d1e3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x75d1ee*/
  NiTArray_SetAt(v2, v23, &a2); /*0x75d1fb*/
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Enable Spread", *((_BYTE *)this + 0x62)); /*0x75d20a*/
  v25 = v2->end; /*0x75d20f*/
  v26 = v2->capacity; /*0x75d213*/
  a2 = v24; /*0x75d21c*/
  if ( v25 >= v26 ) /*0x75d220*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x75d22b*/
  NiTArray_SetAt(v2, v25, &a2); /*0x75d238*/
  v27 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Spread", *((float *)this + 0x19)); /*0x75d249*/
  v28 = v2->end; /*0x75d24e*/
  v29 = v2->capacity; /*0x75d252*/
  a2 = v27; /*0x75d25b*/
  if ( v28 >= v29 ) /*0x75d25f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x75d26a*/
  return NiTArray_SetAt(v2, v28, &a2); /*0x75d27c*/
}
