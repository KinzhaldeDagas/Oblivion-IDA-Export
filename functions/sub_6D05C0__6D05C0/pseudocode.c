unsigned int __thiscall sub_6D05C0(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_716140(this, (char)a2);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B3CDF8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  LOBYTE(a2) = (*(this + 8) & 0x20) != 0;
  v7 = TESOutput_PrintLabeledBool((int)"IsManagerControlled", (char)a2);
  v8 = v2->end;
  a2 = v7;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  return NiTArray_SetAt(v2, v8, &a2);
}
