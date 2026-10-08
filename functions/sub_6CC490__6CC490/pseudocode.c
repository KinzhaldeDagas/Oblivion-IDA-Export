unsigned int __userpurge sub_6CC490@<eax>(float *this@<ecx>, unsigned int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x6cc491*/
  sub_6CDDB0(this, a2, a3); /*0x6cc497*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CBF8.name); /*0x6cc4a2*/
  end = v3->end; /*0x6cc4a7*/
  capacity = v3->capacity; /*0x6cc4ab*/
  a3 = v4; /*0x6cc4b4*/
  if ( end >= capacity ) /*0x6cc4b8*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6cc4c3*/
  return NiTArray_SetAt(v3, end, &a3); /*0x6cc4d5*/
}
