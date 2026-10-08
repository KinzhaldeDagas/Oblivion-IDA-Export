unsigned int __userpurge sub_719500@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned __int16 *v22; // eax
  unsigned int v23; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x719502*/
  sub_700B10(this, a2, a3); /*0x71950a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3FCF0); /*0x719515*/
  end = v3->end; /*0x71951a*/
  capacity = v3->capacity; /*0x71951e*/
  a3 = v5; /*0x719527*/
  if ( end >= capacity ) /*0x71952b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x719536*/
  NiTArray_SetAt(v3, end, &a3); /*0x719543*/
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1; /*0x71954e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bEnable", (char)a3); /*0x71955c*/
  v9 = v3->end; /*0x719561*/
  a3 = v8; /*0x719565*/
  if ( v9 >= v3->capacity ) /*0x719572*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x71957d*/
  NiTArray_SetAt(v3, v9, &a3); /*0x71958a*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiRef", *(this + 7)); /*0x719598*/
  v11 = v3->end; /*0x71959d*/
  a3 = v10; /*0x7195a1*/
  if ( v11 >= v3->capacity ) /*0x7195ae*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x7195b9*/
  NiTArray_SetAt(v3, v11, &a3); /*0x7195c6*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiMask", *(this + 8)); /*0x7195d4*/
  v13 = v3->end; /*0x7195d9*/
  a3 = v12; /*0x7195dd*/
  if ( v13 >= v3->capacity ) /*0x7195ea*/
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize); /*0x7195f5*/
  NiTArray_SetAt(v3, v13, &a3); /*0x719602*/
  v14 = (unsigned __int16 *)sub_718C30("m_eTest", *((unsigned __int16 *)this + 0xC) >> 0xC); /*0x719614*/
  v15 = v3->end; /*0x719619*/
  a3 = v14; /*0x71961d*/
  if ( v15 >= v3->capacity ) /*0x71962a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x719635*/
  NiTArray_SetAt(v3, v15, &a3); /*0x719642*/
  v16 = (unsigned __int16 *)sub_718D40("m_eFailAct", (*((unsigned __int8 *)this + 0x18) >> 1) & 7); /*0x719656*/
  v17 = v3->end; /*0x71965b*/
  a3 = v16; /*0x71965f*/
  if ( v17 >= v3->capacity ) /*0x71966c*/
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize); /*0x719677*/
  NiTArray_SetAt(v3, v17, &a3); /*0x719684*/
  v18 = (unsigned __int16 *)sub_718D40("m_eZFailAct", (*((unsigned __int8 *)this + 0x18) >> 4) & 7); /*0x719699*/
  v19 = v3->end; /*0x71969e*/
  a3 = v18; /*0x7196a2*/
  if ( v19 >= v3->capacity ) /*0x7196af*/
    NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize); /*0x7196ba*/
  NiTArray_SetAt(v3, v19, &a3); /*0x7196c7*/
  v20 = (unsigned __int16 *)sub_718D40("m_ePassAct", (*((unsigned __int16 *)this + 0xC) >> 7) & 7); /*0x7196dc*/
  v21 = v3->end; /*0x7196e1*/
  a3 = v20; /*0x7196e5*/
  if ( v21 >= v3->capacity ) /*0x7196f2*/
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize); /*0x7196fd*/
  NiTArray_SetAt(v3, v21, &a3); /*0x71970a*/
  v22 = (unsigned __int16 *)sub_718E20("m_eDrawMode", (*((unsigned __int16 *)this + 0xC) >> 0xA) & 3); /*0x71971f*/
  v23 = v3->end; /*0x719724*/
  a3 = v22; /*0x719728*/
  if ( v23 >= v3->capacity ) /*0x719735*/
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize); /*0x719740*/
  return NiTArray_SetAt(v3, v23, &a3); /*0x719752*/
}
