unsigned int __thiscall sub_720300(_WORD *this, unsigned __int16 *a2)
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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x720302*/
  sub_732EF0((NiTriBasedGeomData *)this, a2); /*0x72030a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD2C.name); /*0x720315*/
  end = v2->end; /*0x72031a*/
  capacity = v2->capacity; /*0x72031e*/
  a2 = v4; /*0x720327*/
  if ( end >= capacity ) /*0x72032b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x720336*/
  NiTArray_SetAt(v2, end, &a2); /*0x720343*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiTriListLength", *((_DWORD *)this + 0x11)); /*0x720351*/
  v8 = v2->end; /*0x720356*/
  v9 = v2->capacity; /*0x72035a*/
  a2 = v7; /*0x720363*/
  if ( v8 >= v9 ) /*0x720367*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x720372*/
  NiTArray_SetAt(v2, v8, &a2); /*0x72037f*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pusTriList", *((_DWORD *)this + 0x12)); /*0x72038d*/
  v11 = v2->end; /*0x720392*/
  a2 = v10; /*0x720396*/
  if ( v11 >= v2->capacity ) /*0x7203a3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x7203ae*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x7203c0*/
}
