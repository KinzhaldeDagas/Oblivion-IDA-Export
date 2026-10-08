unsigned int __thiscall sub_700540(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x700542*/
  sub_7009A0(this, a2); /*0x70054a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F584.name); /*0x700555*/
  end = v3->end; /*0x70055a*/
  capacity = v3->capacity; /*0x70055e*/
  a2 = v5; /*0x700567*/
  if ( end >= capacity ) /*0x70056b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x700576*/
  NiTArray_SetAt(v3, end, &a2); /*0x700583*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_pcName", (const char *)*(this + 2)); /*0x700591*/
  v9 = v3->end; /*0x700596*/
  v10 = v3->capacity; /*0x70059a*/
  a2 = v8; /*0x7005a3*/
  if ( v9 >= v10 ) /*0x7005a7*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x7005b2*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x7005c4*/
}
