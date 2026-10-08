unsigned int __thiscall sub_89D820(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x89d821*/
  sub_89D510(this, a2); /*0x89d827*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7C00.name); /*0x89d832*/
  end = v2->end; /*0x89d837*/
  capacity = v2->capacity; /*0x89d83b*/
  a2 = v3; /*0x89d844*/
  if ( end >= capacity ) /*0x89d848*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x89d853*/
  return NiTArray_SetAt(v2, end, &a2); /*0x89d865*/
}
