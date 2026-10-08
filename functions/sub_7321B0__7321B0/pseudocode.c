unsigned int __thiscall sub_7321B0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7321b1*/
  sub_7009A0(this, a2); /*0x7321b7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FFC0.name); /*0x7321c2*/
  end = v2->end; /*0x7321c7*/
  capacity = v2->capacity; /*0x7321cb*/
  a2 = v3; /*0x7321d4*/
  if ( end >= capacity ) /*0x7321d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7321e3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7321f5*/
}
