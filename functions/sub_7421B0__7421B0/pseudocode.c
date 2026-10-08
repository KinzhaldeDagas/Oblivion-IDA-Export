unsigned int __thiscall sub_7421B0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7421b1*/
  sub_723620(this, a2); /*0x7421b7*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4021C.name); /*0x7421c2*/
  end = v3->end; /*0x7421c7*/
  capacity = v3->capacity; /*0x7421cb*/
  a2 = v4; /*0x7421d4*/
  if ( end >= capacity ) /*0x7421d8*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7421e3*/
  return NiTArray_SetAt(v3, end, &a2); /*0x7421f5*/
}
