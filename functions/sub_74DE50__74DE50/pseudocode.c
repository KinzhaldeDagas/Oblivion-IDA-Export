unsigned int __thiscall sub_74DE50(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74de51*/
  sub_752EC0(this, a2); /*0x74de57*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40A28.name); /*0x74de62*/
  end = v2->end; /*0x74de67*/
  capacity = v2->capacity; /*0x74de6b*/
  a2 = v3; /*0x74de74*/
  if ( end >= capacity ) /*0x74de78*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74de83*/
  return NiTArray_SetAt(v2, end, &a2); /*0x74de95*/
}
