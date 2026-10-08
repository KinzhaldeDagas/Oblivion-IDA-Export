unsigned int __thiscall sub_6D7390(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d7391*/
  sub_6EC1D0(this, a2); /*0x6d7397*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3D9B4.name); /*0x6d73a2*/
  end = v2->end; /*0x6d73a7*/
  capacity = v2->capacity; /*0x6d73ab*/
  a2 = v3; /*0x6d73b4*/
  if ( end >= capacity ) /*0x6d73b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d73c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6d73d5*/
}
