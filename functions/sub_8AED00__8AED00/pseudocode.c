unsigned int __thiscall sub_8AED00(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8aed01*/
  sub_89FB70(this, a2); /*0x8aed07*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7F60.name); /*0x8aed12*/
  end = v2->end; /*0x8aed17*/
  capacity = v2->capacity; /*0x8aed1b*/
  a2 = v3; /*0x8aed24*/
  if ( end >= capacity ) /*0x8aed28*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8aed33*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8aed45*/
}
