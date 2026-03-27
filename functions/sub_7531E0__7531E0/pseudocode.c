unsigned int __thiscall sub_7531E0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_74F4F0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40D60);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  result = *((_DWORD *)this + 0x14);
  if ( result )
  {
    v8 = (unsigned __int16 *)TESOutput_PrintLabeledString("Emitter Object", *(const char **)(result + 8));
    v9 = v2->end;
    v10 = v2->capacity;
    a2 = v8;
    if ( v9 >= v10 )
      NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize);
    return NiTArray_SetAt(v2, v9, &a2);
  }
  return result;
}
