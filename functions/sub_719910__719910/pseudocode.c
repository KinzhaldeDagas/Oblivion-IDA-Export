unsigned int __thiscall sub_719910(float *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_71A790(this, (int)a2);
  v3 = TESOutput_PrintString(*(char **)dword_B3FCFC);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  return NiTArray_SetAt(v2, end, &a2);
}
