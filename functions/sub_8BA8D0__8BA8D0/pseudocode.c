unsigned int __thiscall sub_8BA8D0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8ba8d1*/
  sub_8AED00(this, a2); /*0x8ba8d7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8030.name); /*0x8ba8e2*/
  end = v2->end; /*0x8ba8e7*/
  capacity = v2->capacity; /*0x8ba8eb*/
  a2 = v3; /*0x8ba8f4*/
  if ( end >= capacity ) /*0x8ba8f8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8ba903*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8ba915*/
}
