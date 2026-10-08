unsigned int __thiscall sub_757850(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757852*/
  sub_75EAA0(this, a2); /*0x75785a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41334.name); /*0x757865*/
  end = v2->end; /*0x75786a*/
  capacity = v2->capacity; /*0x75786e*/
  a2 = v4; /*0x757877*/
  if ( end >= capacity ) /*0x75787b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757886*/
  NiTArray_SetAt(v2, end, &a2); /*0x757893*/
  v7 = (unsigned __int16 *)sub_707280(this + 0xC, "Direction"); /*0x7578a0*/
  v8 = v2->end; /*0x7578a5*/
  v9 = v2->capacity; /*0x7578a9*/
  a2 = v7; /*0x7578af*/
  if ( v8 >= v9 ) /*0x7578b3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7578be*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x7578d0*/
}
