unsigned int __thiscall sub_7281F0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7281f2*/
  sub_721730(this, a2); /*0x7281fa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FDA0.name); /*0x728205*/
  end = v2->end; /*0x72820a*/
  capacity = v2->capacity; /*0x72820e*/
  a2 = v4; /*0x728217*/
  if ( end >= capacity ) /*0x72821b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x728226*/
  NiTArray_SetAt(v2, end, &a2); /*0x728233*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiSize", *(this + 4)); /*0x728241*/
  v8 = v2->end; /*0x728246*/
  v9 = v2->capacity; /*0x72824a*/
  a2 = v7; /*0x728253*/
  if ( v8 >= v9 ) /*0x728257*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x728262*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x728274*/
}
