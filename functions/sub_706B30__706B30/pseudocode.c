unsigned int __thiscall sub_706B30(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x706b32*/
  sub_700B10(this, a2); /*0x706b3a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F988.name); /*0x706b45*/
  end = v3->end; /*0x706b4a*/
  capacity = v3->capacity; /*0x706b4e*/
  a2 = v5; /*0x706b57*/
  if ( end >= capacity ) /*0x706b5b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x706b66*/
  NiTArray_SetAt(v3, end, &a2); /*0x706b73*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x706b7e*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bWireframe", (char)a2); /*0x706b8c*/
  v9 = v3->end; /*0x706b91*/
  a2 = v8; /*0x706b95*/
  if ( v9 >= v3->capacity ) /*0x706ba2*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x706bad*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x706bbf*/
}
