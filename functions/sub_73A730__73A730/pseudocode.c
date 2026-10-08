unsigned int __thiscall sub_73A730(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73a731*/
  sub_717790(this, a2); /*0x73a737*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40140.name); /*0x73a742*/
  end = v2->end; /*0x73a747*/
  capacity = v2->capacity; /*0x73a74b*/
  a2 = v3; /*0x73a754*/
  if ( end >= capacity ) /*0x73a758*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73a763*/
  return NiTArray_SetAt(v2, end, &a2); /*0x73a775*/
}
