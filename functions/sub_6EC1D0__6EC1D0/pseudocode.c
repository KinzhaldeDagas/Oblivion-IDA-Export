unsigned int __thiscall sub_6EC1D0(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ec1d1*/
  sub_6CE3F0(this, a2); /*0x6ec1d7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3ED14.name); /*0x6ec1e2*/
  end = v2->end; /*0x6ec1e7*/
  capacity = v2->capacity; /*0x6ec1eb*/
  a2 = (char *)v3; /*0x6ec1f4*/
  if ( end >= capacity ) /*0x6ec1f8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ec203*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6ec215*/
}
