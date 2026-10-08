unsigned int __thiscall sub_727820(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // edx
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintLabeledUnsignedInt("        m_uiDataBlockSize", *(this + 1)); /*0x72782f*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x727834*/
  v5 = a2[5]; /*0x727838*/
  v6 = a2[4]; /*0x72783c*/
  v11 = v3; /*0x727845*/
  if ( v5 >= v6 ) /*0x727849*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x727854*/
  NiTArray_SetAt(v4, v5, &v11); /*0x727861*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("        m_pucDataBlock", *(this + 2)); /*0x72786f*/
  end = v4->end; /*0x727874*/
  capacity = v4->capacity; /*0x727878*/
  a2 = v7; /*0x727881*/
  if ( end >= capacity ) /*0x727885*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x727890*/
  return NiTArray_SetAt(v4, end, &a2); /*0x7278a2*/
}
