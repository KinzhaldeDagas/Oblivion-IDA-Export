unsigned int __thiscall sub_73AAE0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73aae1*/
  sub_70DC20(this, a2); /*0x73aae7*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40138.name); /*0x73aaf2*/
  end = v3->end; /*0x73aaf7*/
  capacity = v3->capacity; /*0x73aafb*/
  a2 = v4; /*0x73ab04*/
  if ( end >= capacity ) /*0x73ab08*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73ab13*/
  return NiTArray_SetAt(v3, end, &a2); /*0x73ab25*/
}
