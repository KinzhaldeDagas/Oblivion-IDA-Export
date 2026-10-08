unsigned int __thiscall sub_8646C0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned __int16 *v6; // eax
  unsigned int v7; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8646c2*/
  sub_717790(this, a2); /*0x8646ca*/
  v4 = (unsigned __int16 *)sub_72A040(this + 0x31, "pLocalBound"); /*0x8646da*/
  end = v2->end; /*0x8646df*/
  a2 = v4; /*0x8646e3*/
  if ( end >= v2->capacity ) /*0x8646ed*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8646f8*/
  NiTArray_SetAt(v2, end, &a2); /*0x864705*/
  v6 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("instance count", *((_WORD *)this + 0x60)); /*0x864717*/
  v7 = v2->end; /*0x86471c*/
  capacity = v2->capacity; /*0x864720*/
  a2 = v6; /*0x864729*/
  if ( v7 >= capacity ) /*0x86472d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize); /*0x864738*/
  return NiTArray_SetAt(v2, v7, &a2); /*0x86474a*/
}
