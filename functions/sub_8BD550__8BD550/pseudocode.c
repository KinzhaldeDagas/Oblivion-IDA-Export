unsigned int __thiscall sub_8BD550(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8bd551*/
  sub_8AEE90(this, a2); /*0x8bd557*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8050.name); /*0x8bd562*/
  end = v2->end; /*0x8bd567*/
  capacity = v2->capacity; /*0x8bd56b*/
  a2 = v3; /*0x8bd574*/
  if ( end >= capacity ) /*0x8bd578*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8bd583*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8bd595*/
}
