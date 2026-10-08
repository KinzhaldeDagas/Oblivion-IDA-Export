unsigned int __thiscall sub_6FBAC0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6fbac2*/
  sub_721730(this, a2); /*0x6fbaca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F4BC.name); /*0x6fbad5*/
  end = v2->end; /*0x6fbada*/
  capacity = v2->capacity; /*0x6fbade*/
  a2 = v4; /*0x6fbae7*/
  if ( end >= capacity ) /*0x6fbaeb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6fbaf6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6fbb03*/
  v7 = (unsigned __int16 *)sub_707280(this + 3, "Center"); /*0x6fbb10*/
  v8 = v2->end; /*0x6fbb15*/
  v9 = v2->capacity; /*0x6fbb19*/
  a2 = v7; /*0x6fbb1f*/
  if ( v8 >= v9 ) /*0x6fbb23*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6fbb2e*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6fbb3b*/
  v10 = (unsigned __int16 *)sub_707280(this + 6, "Extents"); /*0x6fbb48*/
  v11 = v2->end; /*0x6fbb4d*/
  v12 = v2->capacity; /*0x6fbb51*/
  a2 = v10; /*0x6fbb57*/
  if ( v11 >= v12 ) /*0x6fbb5b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6fbb66*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6fbb78*/
}
