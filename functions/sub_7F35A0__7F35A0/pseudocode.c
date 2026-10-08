unsigned int __thiscall sub_7F35A0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7f35a1*/
  sub_7E28E0(this, a2); /*0x7f35a7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B468EC.name); /*0x7f35b2*/
  end = v2->end; /*0x7f35b7*/
  capacity = v2->capacity; /*0x7f35bb*/
  a2 = v3; /*0x7f35c4*/
  if ( end >= capacity ) /*0x7f35c8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7f35d3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7f35e5*/
}
