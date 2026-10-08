unsigned int __thiscall sub_6E4F80(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e4f82*/
  sub_6ED580(this, a2); /*0x6e4f8a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E3D8.name); /*0x6e4f95*/
  end = v2->end; /*0x6e4f9a*/
  capacity = v2->capacity; /*0x6e4f9e*/
  a2 = v4; /*0x6e4fa7*/
  if ( end >= capacity ) /*0x6e4fab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e4fb6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e4fc3*/
  sub_6CBAD0(this + 7, (unsigned __int16 *)v2); /*0x6e4fcc*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kTransCPHandle", *((_DWORD *)this + 0xF)); /*0x6e4fda*/
  v8 = v2->end; /*0x6e4fdf*/
  v9 = v2->capacity; /*0x6e4fe3*/
  a2 = v7; /*0x6e4fec*/
  if ( v8 >= v9 ) /*0x6e4ff0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e4ffb*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e5008*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kRotCPHandle", *((_DWORD *)this + 0x10)); /*0x6e5016*/
  v11 = v2->end; /*0x6e501b*/
  a2 = v10; /*0x6e501f*/
  if ( v11 >= v2->capacity ) /*0x6e502c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e5037*/
  NiTArray_SetAt(v2, v11, &a2); /*0x6e5044*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kScaleCPHandle", *((_DWORD *)this + 0x11)); /*0x6e5052*/
  v13 = v2->end; /*0x6e5057*/
  v14 = v2->capacity; /*0x6e505b*/
  a2 = v12; /*0x6e5064*/
  if ( v13 >= v14 ) /*0x6e5068*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6e5073*/
  return NiTArray_SetAt(v2, v13, &a2); /*0x6e5085*/
}
