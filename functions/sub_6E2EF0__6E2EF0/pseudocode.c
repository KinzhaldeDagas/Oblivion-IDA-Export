unsigned int __userpurge sub_6E2EF0@<eax>(unsigned __int8 *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x6e2ef2*/
  sub_6ED000(this, a2, a3); /*0x6e2efa*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E1AC.name); /*0x6e2f05*/
  end = v3->end; /*0x6e2f0a*/
  capacity = v3->capacity; /*0x6e2f0e*/
  a3 = v5; /*0x6e2f17*/
  if ( end >= capacity ) /*0x6e2f1b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6e2f26*/
  NiTArray_SetAt(v3, end, &a3); /*0x6e2f33*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_iFloatsExtraDataIndex", *((_DWORD *)this + 0x12)); /*0x6e2f41*/
  v9 = v3->end; /*0x6e2f46*/
  v10 = v3->capacity; /*0x6e2f4a*/
  a3 = v8; /*0x6e2f53*/
  if ( v9 >= v10 ) /*0x6e2f57*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6e2f62*/
  return NiTArray_SetAt(v3, v9, &a3); /*0x6e2f74*/
}
