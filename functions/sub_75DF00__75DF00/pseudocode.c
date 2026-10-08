unsigned int __thiscall sub_75DF00(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75df01*/
  sub_75A0E0(this, a2); /*0x75df07*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41C4C.name); /*0x75df12*/
  end = v2->end; /*0x75df17*/
  capacity = v2->capacity; /*0x75df1b*/
  a2 = v3; /*0x75df24*/
  if ( end >= capacity ) /*0x75df28*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75df33*/
  return NiTArray_SetAt(v2, end, &a2); /*0x75df45*/
}
