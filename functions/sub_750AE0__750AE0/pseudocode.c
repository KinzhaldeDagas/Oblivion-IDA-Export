unsigned int __thiscall sub_750AE0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  int v8; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_75E760(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40BCC);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  result = NiTArray_SetAt(v2, end, &a2);
  v8 = *((_DWORD *)this + 0x12);
  if ( v8 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v8 + 0x30))(v8, v2);
  return result;
}
