unsigned int __thiscall sub_7581B0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7581b1*/
  sub_75F730(this, a2); /*0x7581b7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B416CC.name); /*0x7581c2*/
  end = v2->end; /*0x7581c7*/
  capacity = v2->capacity; /*0x7581cb*/
  a2 = v3; /*0x7581d4*/
  if ( end >= capacity ) /*0x7581d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7581e3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7581f5*/
}
