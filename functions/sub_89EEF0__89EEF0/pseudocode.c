unsigned int __thiscall sub_89EEF0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  __int16 v7; // ax
  char v8; // al
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_898210(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_BA7D24);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((_WORD *)this + 6);
  v8 = (v7 & 0x20) != 0 && (v7 & 0x40) == 0;
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledBool("bUseVel", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  return NiTArray_SetAt(v2, v10, &a2);
}
