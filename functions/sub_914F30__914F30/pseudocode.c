unsigned int __thiscall sub_914F30(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x914f31*/
  sub_8A2A50(this, a2); /*0x914f37*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA8404.name); /*0x914f42*/
  end = v2->end; /*0x914f47*/
  capacity = v2->capacity; /*0x914f4b*/
  a2 = v3; /*0x914f54*/
  if ( end >= capacity ) /*0x914f58*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x914f63*/
  return NiTArray_SetAt(v2, end, &a2); /*0x914f75*/
}
