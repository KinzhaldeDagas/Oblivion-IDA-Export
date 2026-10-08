unsigned int __thiscall sub_6FDE00(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  char *v13; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B3F52C.name); /*0x6fde0c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6fde11*/
  v5 = a2[5]; /*0x6fde15*/
  v6 = a2[4]; /*0x6fde19*/
  v13 = v3; /*0x6fde22*/
  if ( v5 >= v6 ) /*0x6fde26*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x6fde31*/
  NiTArray_SetAt(v4, v5, &v13); /*0x6fde3e*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_iLOD", *(this + 0xF)); /*0x6fde4c*/
  end = v4->end; /*0x6fde51*/
  capacity = v4->capacity; /*0x6fde55*/
  a2 = v7; /*0x6fde5e*/
  if ( end >= capacity ) /*0x6fde62*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x6fde6d*/
  NiTArray_SetAt(v4, end, &a2); /*0x6fde7a*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumLODs", *(this + 0x10)); /*0x6fde88*/
  v11 = v4->end; /*0x6fde8d*/
  a2 = v10; /*0x6fde91*/
  if ( v11 >= v4->capacity ) /*0x6fde9e*/
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize); /*0x6fdea9*/
  return NiTArray_SetAt(v4, v11, &a2); /*0x6fdebb*/
}
