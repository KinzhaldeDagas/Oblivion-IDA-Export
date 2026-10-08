unsigned int __thiscall sub_6D0450(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d0452*/
  sub_6D05C0(this, a2); /*0x6d045a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CD7C.name); /*0x6d0465*/
  end = v2->end; /*0x6d046a*/
  capacity = v2->capacity; /*0x6d046e*/
  a2 = (char *)v4; /*0x6d0477*/
  if ( end >= capacity ) /*0x6d047b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d0486*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d0493*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usNumInterps", *((_WORD *)this + 0x22)); /*0x6d04a2*/
  v8 = v2->end; /*0x6d04a7*/
  v9 = v2->capacity; /*0x6d04ab*/
  a2 = (char *)v7; /*0x6d04b4*/
  if ( v8 >= v9 ) /*0x6d04b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d04c3*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6d04d5*/
}
