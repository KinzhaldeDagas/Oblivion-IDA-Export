unsigned int __thiscall sub_8AF270(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8af271*/
  sub_8AEE90(this, a2); /*0x8af277*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7F78.name); /*0x8af282*/
  end = v2->end; /*0x8af287*/
  capacity = v2->capacity; /*0x8af28b*/
  a2 = v3; /*0x8af294*/
  if ( end >= capacity ) /*0x8af298*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8af2a3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8af2b5*/
}
