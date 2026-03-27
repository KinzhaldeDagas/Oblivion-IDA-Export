unsigned int __userpurge sub_7C83B0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_7411F0(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B43484);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fog start distance", *(this + 0xB));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fog end distance", *(this + 0xC));
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  return NiTArray_SetAt(v3, v12, &a3);
}
