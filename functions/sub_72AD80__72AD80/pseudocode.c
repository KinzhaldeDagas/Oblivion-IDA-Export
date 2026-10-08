unsigned int __thiscall sub_72AD80(unsigned __int16 *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x72ad82*/
  sub_720300(this, a2); /*0x72ad8a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FF0C.name); /*0x72ad95*/
  end = v2->end; /*0x72ad9a*/
  capacity = v2->capacity; /*0x72ad9e*/
  a2 = v4; /*0x72ada7*/
  if ( end >= capacity ) /*0x72adab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x72adb6*/
  NiTArray_SetAt(v2, end, &a2); /*0x72adc3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usActiveVertices", *(this + 0x2C)); /*0x72add2*/
  v8 = v2->end; /*0x72add7*/
  v9 = v2->capacity; /*0x72addb*/
  a2 = v7; /*0x72ade4*/
  if ( v8 >= v9 ) /*0x72ade8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x72adf3*/
  NiTArray_SetAt(v2, v8, &a2); /*0x72ae00*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usActiveTriangles", *(this + 0x2D)); /*0x72ae0f*/
  v11 = v2->end; /*0x72ae14*/
  a2 = v10; /*0x72ae18*/
  if ( v11 >= v2->capacity ) /*0x72ae25*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x72ae30*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x72ae42*/
}
