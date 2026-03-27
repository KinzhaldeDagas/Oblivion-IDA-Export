unsigned int __thiscall sub_723E50(float *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7248C0(this, (char)a2);
  v4 = TESOutput_PrintString(*(char **)dword_B3FD68);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((_DWORD *)this + 0x3F);
  if ( v7 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v7 + 0x30))(v7, v2);
  v9 = v2->end;
  v10 = v2->capacity;
  a2 = "NULL LOD Data";
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
  return NiTArray_SetAt(v2, v9, &a2);
}
