void __thiscall sub_6CBAD0(float *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // ebx
  unsigned __int16 *v6; // eax
  unsigned int end; // ebx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  char *v12; // [esp+10h] [ebp-4h] BYREF

  v3 = TESOutput_PrintString("NiQuatTransform"); /*0x6cbadb*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6cbae0*/
  v5 = a2[5]; /*0x6cbae4*/
  v12 = v3; /*0x6cbae8*/
  if ( v5 >= a2[4] ) /*0x6cbaf5*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x6cbb00*/
  NiTArray_SetAt(v4, v5, &v12); /*0x6cbb0d*/
  if ( -flt_A7DEB4 != *this ) /*0x6cbb23*/
  {
    v6 = (unsigned __int16 *)sub_707280(this, "m_kTranslate"); /*0x6cbb2c*/
    end = v4->end; /*0x6cbb31*/
    a2 = v6; /*0x6cbb35*/
    if ( end >= v4->capacity ) /*0x6cbb3f*/
      NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x6cbb4a*/
    NiTArray_SetAt(v4, end, &a2); /*0x6cbb57*/
  }
  if ( -flt_A7DEB4 != *(this + 4) ) /*0x6cbb6e*/
  {
    v8 = (unsigned __int16 *)sub_7153C0(this + 3, "m_kRotate"); /*0x6cbb78*/
    v9 = v4->end; /*0x6cbb7d*/
    a2 = v8; /*0x6cbb81*/
    if ( v9 >= v4->capacity ) /*0x6cbb8b*/
      NiTArray_SetSize((unsigned __int16 *)v4, v9 + v4->growSize); /*0x6cbb96*/
    NiTArray_SetAt(v4, v9, &a2); /*0x6cbba3*/
  }
  if ( -flt_A7DEB4 != *(this + 7) ) /*0x6cbbba*/
  {
    v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fScale", *(this + 7)); /*0x6cbbc8*/
    v11 = v4->end; /*0x6cbbcd*/
    a2 = v10; /*0x6cbbd1*/
    if ( v11 >= v4->capacity ) /*0x6cbbde*/
      NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize); /*0x6cbbe9*/
    NiTArray_SetAt(v4, v11, &a2); /*0x6cbbf6*/
  }
}
