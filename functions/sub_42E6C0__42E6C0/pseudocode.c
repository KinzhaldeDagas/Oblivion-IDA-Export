unsigned int __userpurge sub_42E6C0@<eax>(int *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x42e6c2*/
  BSFile_BuildFormattedStatusArray(this, a2, a3); /*0x42e6ca*/
  v5 = (unsigned __int16 *)TESOutput_PrintString("ArchiveFile"); /*0x42e6d4*/
  end = v3->end; /*0x42e6d9*/
  a3 = v5; /*0x42e6dd*/
  if ( end >= v3->capacity ) /*0x42e6ea*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x42e6f5*/
  NiTArray_SetAt(v3, end, &a3); /*0x42e702*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("From", (const char *)(*(this + 0x55) + 0x3C)); /*0x42e716*/
  v8 = v3->end; /*0x42e71b*/
  a3 = v7; /*0x42e71f*/
  if ( v8 >= v3->capacity ) /*0x42e72c*/
    NiTArray_SetSize((unsigned __int16 *)v3, v8 + v3->growSize); /*0x42e737*/
  NiTArray_SetAt(v3, v8, &a3); /*0x42e744*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Offset", *(this + 0x56)); /*0x42e755*/
  v10 = v3->end; /*0x42e75a*/
  capacity = v3->capacity; /*0x42e75e*/
  a3 = v9; /*0x42e767*/
  if ( v10 >= capacity ) /*0x42e76b*/
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize); /*0x42e776*/
  return NiTArray_SetAt(v3, v10, &a3); /*0x42e788*/
}
