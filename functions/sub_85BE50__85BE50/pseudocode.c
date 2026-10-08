unsigned int __thiscall sub_85BE50(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x85be51*/
  sub_7E28E0(this, a2); /*0x85be57*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B47848.name); /*0x85be62*/
  end = v2->end; /*0x85be67*/
  capacity = v2->capacity; /*0x85be6b*/
  a2 = v3; /*0x85be74*/
  if ( end >= capacity ) /*0x85be78*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x85be83*/
  return NiTArray_SetAt(v2, end, &a2); /*0x85be95*/
}
