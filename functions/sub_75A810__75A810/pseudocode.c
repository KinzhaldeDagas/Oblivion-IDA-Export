int __thiscall sub_75A810(_DWORD **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75a812*/
  sub_752EC0(this, a2); /*0x75a81a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41944.name); /*0x75a825*/
  end = v2->end; /*0x75a82a*/
  capacity = v2->capacity; /*0x75a82e*/
  a2 = v4; /*0x75a837*/
  if ( end >= capacity ) /*0x75a83b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75a846*/
  NiTArray_SetAt(v2, end, &a2); /*0x75a853*/
  return (*(int (__thiscall **)(_DWORD, NiTArray_NiTexturingPropertyMap *))(**(this + 6) + 0x30))(*(this + 6), v2); /*0x75a863*/
}
