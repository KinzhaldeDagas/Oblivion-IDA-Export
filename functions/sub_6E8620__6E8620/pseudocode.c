unsigned int __thiscall sub_6E8620(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e8622*/
  sub_6EC460(this, a2); /*0x6e862a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E7E8.name); /*0x6e8635*/
  end = v2->end; /*0x6e863a*/
  capacity = v2->capacity; /*0x6e863e*/
  a2 = v4; /*0x6e8647*/
  if ( end >= capacity ) /*0x6e864b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e8656*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e8663*/
  v7 = (unsigned __int16 *)sub_70FA00("m_bBoolValue", *((_BYTE *)this + 0xC)); /*0x6e8672*/
  v8 = v2->end; /*0x6e8677*/
  v9 = v2->capacity; /*0x6e867b*/
  a2 = v7; /*0x6e8684*/
  if ( v8 >= v9 ) /*0x6e8688*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e8693*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e86a0*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spBoolData", *((_DWORD *)this + 4)); /*0x6e86ae*/
  v11 = v2->end; /*0x6e86b3*/
  v12 = v2->capacity; /*0x6e86b7*/
  a2 = v10; /*0x6e86c0*/
  if ( v11 >= v12 ) /*0x6e86c4*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e86cf*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6e86e1*/
}
