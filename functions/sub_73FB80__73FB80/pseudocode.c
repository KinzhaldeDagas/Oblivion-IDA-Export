unsigned int __thiscall sub_73FB80(void *this, unsigned __int16 *a2)
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
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73fb82*/
  sub_729D00(this, a2); /*0x73fb8a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B401C8.name); /*0x73fb95*/
  end = v2->end; /*0x73fb9a*/
  capacity = v2->capacity; /*0x73fb9e*/
  a2 = v4; /*0x73fba7*/
  if ( end >= capacity ) /*0x73fbab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73fbb6*/
  NiTArray_SetAt(v2, end, &a2); /*0x73fbc3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pfRadii", *((_DWORD *)this + 0x11)); /*0x73fbd1*/
  v8 = v2->end; /*0x73fbd6*/
  v9 = v2->capacity; /*0x73fbda*/
  a2 = v7; /*0x73fbe3*/
  if ( v8 >= v9 ) /*0x73fbe7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73fbf2*/
  NiTArray_SetAt(v2, v8, &a2); /*0x73fbff*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usActive", *((_WORD *)this + 0x24)); /*0x73fc0e*/
  v11 = v2->end; /*0x73fc13*/
  a2 = v10; /*0x73fc17*/
  if ( v11 >= v2->capacity ) /*0x73fc24*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x73fc2f*/
  NiTArray_SetAt(v2, v11, &a2); /*0x73fc3c*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pfSizes", *((_DWORD *)this + 0x13)); /*0x73fc4a*/
  v13 = v2->end; /*0x73fc4f*/
  v14 = v2->capacity; /*0x73fc53*/
  a2 = v12; /*0x73fc5c*/
  if ( v13 >= v14 ) /*0x73fc60*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x73fc6b*/
  NiTArray_SetAt(v2, v13, &a2); /*0x73fc78*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkRotations", *((_DWORD *)this + 0x14)); /*0x73fc86*/
  v16 = v2->end; /*0x73fc8b*/
  v17 = v2->capacity; /*0x73fc8f*/
  a2 = v15; /*0x73fc98*/
  if ( v16 >= v17 ) /*0x73fc9c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x73fca7*/
  NiTArray_SetAt(v2, v16, &a2); /*0x73fcb4*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pfRotationAngles", *((_DWORD *)this + 0x15)); /*0x73fcc2*/
  v19 = v2->end; /*0x73fcc7*/
  a2 = v18; /*0x73fccb*/
  if ( v19 >= v2->capacity ) /*0x73fcd8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x73fce3*/
  NiTArray_SetAt(v2, v19, &a2); /*0x73fcf0*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkRotationAxes", *((_DWORD *)this + 0x16)); /*0x73fcfe*/
  v21 = v2->end; /*0x73fd03*/
  v22 = v2->capacity; /*0x73fd07*/
  a2 = v20; /*0x73fd10*/
  if ( v21 >= v22 ) /*0x73fd14*/
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize); /*0x73fd1f*/
  return NiTArray_SetAt(v2, v21, &a2); /*0x73fd31*/
}
