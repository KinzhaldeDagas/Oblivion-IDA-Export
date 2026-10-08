unsigned int __thiscall sub_6EA7C0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ea7c2*/
  sub_6CDDB0(this, a2); /*0x6ea7ca*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E910.name); /*0x6ea7d5*/
  end = v3->end; /*0x6ea7da*/
  capacity = v3->capacity; /*0x6ea7de*/
  a2 = v5; /*0x6ea7e7*/
  if ( end >= capacity ) /*0x6ea7eb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6ea7f6*/
  NiTArray_SetAt(v3, end, &a2); /*0x6ea803*/
  v8 = (unsigned __int16 *)sub_7153C0(this + 0xC, "m_kQuaternionValue"); /*0x6ea810*/
  v9 = v3->end; /*0x6ea815*/
  v10 = v3->capacity; /*0x6ea819*/
  a2 = v8; /*0x6ea81f*/
  if ( v9 >= v10 ) /*0x6ea823*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6ea82e*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6ea840*/
}
