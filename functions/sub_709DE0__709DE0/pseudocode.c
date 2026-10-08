unsigned int __thiscall sub_709DE0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x709de1*/
  sub_717790(this, a2); /*0x709de7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FAA8.name); /*0x709df2*/
  end = v2->end; /*0x709df7*/
  capacity = v2->capacity; /*0x709dfb*/
  a2 = v3; /*0x709e04*/
  if ( end >= capacity ) /*0x709e08*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x709e13*/
  return NiTArray_SetAt(v2, end, &a2); /*0x709e25*/
}
