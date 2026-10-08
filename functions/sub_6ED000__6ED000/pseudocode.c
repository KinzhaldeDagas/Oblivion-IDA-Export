unsigned int __thiscall sub_6ED000(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ed002*/
  sub_6CE3F0(this, a2); /*0x6ed00a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3EF5C.name); /*0x6ed015*/
  end = v3->end; /*0x6ed01a*/
  capacity = v3->capacity; /*0x6ed01e*/
  a2 = (char *)v5; /*0x6ed027*/
  if ( end >= capacity ) /*0x6ed02b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6ed036*/
  NiTArray_SetAt(v3, end, &a2); /*0x6ed043*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledString("Extra Data Name", *((const char **)this + 0x10)); /*0x6ed051*/
  v9 = v3->end; /*0x6ed056*/
  v10 = v3->capacity; /*0x6ed05a*/
  a2 = (char *)v8; /*0x6ed063*/
  if ( v9 >= v10 ) /*0x6ed067*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6ed072*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x6ed084*/
}
