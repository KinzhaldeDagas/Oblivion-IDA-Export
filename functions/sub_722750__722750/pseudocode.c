unsigned int __userpurge sub_722750@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x722751*/
  sub_723620(this, a2, a3); /*0x722757*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD54.name); /*0x722762*/
  end = v3->end; /*0x722767*/
  capacity = v3->capacity; /*0x72276b*/
  a3 = v4; /*0x722774*/
  if ( end >= capacity ) /*0x722778*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x722783*/
  return NiTArray_SetAt(v3, end, &a3); /*0x722795*/
}
