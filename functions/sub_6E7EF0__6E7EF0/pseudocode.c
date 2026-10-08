unsigned int __thiscall sub_6E7EF0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e7ef1*/
  sub_6E8620(this, a2); /*0x6e7ef7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E7A0.name); /*0x6e7f02*/
  end = v2->end; /*0x6e7f07*/
  capacity = v2->capacity; /*0x6e7f0b*/
  a2 = v3; /*0x6e7f14*/
  if ( end >= capacity ) /*0x6e7f18*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e7f23*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e7f35*/
}
