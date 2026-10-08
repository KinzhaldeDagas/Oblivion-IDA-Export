unsigned int __thiscall sub_6D28B0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d28b2*/
  sub_6CDDB0(this, a2); /*0x6d28ba*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CF5C.name); /*0x6d28c5*/
  end = v3->end; /*0x6d28ca*/
  capacity = v3->capacity; /*0x6d28ce*/
  a2 = v5; /*0x6d28d7*/
  if ( end >= capacity ) /*0x6d28db*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6d28e6*/
  NiTArray_SetAt(v3, end, &a2); /*0x6d28f3*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fFloatValue", *(this + 0xC)); /*0x6d2904*/
  v9 = v3->end; /*0x6d2909*/
  v10 = v3->capacity; /*0x6d290d*/
  a2 = v8; /*0x6d2916*/
  if ( v9 >= v10 ) /*0x6d291a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6d2925*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6d2937*/
}
