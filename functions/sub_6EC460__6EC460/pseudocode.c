unsigned int __thiscall sub_6EC460(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ec461*/
  sub_6EBAC0(this, a2); /*0x6ec467*/
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3ED80); /*0x6ec472*/
  end = v2->end; /*0x6ec477*/
  capacity = v2->capacity; /*0x6ec47b*/
  a2 = v3; /*0x6ec484*/
  if ( end >= capacity ) /*0x6ec488*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ec493*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6ec4a5*/
}
