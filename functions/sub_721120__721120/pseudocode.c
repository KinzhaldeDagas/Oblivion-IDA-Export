unsigned int __thiscall sub_721120(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x721121*/
  sub_7028C0(this, a2); /*0x721127*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD34.name); /*0x721132*/
  end = v3->end; /*0x721137*/
  capacity = v3->capacity; /*0x72113b*/
  a2 = v4; /*0x721144*/
  if ( end >= capacity ) /*0x721148*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x721153*/
  return NiTArray_SetAt(v3, end, &a2); /*0x721165*/
}
