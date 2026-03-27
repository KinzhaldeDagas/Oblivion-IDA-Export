int __thiscall sub_8B04D0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // edi
  int result; // eax
  int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_8A2A50(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA7F9C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( this && (v7 = *(this + 2)) != 0 )
    result = *(_DWORD *)(v7 + 0xC);
  else
    result = 0;
  if ( result )
  {
    v9 = *(_DWORD *)(result + 8);
    if ( v9 )
      return (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v9 + 0x30))(v9, v2);
  }
  return result;
}
