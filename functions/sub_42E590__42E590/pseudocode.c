unsigned int __thiscall sub_42E590(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned __int16 *v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  BSFile_BuildFormattedStatusArray(this, (char)a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString((int)"Archive");
  end = v2->end;
  a2 = v4;
  if ( end >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v6 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"uiVersion", *(this + 0x56));
  v7 = v2->end;
  a2 = v6;
  if ( v7 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize);
  NiTArray_SetAt(v2, v7, &a2);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"uiDirectoryCount", *(this + 0x59));
  v9 = v2->end;
  a2 = v8;
  if ( v9 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
  NiTArray_SetAt(v2, v9, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt((int)"uiFileCount", *(this + 0x5A));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  return NiTArray_SetAt(v2, v11, &a2);
}
