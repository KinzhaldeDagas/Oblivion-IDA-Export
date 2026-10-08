unsigned int __thiscall sub_6E6AC0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e6ac2*/
  sub_6ED580(this, a2); /*0x6e6aca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E668.name); /*0x6e6ad5*/
  end = v2->end; /*0x6e6ada*/
  capacity = v2->capacity; /*0x6e6ade*/
  a2 = v4; /*0x6e6ae7*/
  if ( end >= capacity ) /*0x6e6aeb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e6af6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e6b03*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kColorACPHandle", *((_DWORD *)this + 0xB)); /*0x6e6b11*/
  v8 = v2->end; /*0x6e6b16*/
  v9 = v2->capacity; /*0x6e6b1a*/
  a2 = v7; /*0x6e6b23*/
  if ( v8 >= v9 ) /*0x6e6b27*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e6b32*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6e6b44*/
}
