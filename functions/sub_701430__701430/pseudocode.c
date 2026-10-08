unsigned int __thiscall sub_701430(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x701431*/
  sub_700540(this, a2); /*0x701437*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F70C.name); /*0x701442*/
  end = v3->end; /*0x701447*/
  capacity = v3->capacity; /*0x70144b*/
  a2 = v4; /*0x701454*/
  if ( end >= capacity ) /*0x701458*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x701463*/
  return NiTArray_SetAt(v3, end, &a2); /*0x701475*/
}
