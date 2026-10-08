unsigned int __thiscall sub_8C8FF0(_DWORD *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c8ff1*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8c8ff7*/
  v3 = TESOutput_PrintString((char *)stru_BA8150.name); /*0x8c9002*/
  end = v2->end; /*0x8c9007*/
  capacity = v2->capacity; /*0x8c900b*/
  a2 = v3; /*0x8c9014*/
  if ( end >= capacity ) /*0x8c9018*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c9023*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8c9035*/
}
