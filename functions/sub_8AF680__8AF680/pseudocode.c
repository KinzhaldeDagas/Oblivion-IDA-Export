unsigned int __thiscall sub_8AF680(_DWORD *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8af681*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8af687*/
  v3 = TESOutput_PrintString((char *)stru_BA7F84.name); /*0x8af692*/
  end = v2->end; /*0x8af697*/
  capacity = v2->capacity; /*0x8af69b*/
  a2 = v3; /*0x8af6a4*/
  if ( end >= capacity ) /*0x8af6a8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8af6b3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8af6c5*/
}
