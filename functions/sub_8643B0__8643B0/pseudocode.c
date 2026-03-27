unsigned int __thiscall sub_8643B0(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = a2;
  sub_7D9890(this, a2);
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B478A0);
  end = v2->end;
  capacity = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  return NiTArray_SetAt(v2, end, &a2);
}
