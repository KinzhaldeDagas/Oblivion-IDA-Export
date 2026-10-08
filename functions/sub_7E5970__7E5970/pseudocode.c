unsigned int __thiscall sub_7E5970(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7e5971*/
  sub_7E28E0(this, a2); /*0x7e5977*/
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(char **)unk_B46058); /*0x7e5982*/
  end = v2->end; /*0x7e5987*/
  capacity = v2->capacity; /*0x7e598b*/
  a2 = v3; /*0x7e5994*/
  if ( end >= capacity ) /*0x7e5998*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7e59a3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7e59b5*/
}
