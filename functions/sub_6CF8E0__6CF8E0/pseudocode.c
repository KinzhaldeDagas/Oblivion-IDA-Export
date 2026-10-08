void __thiscall sub_6CF8E0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6cf8e2*/
  sub_6CDDB0(this, a2); /*0x6cf8ea*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CD1C.name); /*0x6cf8f5*/
  end = v3->end; /*0x6cf8fa*/
  capacity = v3->capacity; /*0x6cf8fe*/
  a2 = v5; /*0x6cf907*/
  if ( end >= capacity ) /*0x6cf90b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6cf916*/
  NiTArray_SetAt(v3, end, &a2); /*0x6cf923*/
  sub_6CBAD0(this + 0xC, (unsigned __int16 *)v3); /*0x6cf92c*/
}
