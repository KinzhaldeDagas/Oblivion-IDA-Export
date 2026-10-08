unsigned int __thiscall sub_730D30(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x730d31*/
  sub_721730(this, a2); /*0x730d37*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FFA8.name); /*0x730d42*/
  end = v2->end; /*0x730d47*/
  capacity = v2->capacity; /*0x730d4b*/
  a2 = v3; /*0x730d54*/
  if ( end >= capacity ) /*0x730d58*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x730d63*/
  return NiTArray_SetAt(v2, end, &a2); /*0x730d75*/
}
