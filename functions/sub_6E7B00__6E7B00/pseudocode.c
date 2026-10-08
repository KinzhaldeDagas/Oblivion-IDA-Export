unsigned int __thiscall sub_6E7B00(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e7b01*/
  sub_7009A0(this, a2); /*0x6e7b07*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E728.name); /*0x6e7b12*/
  end = v2->end; /*0x6e7b17*/
  capacity = v2->capacity; /*0x6e7b1b*/
  a2 = v3; /*0x6e7b24*/
  if ( end >= capacity ) /*0x6e7b28*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e7b33*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e7b45*/
}
