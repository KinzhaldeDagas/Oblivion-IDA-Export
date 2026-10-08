unsigned int __thiscall sub_75F730(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75f731*/
  sub_75E760(this, a2); /*0x75f737*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41F8C.name); /*0x75f742*/
  end = v2->end; /*0x75f747*/
  capacity = v2->capacity; /*0x75f74b*/
  a2 = (char *)v3; /*0x75f754*/
  if ( end >= capacity ) /*0x75f758*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75f763*/
  return NiTArray_SetAt(v2, end, &a2); /*0x75f775*/
}
