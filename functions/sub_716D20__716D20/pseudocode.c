unsigned int __thiscall sub_716D20(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x716d22*/
  sub_721730(this, a2); /*0x716d2a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCC0.name); /*0x716d35*/
  end = v2->end; /*0x716d3a*/
  capacity = v2->capacity; /*0x716d3e*/
  a2 = v4; /*0x716d47*/
  if ( end >= capacity ) /*0x716d4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x716d56*/
  NiTArray_SetAt(v2, end, &a2); /*0x716d63*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_pString", (const char *)*(this + 3)); /*0x716d71*/
  v8 = v2->end; /*0x716d76*/
  v9 = v2->capacity; /*0x716d7a*/
  a2 = v7; /*0x716d83*/
  if ( v8 >= v9 ) /*0x716d87*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x716d92*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x716da4*/
}
