unsigned int __thiscall sub_6DC650(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6dc651*/
  sub_6EC460(this, a2); /*0x6dc657*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DD4C.name); /*0x6dc662*/
  end = v2->end; /*0x6dc667*/
  capacity = v2->capacity; /*0x6dc66b*/
  a2 = v3; /*0x6dc674*/
  if ( end >= capacity ) /*0x6dc678*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6dc683*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6dc695*/
}
