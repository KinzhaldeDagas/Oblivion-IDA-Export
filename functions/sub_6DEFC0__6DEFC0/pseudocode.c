unsigned int __thiscall sub_6DEFC0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6defc1*/
  sub_6ECC30(this, a2); /*0x6defc7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DE94.name); /*0x6defd2*/
  end = v2->end; /*0x6defd7*/
  capacity = v2->capacity; /*0x6defdb*/
  a2 = v3; /*0x6defe4*/
  if ( end >= capacity ) /*0x6defe8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6deff3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6df005*/
}
