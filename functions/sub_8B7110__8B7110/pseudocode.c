unsigned int __thiscall sub_8B7110(_DWORD *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b7111*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8b7117*/
  v3 = TESOutput_PrintString((char *)stru_BA7FD8.name); /*0x8b7122*/
  end = v2->end; /*0x8b7127*/
  capacity = v2->capacity; /*0x8b712b*/
  a2 = v3; /*0x8b7134*/
  if ( end >= capacity ) /*0x8b7138*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b7143*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8b7155*/
}
