int __thiscall sub_75A500(_DWORD **this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75a502*/
  sub_752EC0(this, a2); /*0x75a50a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B418EC.name); /*0x75a515*/
  end = v2->end; /*0x75a51a*/
  capacity = v2->capacity; /*0x75a51e*/
  a2 = v4; /*0x75a527*/
  if ( end >= capacity ) /*0x75a52b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75a536*/
  NiTArray_SetAt(v2, end, &a2); /*0x75a543*/
  return (*(int (__thiscall **)(_DWORD, NiTArray_NiTexturingPropertyMap *))(**(this + 6) + 0x30))(*(this + 6), v2); /*0x75a553*/
}
