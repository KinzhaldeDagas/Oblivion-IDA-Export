unsigned int __userpurge sub_700B10@<eax>(int *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700540(this, a2, a3);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F68C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  return NiTArray_SetAt(v3, end, &a3);
}
