unsigned int __userpurge sub_740930@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x740931*/
  sub_7421B0(this, a2, a3); /*0x740937*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4021C.name); /*0x740942*/
  end = v3->end; /*0x740947*/
  capacity = v3->capacity; /*0x74094b*/
  a3 = v4; /*0x740954*/
  if ( end >= capacity ) /*0x740958*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x740963*/
  return NiTArray_SetAt(v3, end, &a3); /*0x740975*/
}
