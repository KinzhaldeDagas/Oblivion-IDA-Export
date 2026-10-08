unsigned int __thiscall sub_719C60(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x719c61*/
  sub_722750(this, a2); /*0x719c67*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD04.name); /*0x719c72*/
  end = v2->end; /*0x719c77*/
  capacity = v2->capacity; /*0x719c7b*/
  a2 = v3; /*0x719c84*/
  if ( end >= capacity ) /*0x719c88*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x719c93*/
  return NiTArray_SetAt(v2, end, &a2); /*0x719ca5*/
}
