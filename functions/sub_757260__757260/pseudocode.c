unsigned int __thiscall sub_757260(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757261*/
  sub_75F730(this, a2); /*0x757267*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B412EC.name); /*0x757272*/
  end = v2->end; /*0x757277*/
  capacity = v2->capacity; /*0x75727b*/
  a2 = v3; /*0x757284*/
  if ( end >= capacity ) /*0x757288*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757293*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7572a5*/
}
