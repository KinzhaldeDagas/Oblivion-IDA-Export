unsigned int __thiscall sub_8C4130(_DWORD *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c4131*/
  sub_8AEAC0(this, *(float *)&a2); /*0x8c4137*/
  v3 = TESOutput_PrintString((char *)stru_BA8104.name); /*0x8c4142*/
  end = v2->end; /*0x8c4147*/
  capacity = v2->capacity; /*0x8c414b*/
  a2 = v3; /*0x8c4154*/
  if ( end >= capacity ) /*0x8c4158*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c4163*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8c4175*/
}
