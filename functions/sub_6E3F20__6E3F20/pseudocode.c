unsigned int __thiscall sub_6E3F20(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e3f22*/
  sub_6EC460(this, a2); /*0x6e3f2a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E2D0.name); /*0x6e3f35*/
  end = v2->end; /*0x6e3f3a*/
  capacity = v2->capacity; /*0x6e3f3e*/
  a2 = v4; /*0x6e3f47*/
  if ( end >= capacity ) /*0x6e3f4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e3f56*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e3f63*/
  v7 = (unsigned __int16 *)sub_7093D0((float *)this + 3, "m_kColorValue"); /*0x6e3f70*/
  v8 = v2->end; /*0x6e3f75*/
  v9 = v2->capacity; /*0x6e3f79*/
  a2 = v7; /*0x6e3f7f*/
  if ( v8 >= v9 ) /*0x6e3f83*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e3f8e*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e3f9b*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spColorData", *((_DWORD *)this + 7)); /*0x6e3fa9*/
  v11 = v2->end; /*0x6e3fae*/
  v12 = v2->capacity; /*0x6e3fb2*/
  a2 = v10; /*0x6e3fbb*/
  if ( v11 >= v12 ) /*0x6e3fbf*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e3fca*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6e3fdc*/
}
