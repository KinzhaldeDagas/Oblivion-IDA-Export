unsigned int __thiscall sub_6E6670(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_6E6AC0(this, a2);
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3E5F0);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  return NiTArray_SetAt(v2, end, &a2);
}
