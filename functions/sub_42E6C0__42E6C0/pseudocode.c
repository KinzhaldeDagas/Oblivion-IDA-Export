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

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  BSFile_BuildFormattedStatusArray(this, (char)a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString((int)"ArchiveFile");
  end = v3->end;
  a3 = v5;
  if ( end >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString(a2, (int)"From", *(this + 0x55) + 0x3C);
  v8 = v3->end;
  a3 = v7;
  if ( v8 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v8 + v3->growSize);
  NiTArray_SetAt(v3, v8, &a3);
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"Offset", *(this + 0x56));
  v10 = v3->end;
  capacity = v3->capacity;
  a3 = v9;
  if ( v10 >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize);
  return NiTArray_SetAt(v3, v10, &a3);
}
