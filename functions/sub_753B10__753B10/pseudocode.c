unsigned int __thiscall sub_753B10(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x753b12*/
  sub_75EAA0(this, a2); /*0x753b1a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40D88.name); /*0x753b25*/
  end = v2->end; /*0x753b2a*/
  capacity = v2->capacity; /*0x753b2e*/
  a2 = v4; /*0x753b37*/
  if ( end >= capacity ) /*0x753b3b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x753b46*/
  NiTArray_SetAt(v2, end, &a2); /*0x753b53*/
  v7 = (unsigned __int16 *)sub_707280(this + 0xC, "Direction"); /*0x753b60*/
  v8 = v2->end; /*0x753b65*/
  v9 = v2->capacity; /*0x753b69*/
  a2 = v7; /*0x753b6f*/
  if ( v8 >= v9 ) /*0x753b73*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x753b7e*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x753b90*/
}
