unsigned int __thiscall sub_732EF0(NiTriBasedGeomData *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x732ef2*/
  sub_729D00(this, a2); /*0x732efa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40108.name); /*0x732f05*/
  end = v2->end; /*0x732f0a*/
  capacity = v2->capacity; /*0x732f0e*/
  a2 = v4; /*0x732f17*/
  if ( end >= capacity ) /*0x732f1b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x732f26*/
  NiTArray_SetAt(v2, end, &a2); /*0x732f33*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usTriangles", this->members.m_usTriangles); /*0x732f42*/
  v8 = v2->end; /*0x732f47*/
  v9 = v2->capacity; /*0x732f4b*/
  a2 = v7; /*0x732f54*/
  if ( v8 >= v9 ) /*0x732f58*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x732f63*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x732f75*/
}
