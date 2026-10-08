unsigned int __thiscall sub_6E5400(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e5402*/
  sub_6ED580(this, a2); /*0x6e540a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E428.name); /*0x6e5415*/
  end = v2->end; /*0x6e541a*/
  capacity = v2->capacity; /*0x6e541e*/
  a2 = v4; /*0x6e5427*/
  if ( end >= capacity ) /*0x6e542b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e5436*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e5443*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kPoint3CPHandle", *((_DWORD *)this + 0xA)); /*0x6e5451*/
  v8 = v2->end; /*0x6e5456*/
  v9 = v2->capacity; /*0x6e545a*/
  a2 = v7; /*0x6e5463*/
  if ( v8 >= v9 ) /*0x6e5467*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e5472*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6e5484*/
}
