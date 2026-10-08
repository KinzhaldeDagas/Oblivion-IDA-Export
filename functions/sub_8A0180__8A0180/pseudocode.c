unsigned int __thiscall sub_8A0180(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8a0181*/
  sub_89DA00(this, a2); /*0x8a0187*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7D44.name); /*0x8a0192*/
  end = v2->end; /*0x8a0197*/
  capacity = v2->capacity; /*0x8a019b*/
  a2 = v3; /*0x8a01a4*/
  if ( end >= capacity ) /*0x8a01a8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8a01b3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8a01c5*/
}
