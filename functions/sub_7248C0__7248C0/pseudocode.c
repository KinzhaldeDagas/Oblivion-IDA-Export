unsigned int __userpurge sub_7248C0@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v3 = a3; /*0x7248c2*/
  sub_70BAE0(this, a2, a3); /*0x7248ca*/
  v5 = TESOutput_PrintString((char *)stru_B3FD70.name); /*0x7248d5*/
  end = v3->end; /*0x7248da*/
  capacity = v3->capacity; /*0x7248de*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x7248e7*/
  if ( end >= capacity ) /*0x7248eb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7248f6*/
  NiTArray_SetAt(v3, end, &a3); /*0x724903*/
  v8 = TESOutput_PrintLabeledSignedInt("m_iIndex", *((_DWORD *)this + 0x38)); /*0x724914*/
  v9 = v3->end; /*0x724919*/
  v10 = v3->capacity; /*0x72491d*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x724926*/
  if ( v9 >= v10 ) /*0x72492a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x724935*/
  NiTArray_SetAt(v3, v9, &a3); /*0x724942*/
  LOBYTE(a3) = *(_BYTE *)(this + 0x37) & 1; /*0x724950*/
  v11 = TESOutput_PrintLabeledBool("m_bUpdateOnlyActive", (char)a3); /*0x72495e*/
  v12 = v3->end; /*0x724963*/
  v13 = v3->capacity; /*0x724967*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x724970*/
  if ( v12 >= v13 ) /*0x724974*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x72497f*/
  return NiTArray_SetAt(v3, v12, &a3); /*0x724991*/
}
