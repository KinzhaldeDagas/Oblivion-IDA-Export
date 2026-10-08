unsigned int __thiscall sub_6EAD90(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ead92*/
  sub_6CDDB0(this, a2); /*0x6ead9a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E980.name); /*0x6eada5*/
  end = v3->end; /*0x6eadaa*/
  capacity = v3->capacity; /*0x6eadae*/
  a2 = v5; /*0x6eadb7*/
  if ( end >= capacity ) /*0x6eadbb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6eadc6*/
  NiTArray_SetAt(v3, end, &a2); /*0x6eadd3*/
  v8 = (unsigned __int16 *)sub_707280(this + 0xC, "m_kPoint3Value"); /*0x6eade0*/
  v9 = v3->end; /*0x6eade5*/
  v10 = v3->capacity; /*0x6eade9*/
  a2 = v8; /*0x6eadef*/
  if ( v9 >= v10 ) /*0x6eadf3*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6eadfe*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6eae10*/
}
