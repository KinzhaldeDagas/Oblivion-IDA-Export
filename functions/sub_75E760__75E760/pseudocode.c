unsigned int __thiscall sub_75E760(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75e762*/
  sub_6CE3F0(this, a2); /*0x75e76a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41E14.name); /*0x75e775*/
  end = v2->end; /*0x75e77a*/
  capacity = v2->capacity; /*0x75e77e*/
  a2 = (char *)v4; /*0x75e787*/
  if ( end >= capacity ) /*0x75e78b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75e796*/
  NiTArray_SetAt(v2, end, &a2); /*0x75e7a3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("Modifier Name", *((const char **)this + 0x10)); /*0x75e7b1*/
  v8 = v2->end; /*0x75e7b6*/
  v9 = v2->capacity; /*0x75e7ba*/
  a2 = (char *)v7; /*0x75e7c3*/
  if ( v8 >= v9 ) /*0x75e7c7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x75e7d2*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x75e7e4*/
}
