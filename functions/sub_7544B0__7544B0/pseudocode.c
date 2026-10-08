unsigned int __thiscall sub_7544B0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7544b2*/
  sub_75EAA0(this, a2); /*0x7544ba*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40E5C.name); /*0x7544c5*/
  end = v2->end; /*0x7544ca*/
  capacity = v2->capacity; /*0x7544ce*/
  a2 = v4; /*0x7544d7*/
  if ( end >= capacity ) /*0x7544db*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7544e6*/
  NiTArray_SetAt(v2, end, &a2); /*0x7544f3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Frequency", *(this + 0xC)); /*0x754504*/
  v8 = v2->end; /*0x754509*/
  v9 = v2->capacity; /*0x75450d*/
  a2 = v7; /*0x754516*/
  if ( v8 >= v9 ) /*0x75451a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x754525*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x754537*/
}
