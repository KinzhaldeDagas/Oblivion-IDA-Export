unsigned int __thiscall sub_72FD30(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x72fd31*/
  sub_7009A0(this, a2); /*0x72fd37*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FF3C.name); /*0x72fd42*/
  end = v2->end; /*0x72fd47*/
  capacity = v2->capacity; /*0x72fd4b*/
  a2 = v3; /*0x72fd54*/
  if ( end >= capacity ) /*0x72fd58*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x72fd63*/
  return NiTArray_SetAt(v2, end, &a2); /*0x72fd75*/
}
