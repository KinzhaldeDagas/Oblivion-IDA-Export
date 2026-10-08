unsigned int __thiscall sub_6E8B70(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e8b72*/
  sub_7009A0(this, a2); /*0x6e8b7a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E838.name); /*0x6e8b85*/
  end = v2->end; /*0x6e8b8a*/
  capacity = v2->capacity; /*0x6e8b8e*/
  a2 = v4; /*0x6e8b97*/
  if ( end >= capacity ) /*0x6e8b9b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e8ba6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e8bb3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", *(this + 2)); /*0x6e8bc1*/
  v8 = v2->end; /*0x6e8bc6*/
  v9 = v2->capacity; /*0x6e8bca*/
  a2 = v7; /*0x6e8bd3*/
  if ( v8 >= v9 ) /*0x6e8bd7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e8be2*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6e8bf4*/
}
