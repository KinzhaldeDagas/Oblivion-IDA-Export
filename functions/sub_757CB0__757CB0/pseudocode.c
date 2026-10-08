unsigned int __thiscall sub_757CB0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757cb1*/
  sub_75F730(this, a2); /*0x757cb7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B414CC.name); /*0x757cc2*/
  end = v2->end; /*0x757cc7*/
  capacity = v2->capacity; /*0x757ccb*/
  a2 = v3; /*0x757cd4*/
  if ( end >= capacity ) /*0x757cd8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757ce3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x757cf5*/
}
