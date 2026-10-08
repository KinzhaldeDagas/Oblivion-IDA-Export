unsigned int __thiscall sub_8A2A50(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8a2a52*/
  sub_89D820(this, a2); /*0x8a2a5a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7D78.name); /*0x8a2a65*/
  end = v2->end; /*0x8a2a6a*/
  capacity = v2->capacity; /*0x8a2a6e*/
  a2 = v4; /*0x8a2a77*/
  if ( end >= capacity ) /*0x8a2a7b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8a2a86*/
  NiTArray_SetAt(v2, end, &a2); /*0x8a2a93*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("MATERIAL", *(const char **)(4 * *(this + 4) + 0xB2E908)); /*0x8a2aa8*/
  v8 = v2->end; /*0x8a2aad*/
  v9 = v2->capacity; /*0x8a2ab1*/
  a2 = v7; /*0x8a2aba*/
  if ( v8 >= v9 ) /*0x8a2abe*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x8a2ac9*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x8a2adb*/
}
