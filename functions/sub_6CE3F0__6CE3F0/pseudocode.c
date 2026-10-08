unsigned int __thiscall sub_6CE3F0(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  int v8; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ce3f2*/
  sub_6D05C0(this, a2); /*0x6ce3fa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CCB0.name); /*0x6ce405*/
  end = v2->end; /*0x6ce40a*/
  capacity = v2->capacity; /*0x6ce40e*/
  a2 = (char *)v4; /*0x6ce417*/
  if ( end >= capacity ) /*0x6ce41b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ce426*/
  result = NiTArray_SetAt(v2, end, &a2); /*0x6ce433*/
  v8 = *((_DWORD *)this + 0xF); /*0x6ce438*/
  if ( v8 ) /*0x6ce43d*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v8 + 0x30))(v8, v2); /*0x6ce445*/
  return result; /*0x6ce447*/
}
