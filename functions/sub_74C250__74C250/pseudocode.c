void __thiscall sub_74C250(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int i; // ebx
  int v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74c253*/
  sub_74F4F0(this, a2); /*0x74c25b*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B408C8.name); /*0x74c266*/
  end = v2->end; /*0x74c26b*/
  capacity = v2->capacity; /*0x74c26f*/
  a2 = v4; /*0x74c278*/
  if ( end >= capacity ) /*0x74c27c*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74c287*/
  NiTArray_SetAt(v2, end, &a2); /*0x74c294*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x2E); ++i ) /*0x74c299*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * i); /*0x74c2aa*/
    if ( v8 ) /*0x74c2af*/
    {
      v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Emitter Object", *(const char **)(v8 + 8)); /*0x74c2ba*/
      v10 = v2->end; /*0x74c2bf*/
      v11 = v2->capacity; /*0x74c2c3*/
      a2 = v9; /*0x74c2cc*/
      if ( v10 >= v11 ) /*0x74c2d0*/
        NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x74c2db*/
      NiTArray_SetAt(v2, v10, &a2); /*0x74c2e8*/
    }
  }
  switch ( *((_DWORD *)this + 0x1D) ) /*0x74c300*/
  {
    case 0: /*0x74c300*/
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_VERTICES"); /*0x74c311*/
      break; /*0x74c311*/
    case 1: /*0x74c300*/
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_FACE_CENTER"); /*0x74c34e*/
      break; /*0x74c34e*/
    case 2: /*0x74c300*/
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_EDGE_CENTER"); /*0x74c355*/
      break; /*0x74c355*/
    case 3: /*0x74c300*/
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_FACE_SURFACE"); /*0x74c35c*/
      break; /*0x74c35c*/
    case 4: /*0x74c300*/
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_EDGE_SURFACE"); /*0x74c363*/
      break; /*0x74c363*/
    default:
      JUMPOUT(0x74C365); /*0x74c365*/
  }
  v13 = v2->capacity; /*0x74c316*/
  v14 = v2->end; /*0x74c31a*/
  a2 = v12; /*0x74c323*/
  if ( v14 >= v13 ) /*0x74c327*/
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x74c332*/
  NiTArray_SetAt(v2, v14, &a2); /*0x74c33f*/
  JUMPOUT(0x74C3D6); /*0x74c3d6*/
}
