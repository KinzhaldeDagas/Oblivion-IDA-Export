unsigned int __thiscall sub_8AE9A0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8ae9a1*/
  sub_8A2A50(this, a2); /*0x8ae9a7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7F48.name); /*0x8ae9b2*/
  end = v2->end; /*0x8ae9b7*/
  capacity = v2->capacity; /*0x8ae9bb*/
  a2 = v3; /*0x8ae9c4*/
  if ( end >= capacity ) /*0x8ae9c8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8ae9d3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8ae9e5*/
}
