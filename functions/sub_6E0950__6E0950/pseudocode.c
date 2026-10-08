unsigned int __thiscall sub_6E0950(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e0951*/
  sub_6EC1D0(this, a2); /*0x6e0957*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DFA4.name); /*0x6e0962*/
  end = v2->end; /*0x6e0967*/
  capacity = v2->capacity; /*0x6e096b*/
  a2 = v3; /*0x6e0974*/
  if ( end >= capacity ) /*0x6e0978*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e0983*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e0995*/
}
