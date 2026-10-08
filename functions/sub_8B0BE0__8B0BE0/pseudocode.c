unsigned int __thiscall sub_8B0BE0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8b0be1*/
  sub_8B04D0(this, a2); /*0x8b0be7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7FA8.name); /*0x8b0bf2*/
  end = v2->end; /*0x8b0bf7*/
  capacity = v2->capacity; /*0x8b0bfb*/
  a2 = v3; /*0x8b0c04*/
  if ( end >= capacity ) /*0x8b0c08*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8b0c13*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8b0c25*/
}
