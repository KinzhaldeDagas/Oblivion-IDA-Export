unsigned int __thiscall sub_8CE640(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8ce641*/
  sub_8A2A50(this, a2); /*0x8ce647*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8170.name); /*0x8ce652*/
  end = v2->end; /*0x8ce657*/
  capacity = v2->capacity; /*0x8ce65b*/
  a2 = v3; /*0x8ce664*/
  if ( end >= capacity ) /*0x8ce668*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8ce673*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8ce685*/
}
