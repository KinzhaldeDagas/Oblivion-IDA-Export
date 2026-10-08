unsigned int __userpurge sub_7179F0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x7179f1*/
  sub_723620(this, a2, a3); /*0x7179f7*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCDC.name); /*0x717a02*/
  end = v3->end; /*0x717a07*/
  capacity = v3->capacity; /*0x717a0b*/
  a3 = v4; /*0x717a14*/
  if ( end >= capacity ) /*0x717a18*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x717a23*/
  return NiTArray_SetAt(v3, end, &a3); /*0x717a35*/
}
