unsigned int __thiscall sub_741540(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x741542*/
  sub_700B10(this, a2); /*0x74154a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40200.name); /*0x741555*/
  end = v3->end; /*0x74155a*/
  capacity = v3->capacity; /*0x74155e*/
  a2 = v5; /*0x741567*/
  if ( end >= capacity ) /*0x74156b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x741576*/
  NiTArray_SetAt(v3, end, &a2); /*0x741583*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x74158e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bDither", (char)a2); /*0x74159c*/
  v9 = v3->end; /*0x7415a1*/
  a2 = v8; /*0x7415a5*/
  if ( v9 >= v3->capacity ) /*0x7415b2*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x7415bd*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x7415cf*/
}
