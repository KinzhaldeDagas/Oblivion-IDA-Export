unsigned int __thiscall sub_49FF20(const char **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  const char *v10; // [esp-8h] [ebp-14h]

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_6CA440(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B35270);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)FormHeapAlloc(0x20u);
  v10 = *(this + 0x17);
  a2 = v7;
  _sprintf((char *)v7, "AccumRoot = %s", v10);
  v8 = v2->end;
  if ( v8 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  return NiTArray_SetAt(v2, v8, &a2);
}
