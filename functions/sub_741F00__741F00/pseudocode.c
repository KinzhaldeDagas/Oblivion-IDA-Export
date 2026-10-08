unsigned int __thiscall sub_741F00(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x741f02*/
  sub_721730(this, a2); /*0x741f0a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40214.name); /*0x741f15*/
  end = v2->end; /*0x741f1a*/
  capacity = v2->capacity; /*0x741f1e*/
  a2 = v4; /*0x741f27*/
  if ( end >= capacity ) /*0x741f2b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x741f36*/
  NiTArray_SetAt(v2, end, &a2); /*0x741f43*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bValue", *((_BYTE *)this + 0xC)); /*0x741f52*/
  v8 = v2->end; /*0x741f57*/
  v9 = v2->capacity; /*0x741f5b*/
  a2 = v7; /*0x741f64*/
  if ( v8 >= v9 ) /*0x741f68*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x741f73*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x741f85*/
}
