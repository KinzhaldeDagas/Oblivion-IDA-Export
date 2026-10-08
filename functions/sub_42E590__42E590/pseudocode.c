unsigned int __userpurge sub_42E590@<eax>(int *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x42e592*/
  BSFile_BuildFormattedStatusArray(this, a2, a3); /*0x42e59a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString("Archive"); /*0x42e5a4*/
  end = v3->end; /*0x42e5a9*/
  a3 = v5; /*0x42e5ad*/
  if ( end >= v3->capacity ) /*0x42e5ba*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x42e5c5*/
  NiTArray_SetAt(v3, end, &a3); /*0x42e5d2*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("uiVersion", *(this + 0x56)); /*0x42e5e3*/
  v8 = v3->end; /*0x42e5e8*/
  a3 = v7; /*0x42e5ec*/
  if ( v8 >= v3->capacity ) /*0x42e5f9*/
    NiTArray_SetSize((unsigned __int16 *)v3, v8 + v3->growSize); /*0x42e604*/
  NiTArray_SetAt(v3, v8, &a3); /*0x42e611*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("uiDirectoryCount", *(this + 0x59)); /*0x42e622*/
  v10 = v3->end; /*0x42e627*/
  a3 = v9; /*0x42e62b*/
  if ( v10 >= v3->capacity ) /*0x42e638*/
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize); /*0x42e643*/
  NiTArray_SetAt(v3, v10, &a3); /*0x42e650*/
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("uiFileCount", *(this + 0x5A)); /*0x42e661*/
  v12 = v3->end; /*0x42e666*/
  a3 = v11; /*0x42e66a*/
  if ( v12 >= v3->capacity ) /*0x42e677*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x42e682*/
  return NiTArray_SetAt(v3, v12, &a3); /*0x42e694*/
}
