unsigned int __thiscall sub_757DA0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757da1*/
  sub_75F730(this, a2); /*0x757da7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41528.name); /*0x757db2*/
  end = v2->end; /*0x757db7*/
  capacity = v2->capacity; /*0x757dbb*/
  a2 = v3; /*0x757dc4*/
  if ( end >= capacity ) /*0x757dc8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757dd3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x757de5*/
}
