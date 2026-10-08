unsigned int __thiscall sub_73B6A0(unsigned __int16 *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73b6a2*/
  sub_71A380(this, a2); /*0x73b6aa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40170.name); /*0x73b6b5*/
  end = v2->end; /*0x73b6ba*/
  capacity = v2->capacity; /*0x73b6be*/
  a2 = v4; /*0x73b6c7*/
  if ( end >= capacity ) /*0x73b6cb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73b6d6*/
  NiTArray_SetAt(v2, end, &a2); /*0x73b6e3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usActiveVertices", *(this + 0x28)); /*0x73b6f2*/
  v8 = v2->end; /*0x73b6f7*/
  v9 = v2->capacity; /*0x73b6fb*/
  a2 = v7; /*0x73b704*/
  if ( v8 >= v9 ) /*0x73b708*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73b713*/
  NiTArray_SetAt(v2, v8, &a2); /*0x73b720*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usActiveTriangles", *(this + 0x29)); /*0x73b72f*/
  v11 = v2->end; /*0x73b734*/
  a2 = v10; /*0x73b738*/
  if ( v11 >= v2->capacity ) /*0x73b745*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x73b750*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x73b762*/
}
