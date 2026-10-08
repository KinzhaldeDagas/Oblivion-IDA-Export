unsigned int __thiscall sub_755740(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x755741*/
  sub_752EC0(this, a2); /*0x755747*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40FD0.name); /*0x755752*/
  end = v2->end; /*0x755757*/
  capacity = v2->capacity; /*0x75575b*/
  a2 = v3; /*0x755764*/
  if ( end >= capacity ) /*0x755768*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x755773*/
  return NiTArray_SetAt(v2, end, &a2); /*0x755785*/
}
