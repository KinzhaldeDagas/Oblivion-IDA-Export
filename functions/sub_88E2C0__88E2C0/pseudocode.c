unsigned int __thiscall sub_88E2C0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_8BA8D0(this, a2);
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA7A0C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v3;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  return NiTArray_SetAt(v2, end, &a2);
}
