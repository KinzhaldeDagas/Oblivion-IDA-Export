unsigned int __thiscall sub_750AE0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  int v8; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x750ae2*/
  sub_75E760(this, a2); /*0x750aea*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40BCC.name); /*0x750af5*/
  end = v2->end; /*0x750afa*/
  capacity = v2->capacity; /*0x750afe*/
  a2 = v4; /*0x750b07*/
  if ( end >= capacity ) /*0x750b0b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x750b16*/
  result = NiTArray_SetAt(v2, end, &a2); /*0x750b23*/
  v8 = *((_DWORD *)this + 0x12); /*0x750b28*/
  if ( v8 ) /*0x750b2d*/
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v8 + 0x30))(v8, v2); /*0x750b35*/
  return result; /*0x750b37*/
}
