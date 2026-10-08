unsigned int __thiscall sub_727E90(unsigned __int16 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x727e92*/
  sub_7278B0(this, a2); /*0x727e9a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD98.name); /*0x727ea5*/
  end = v2->end; /*0x727eaa*/
  capacity = v2->capacity; /*0x727eae*/
  a2 = v4; /*0x727eb7*/
  if ( end >= capacity ) /*0x727ebb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x727ec6*/
  NiTArray_SetAt(v2, end, &a2); /*0x727ed3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiShaderDeclarationIndex", *((_DWORD *)this + 0xB)); /*0x727ee1*/
  v8 = v2->end; /*0x727ee6*/
  v9 = v2->capacity; /*0x727eea*/
  a2 = v7; /*0x727ef3*/
  if ( v8 >= v9 ) /*0x727ef7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x727f02*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x727f14*/
}
