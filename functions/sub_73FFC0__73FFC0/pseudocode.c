unsigned int __thiscall sub_73FFC0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73ffc1*/
  sub_700B10(this, a2); /*0x73ffc7*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B401D0.name); /*0x73ffd2*/
  end = v3->end; /*0x73ffd7*/
  capacity = v3->capacity; /*0x73ffdb*/
  a2 = v4; /*0x73ffe4*/
  if ( end >= capacity ) /*0x73ffe8*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73fff3*/
  return NiTArray_SetAt(v3, end, &a2); /*0x740005*/
}
