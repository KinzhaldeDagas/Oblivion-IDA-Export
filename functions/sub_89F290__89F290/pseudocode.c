unsigned int __thiscall sub_89F290(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x89f291*/
  sub_898210(this, a2); /*0x89f297*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7D2C.name); /*0x89f2a2*/
  end = v2->end; /*0x89f2a7*/
  capacity = v2->capacity; /*0x89f2ab*/
  a2 = v3; /*0x89f2b4*/
  if ( end >= capacity ) /*0x89f2b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x89f2c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x89f2d5*/
}
