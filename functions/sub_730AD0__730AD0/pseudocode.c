unsigned int __thiscall sub_730AD0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x730ad2*/
  sub_721730(this, a2); /*0x730ada*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FFA0.name); /*0x730ae5*/
  end = v2->end; /*0x730aea*/
  capacity = v2->capacity; /*0x730aee*/
  a2 = v4; /*0x730af7*/
  if ( end >= capacity ) /*0x730afb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x730b06*/
  NiTArray_SetAt(v2, end, &a2); /*0x730b13*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_iValue", *(this + 3)); /*0x730b21*/
  v8 = v2->end; /*0x730b26*/
  v9 = v2->capacity; /*0x730b2a*/
  a2 = v7; /*0x730b33*/
  if ( v8 >= v9 ) /*0x730b37*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x730b42*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x730b54*/
}
