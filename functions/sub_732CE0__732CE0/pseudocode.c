unsigned int __thiscall sub_732CE0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x732ce2*/
  sub_729D00(this, a2); /*0x732cea*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40100.name); /*0x732cf5*/
  end = v2->end; /*0x732cfa*/
  capacity = v2->capacity; /*0x732cfe*/
  a2 = v4; /*0x732d07*/
  if ( end >= capacity ) /*0x732d0b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x732d16*/
  NiTArray_SetAt(v2, end, &a2); /*0x732d23*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkFlags", *(this + 0x10)); /*0x732d31*/
  v8 = v2->end; /*0x732d36*/
  v9 = v2->capacity; /*0x732d3a*/
  a2 = v7; /*0x732d43*/
  if ( v8 >= v9 ) /*0x732d47*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x732d52*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x732d64*/
}
