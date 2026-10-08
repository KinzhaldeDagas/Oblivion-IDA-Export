unsigned int __thiscall sub_74EBE0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74ebe1*/
  sub_749D70(this, a2); /*0x74ebe7*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40B1C.name); /*0x74ebf2*/
  end = v3->end; /*0x74ebf7*/
  capacity = v3->capacity; /*0x74ebfb*/
  a2 = v4; /*0x74ec04*/
  if ( end >= capacity ) /*0x74ec08*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x74ec13*/
  return NiTArray_SetAt(v3, end, &a2); /*0x74ec25*/
}
