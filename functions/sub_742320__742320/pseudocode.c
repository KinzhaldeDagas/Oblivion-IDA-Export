unsigned int __userpurge sub_742320@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = a3;
  sub_71A790(this, a2, a3);
  v4 = TESOutput_PrintString(*(char **)dword_B40224);
  end = v3->end;
  capacity = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  return NiTArray_SetAt(v3, end, &a3);
}
