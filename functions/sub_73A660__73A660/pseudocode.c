unsigned int __thiscall sub_73A660(char *this, unsigned __int16 *a2)
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
  unsigned int v12; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73a662*/
  sub_729D00(this, a2); /*0x73a66a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40150.name); /*0x73a675*/
  end = v2->end; /*0x73a67a*/
  capacity = v2->capacity; /*0x73a67e*/
  a2 = v4; /*0x73a687*/
  if ( end >= capacity ) /*0x73a68b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x73a696*/
  NiTArray_SetAt(v2, end, &a2); /*0x73a6a3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bPixelAccurate", *(this + 0x58)); /*0x73a6b2*/
  v8 = v2->end; /*0x73a6b7*/
  v9 = v2->capacity; /*0x73a6bb*/
  a2 = v7; /*0x73a6c4*/
  if ( v8 >= v9 ) /*0x73a6c8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x73a6d3*/
  NiTArray_SetAt(v2, v8, &a2); /*0x73a6e0*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Num Elements", *((unsigned __int16 *)this + 0x36)); /*0x73a6ef*/
  v11 = v2->end; /*0x73a6f4*/
  v12 = v2->capacity; /*0x73a6f8*/
  a2 = v10; /*0x73a701*/
  if ( v11 >= v12 ) /*0x73a705*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x73a710*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x73a722*/
}
