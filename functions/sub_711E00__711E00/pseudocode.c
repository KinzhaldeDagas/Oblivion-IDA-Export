int __thiscall sub_711E00(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x711e02*/
  sub_7009A0(this, a2); /*0x711e0a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FB00.name); /*0x711e15*/
  end = v2->end; /*0x711e1a*/
  capacity = v2->capacity; /*0x711e1e*/
  a2 = v4; /*0x711e27*/
  if ( end >= capacity ) /*0x711e2b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x711e36*/
  NiTArray_SetAt(v2, end, &a2); /*0x711e43*/
  return (*(int (__thiscall **)(void *, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)this + 0x34))(this, v2); /*0x711e52*/
}
