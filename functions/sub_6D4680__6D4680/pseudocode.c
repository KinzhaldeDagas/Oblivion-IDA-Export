unsigned int __thiscall sub_6D4680(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d4681*/
  sub_6EC660(this, a2); /*0x6d4687*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3D80C.name); /*0x6d4692*/
  end = v2->end; /*0x6d4697*/
  capacity = v2->capacity; /*0x6d469b*/
  a2 = v3; /*0x6d46a4*/
  if ( end >= capacity ) /*0x6d46a8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d46b3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6d46c5*/
}
