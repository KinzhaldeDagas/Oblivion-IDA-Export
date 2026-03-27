unsigned int __userpurge sub_700540@<eax>(int *this@<ecx>, int ebp0@<ebp>, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7009A0(this, a2);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F584);
  end = v3->end;
  capacity = v3->capacity;
  a2 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a2);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledString(ebp0, (int)"m_pcName", *(this + 2));
  v9 = v3->end;
  v10 = v3->capacity;
  a2 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  return NiTArray_SetAt(v3, v9, &a2);
}
