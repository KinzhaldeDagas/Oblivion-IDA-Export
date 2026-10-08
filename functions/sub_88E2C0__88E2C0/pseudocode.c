unsigned int __thiscall sub_88E2C0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x88e2c1*/
  sub_8BA8D0(this, a2); /*0x88e2c7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7A0C.name); /*0x88e2d2*/
  end = v2->end; /*0x88e2d7*/
  capacity = v2->capacity; /*0x88e2db*/
  a2 = v3; /*0x88e2e4*/
  if ( end >= capacity ) /*0x88e2e8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x88e2f3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x88e305*/
}
