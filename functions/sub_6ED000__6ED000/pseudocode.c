unsigned int __userpurge sub_6ED000@<eax>(unsigned __int8 *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_6CE3F0(this, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3EF5C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledString(a2, (int)"Extra Data Name", *((_DWORD *)this + 0x10));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  return NiTArray_SetAt(v3, v9, &a3);
}
