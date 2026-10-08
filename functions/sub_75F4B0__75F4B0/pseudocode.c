unsigned int __thiscall sub_75F4B0(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75f4b1*/
  sub_75E760(this, a2); /*0x75f4b7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41F2C.name); /*0x75f4c2*/
  end = v2->end; /*0x75f4c7*/
  capacity = v2->capacity; /*0x75f4cb*/
  a2 = (char *)v3; /*0x75f4d4*/
  if ( end >= capacity ) /*0x75f4d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75f4e3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x75f4f5*/
}
