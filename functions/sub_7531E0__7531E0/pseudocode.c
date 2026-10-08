unsigned int __thiscall sub_7531E0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int result; // eax
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7531e2*/
  sub_74F4F0(this, a2); /*0x7531ea*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40D60.name); /*0x7531f5*/
  end = v2->end; /*0x7531fa*/
  capacity = v2->capacity; /*0x7531fe*/
  a2 = v4; /*0x753207*/
  if ( end >= capacity ) /*0x75320b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x753216*/
  NiTArray_SetAt(v2, end, &a2); /*0x753223*/
  result = *((_DWORD *)this + 0x14); /*0x753228*/
  if ( result ) /*0x75322d*/
  {
    v8 = (unsigned __int16 *)TESOutput_PrintLabeledString("Emitter Object", *(const char **)(result + 8)); /*0x753238*/
    v9 = v2->end; /*0x75323d*/
    v10 = v2->capacity; /*0x753241*/
    a2 = v8; /*0x75324a*/
    if ( v9 >= v10 ) /*0x75324e*/
      NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize); /*0x753259*/
    return NiTArray_SetAt(v2, v9, &a2); /*0x753266*/
  }
  return result; /*0x75326b*/
}
