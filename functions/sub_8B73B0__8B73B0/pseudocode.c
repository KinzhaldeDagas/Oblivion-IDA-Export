unsigned int __thiscall sub_8B73B0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b73b1*/
  sub_89F290(this, a2); /*0x8b73b7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7FE0.name); /*0x8b73c2*/
  end = v2->end; /*0x8b73c7*/
  capacity = v2->capacity; /*0x8b73cb*/
  a2 = v3; /*0x8b73d4*/
  if ( end >= capacity ) /*0x8b73d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b73e3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8b73f5*/
}
