unsigned int __thiscall sub_6EA090(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  char *v13; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B3E8B0.name); /*0x6ea09c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ea0a1*/
  v5 = a2[5]; /*0x6ea0a5*/
  v6 = a2[4]; /*0x6ea0a9*/
  v13 = v3; /*0x6ea0b2*/
  if ( v5 >= v6 ) /*0x6ea0b6*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x6ea0c1*/
  NiTArray_SetAt(v4, v5, &v13); /*0x6ea0ce*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_iLOD", *(this + 0xF)); /*0x6ea0dc*/
  end = v4->end; /*0x6ea0e1*/
  capacity = v4->capacity; /*0x6ea0e5*/
  a2 = v7; /*0x6ea0ee*/
  if ( end >= capacity ) /*0x6ea0f2*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x6ea0fd*/
  NiTArray_SetAt(v4, end, &a2); /*0x6ea10a*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumLODs", *(this + 0x10)); /*0x6ea118*/
  v11 = v4->end; /*0x6ea11d*/
  a2 = v10; /*0x6ea121*/
  if ( v11 >= v4->capacity ) /*0x6ea12e*/
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize); /*0x6ea139*/
  return NiTArray_SetAt(v4, v11, &a2); /*0x6ea14b*/
}
