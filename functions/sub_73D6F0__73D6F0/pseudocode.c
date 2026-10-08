unsigned int __thiscall sub_73D6F0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73d6f2*/
  sub_700B10(this, a2); /*0x73d6fa*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40198.name); /*0x73d705*/
  end = v3->end; /*0x73d70a*/
  capacity = v3->capacity; /*0x73d70e*/
  a2 = v5; /*0x73d717*/
  if ( end >= capacity ) /*0x73d71b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73d726*/
  NiTArray_SetAt(v3, end, &a2); /*0x73d733*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x73d73e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bSpec", (char)a2); /*0x73d74c*/
  v9 = v3->end; /*0x73d751*/
  a2 = v8; /*0x73d755*/
  if ( v9 >= v3->capacity ) /*0x73d762*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x73d76d*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x73d77f*/
}
