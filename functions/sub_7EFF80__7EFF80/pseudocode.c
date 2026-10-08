unsigned int __thiscall sub_7EFF80(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  const char *v10; // eax
  unsigned __int16 *v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7eff82*/
  sub_7E28E0(this, a2); /*0x7eff8a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)LODWORD(flt_B46638[0x3A])); /*0x7eff95*/
  end = v2->end; /*0x7eff9a*/
  capacity = v2->capacity; /*0x7eff9e*/
  a2 = v4; /*0x7effa7*/
  if ( end >= capacity ) /*0x7effab*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7effb6*/
  NiTArray_SetAt(v2, end, &a2); /*0x7effc3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("iParticleCount", *((_DWORD *)this + 0x1B)); /*0x7effd1*/
  v8 = v2->end; /*0x7effd6*/
  v9 = v2->capacity; /*0x7effda*/
  a2 = v7; /*0x7effe3*/
  if ( v8 >= v9 ) /*0x7effe7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7efff2*/
  NiTArray_SetAt(v2, v8, &a2); /*0x7effff*/
  if ( *((_DWORD *)this + 0x27) ) /*0x7f0004*/
  {
    v10 = (const char *)sub_6F9540(*((_DWORD *)this + 0x27)); /*0x7f000f*/
    if ( v10 ) /*0x7f0019*/
      v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("base texture", v10); /*0x7f0021*/
    else
      v11 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("base texture", *((_DWORD *)this + 0x27)); /*0x7f0034*/
    v12 = v2->capacity; /*0x7f0039*/
    v13 = v2->end; /*0x7f003d*/
    a2 = v11; /*0x7f0046*/
    if ( v13 >= v12 ) /*0x7f004a*/
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x7f0055*/
    NiTArray_SetAt(v2, v13, &a2); /*0x7f0062*/
  }
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x70))(this) ) /*0x7f006e*/
  {
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledBool("clamp", 1); /*0x7f007b*/
    v15 = v2->end; /*0x7f0080*/
    v16 = v2->capacity; /*0x7f0084*/
    a2 = v14; /*0x7f008d*/
    if ( v15 >= v16 ) /*0x7f0091*/
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x7f009c*/
    NiTArray_SetAt(v2, v15, &a2); /*0x7f00a9*/
  }
  v17 = (unsigned __int16 *)sub_721A90("billboard mode", *((_DWORD *)this + 0x29)); /*0x7f00ba*/
  v18 = v2->end; /*0x7f00bf*/
  v19 = v2->capacity; /*0x7f00c3*/
  a2 = v17; /*0x7f00cc*/
  if ( v18 >= v19 ) /*0x7f00d0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x7f00db*/
  return NiTArray_SetAt(v2, v18, &a2); /*0x7f00ed*/
}
