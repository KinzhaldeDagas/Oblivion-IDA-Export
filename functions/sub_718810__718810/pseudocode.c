unsigned int __thiscall sub_718810(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x718812*/
  sub_700B10(this, a2); /*0x71881a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCE8.name); /*0x718825*/
  end = v3->end; /*0x71882a*/
  capacity = v3->capacity; /*0x71882e*/
  a2 = v5; /*0x718837*/
  if ( end >= capacity ) /*0x71883b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x718846*/
  NiTArray_SetAt(v3, end, &a2); /*0x718853*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x71885e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bAlpha", (char)a2); /*0x71886c*/
  v9 = v3->end; /*0x718871*/
  a2 = v8; /*0x718875*/
  if ( v9 >= v3->capacity ) /*0x718882*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x71888d*/
  NiTArray_SetAt(v3, v9, &a2); /*0x71889a*/
  v10 = (unsigned __int16 *)sub_7182A0("m_eSrcBlend", (*((unsigned __int8 *)this + 0x18) >> 1) & 0xF); /*0x7188ae*/
  v11 = v3->end; /*0x7188b3*/
  a2 = v10; /*0x7188b7*/
  if ( v11 >= v3->capacity ) /*0x7188c4*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x7188cf*/
  NiTArray_SetAt(v3, v11, &a2); /*0x7188dc*/
  v12 = (unsigned __int16 *)sub_7182A0("m_eDestBlend", (*((unsigned __int16 *)this + 0xC) >> 5) & 0xF); /*0x7188f1*/
  v13 = v3->end; /*0x7188f6*/
  a2 = v12; /*0x7188fa*/
  if ( v13 >= v3->capacity ) /*0x718907*/
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize); /*0x718912*/
  NiTArray_SetAt(v3, v13, &a2); /*0x71891f*/
  LOBYTE(a2) = (*(_WORD *)(this + 6) & 0x200) != 0; /*0x71892e*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bAlphaTest", (char)a2); /*0x71893c*/
  v15 = v3->end; /*0x718941*/
  v16 = v3->capacity; /*0x718945*/
  a2 = v14; /*0x71894e*/
  if ( v15 >= v16 ) /*0x718952*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x71895d*/
  NiTArray_SetAt(v3, v15, &a2); /*0x71896a*/
  v17 = (unsigned __int16 *)sub_718400("m_eTestMode", (*((unsigned __int16 *)this + 0xC) >> 0xA) & 7); /*0x71897f*/
  v18 = v3->end; /*0x718984*/
  v19 = v3->capacity; /*0x718988*/
  a2 = v17; /*0x718991*/
  if ( v18 >= v19 ) /*0x718995*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x7189a0*/
  NiTArray_SetAt(v3, v18, &a2); /*0x7189ad*/
  LOBYTE(a2) = *((_BYTE *)this + 0x1A); /*0x7189b5*/
  v20 = (unsigned __int16 *)sub_70FA00("m_ucTestRef", (char)a2); /*0x7189c3*/
  v21 = v3->end; /*0x7189c8*/
  v22 = v3->capacity; /*0x7189cc*/
  a2 = v20; /*0x7189d5*/
  if ( v21 >= v22 ) /*0x7189d9*/
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize); /*0x7189e4*/
  NiTArray_SetAt(v3, v21, &a2); /*0x7189f1*/
  LOBYTE(a2) = (*(_WORD *)(this + 6) & 0x2000) != 0; /*0x718a01*/
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bNoSorter", (char)a2); /*0x718a0f*/
  v24 = v3->end; /*0x718a14*/
  a2 = v23; /*0x718a18*/
  if ( v24 >= v3->capacity ) /*0x718a25*/
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize); /*0x718a30*/
  return NiTArray_SetAt(v3, v24, &a2); /*0x718a42*/
}
