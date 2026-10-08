int __thiscall sub_96E2C0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x96e2c2*/
  sub_711E00(this, a2); /*0x96e2ca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA9AC8.name); /*0x96e2d5*/
  end = v2->end; /*0x96e2da*/
  capacity = v2->capacity; /*0x96e2de*/
  a2 = v4; /*0x96e2e7*/
  if ( end >= capacity ) /*0x96e2eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x96e2f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x96e303*/
  return (*(int (__thiscall **)(void *, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)this + 0x34))(this, v2); /*0x96e312*/
}
