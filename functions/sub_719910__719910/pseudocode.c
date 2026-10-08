unsigned int __userpurge sub_719910@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = a3; /*0x719911*/
  sub_71A790(this, a2, a3); /*0x719917*/
  v4 = TESOutput_PrintString((char *)stru_B3FCFC.name); /*0x719922*/
  end = v3->end; /*0x719927*/
  capacity = v3->capacity; /*0x71992b*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v4; /*0x719934*/
  if ( end >= capacity ) /*0x719938*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x719943*/
  return NiTArray_SetAt(v3, end, &a3); /*0x719955*/
}
