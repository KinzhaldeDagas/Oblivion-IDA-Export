unsigned int __thiscall sub_701A30(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x701a31*/
  sub_7009A0(this, a2); /*0x701a37*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F938.name); /*0x701a42*/
  end = v2->end; /*0x701a47*/
  capacity = v2->capacity; /*0x701a4b*/
  a2 = v3; /*0x701a54*/
  if ( end >= capacity ) /*0x701a58*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x701a63*/
  return NiTArray_SetAt(v2, end, &a2); /*0x701a75*/
}
