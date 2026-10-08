unsigned int __userpurge sub_6E4410@<eax>(unsigned __int8 *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x6e4411*/
  sub_6ED000(this, a2, a3); /*0x6e4417*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E314.name); /*0x6e4422*/
  end = v3->end; /*0x6e4427*/
  capacity = v3->capacity; /*0x6e442b*/
  a3 = v4; /*0x6e4434*/
  if ( end >= capacity ) /*0x6e4438*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6e4443*/
  return NiTArray_SetAt(v3, end, &a3); /*0x6e4455*/
}
