unsigned int __thiscall sub_721730(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B3FD44.name); /*0x72173c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x721741*/
  v5 = a2[5]; /*0x721745*/
  v6 = a2[4]; /*0x721749*/
  v11 = v3; /*0x721752*/
  if ( v5 >= v6 ) /*0x721756*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x721761*/
  NiTArray_SetAt(v4, v5, &v11); /*0x72176e*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_pcName", (const char *)*(this + 2)); /*0x72177c*/
  end = v4->end; /*0x721781*/
  capacity = v4->capacity; /*0x721785*/
  a2 = v7; /*0x72178e*/
  if ( end >= capacity ) /*0x721792*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x72179d*/
  return NiTArray_SetAt(v4, end, &a2); /*0x7217af*/
}
