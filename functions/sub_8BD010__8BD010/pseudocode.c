unsigned int __thiscall sub_8BD010(unsigned int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // edi
  unsigned __int16 *v4; // eax
  unsigned int end; // esi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  unsigned int v8; // ebp
  unsigned int i; // esi
  int v10; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_721730(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA8044);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  result = NiTArray_SetAt(v2, end, &a2);
  v8 = *(this + 7);
  for ( i = 0; i < v8; ++i )
  {
    v10 = *(_DWORD *)(*(this + 4) + 4 * i);
    if ( v10 )
      result = (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v10 + 0x30))(v10, v2);
  }
  return result;
}
