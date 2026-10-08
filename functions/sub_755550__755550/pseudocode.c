unsigned int __thiscall sub_755550(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x755552*/
  sub_75EAA0(this, a2); /*0x75555a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40F84.name); /*0x755565*/
  end = v2->end; /*0x75556a*/
  capacity = v2->capacity; /*0x75556e*/
  a2 = v4; /*0x755577*/
  if ( end >= capacity ) /*0x75557b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x755586*/
  NiTArray_SetAt(v2, end, &a2); /*0x755593*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("RadialType", *(this + 0xC)); /*0x7555a4*/
  v8 = v2->end; /*0x7555a9*/
  v9 = v2->capacity; /*0x7555ad*/
  a2 = v7; /*0x7555b6*/
  if ( v8 >= v9 ) /*0x7555ba*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7555c5*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x7555d7*/
}
