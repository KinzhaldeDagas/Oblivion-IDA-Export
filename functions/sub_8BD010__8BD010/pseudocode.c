unsigned int __thiscall sub_8BD010(unsigned int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // edi
  unsigned __int16 *v4; // eax
  unsigned int end; // esi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  unsigned int v8; // ebp
  unsigned int i; // esi
  int v10; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8bd014*/
  sub_721730(this, a2); /*0x8bd01b*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8044.name); /*0x8bd026*/
  end = v2->end; /*0x8bd02b*/
  capacity = v2->capacity; /*0x8bd02f*/
  a2 = v4; /*0x8bd038*/
  if ( end >= capacity ) /*0x8bd03c*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8bd047*/
  result = NiTArray_SetAt(v2, end, &a2); /*0x8bd054*/
  v8 = *(this + 7); /*0x8bd059*/
  for ( i = 0; i < v8; ++i ) /*0x8bd060*/
  {
    v10 = *(_DWORD *)(*(this + 4) + 4 * i); /*0x8bd065*/
    if ( v10 ) /*0x8bd06a*/
      result = (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v10 + 0x30))(v10, v2); /*0x8bd072*/
  }
  return result; /*0x8bd07b*/
}
