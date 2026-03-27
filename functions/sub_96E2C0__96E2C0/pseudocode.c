int __thiscall sub_96E2C0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_711E00(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA9AC8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  return (*(int (__thiscall **)(void *, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)this + 0x34))(this, v2);
}
