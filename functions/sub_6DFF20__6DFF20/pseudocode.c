void __thiscall sub_6DFF20(char *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  char *v10; // edi
  int v11; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_6EBAC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3DF08);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkLookAt", *((_DWORD *)this + 4));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  sub_6CBAD0((float *)this + 6, (unsigned __int16 *)v2);
  v10 = this + 0x38;
  v11 = 3;
  do
  {
    if ( *(_DWORD *)v10 )
      (*(void (__thiscall **)(_DWORD, NiTArray_NiTexturingPropertyMap *))(**(_DWORD **)v10 + 0x30))(*(_DWORD *)v10, v2);
    v10 += 4;
    --v11;
  }
  while ( v11 );
}
