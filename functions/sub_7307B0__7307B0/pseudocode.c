unsigned int __thiscall sub_7307B0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7307b2*/
  sub_721730(this, a2); /*0x7307ba*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FF98.name); /*0x7307c5*/
  end = v2->end; /*0x7307ca*/
  capacity = v2->capacity; /*0x7307ce*/
  a2 = v4; /*0x7307d7*/
  if ( end >= capacity ) /*0x7307db*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7307e6*/
  NiTArray_SetAt(v2, end, &a2); /*0x7307f3*/
  v7 = (unsigned __int16 *)sub_7093D0(this + 3, "Color = "); /*0x730800*/
  v8 = v2->end; /*0x730805*/
  v9 = v2->capacity; /*0x730809*/
  a2 = v7; /*0x73080f*/
  if ( v8 >= v9 ) /*0x730813*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73081e*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x730830*/
}
