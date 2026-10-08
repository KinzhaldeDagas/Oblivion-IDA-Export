unsigned int __thiscall sub_717790(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x717791*/
  sub_722750(this, a2); /*0x717797*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCD4.name); /*0x7177a2*/
  end = v2->end; /*0x7177a7*/
  capacity = v2->capacity; /*0x7177ab*/
  a2 = v3; /*0x7177b4*/
  if ( end >= capacity ) /*0x7177b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7177c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7177d5*/
}
