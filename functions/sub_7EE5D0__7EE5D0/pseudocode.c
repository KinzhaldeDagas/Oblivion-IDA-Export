// BloodOnDeath decode 2026-05-30: shader-property diagnostic dump; no spawn, lifetime, or projection cap is enforced here.
unsigned int __thiscall sub_7EE5D0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7ee5d2*/
  sub_7E28E0(this, a2); /*0x7ee5da*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)LODWORD(OB_ShaderConstantStorage_010201A0[0xDE])); /*0x7ee5e5*/
  end = v2->end; /*0x7ee5ea*/
  capacity = v2->capacity; /*0x7ee5ee*/
  a2 = v4; /*0x7ee5f7*/
  if ( end >= capacity ) /*0x7ee5fb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7ee606*/
  NiTArray_SetAt(v2, end, &a2); /*0x7ee613*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("number of lights", *((_DWORD *)this + 0x1E)); /*0x7ee621*/
  v8 = v2->end; /*0x7ee626*/
  v9 = v2->capacity; /*0x7ee62a*/
  a2 = v7; /*0x7ee633*/
  if ( v8 >= v9 ) /*0x7ee637*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7ee642*/
  NiTArray_SetAt(v2, v8, &a2); /*0x7ee64f*/
  v10 = OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(this); /*0x7ee656*/
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("active lights", v10); /*0x7ee661*/
  v12 = v2->end; /*0x7ee666*/
  v13 = v2->capacity; /*0x7ee66a*/
  a2 = v11; /*0x7ee673*/
  if ( v12 >= v13 ) /*0x7ee677*/
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x7ee682*/
  NiTArray_SetAt(v2, v12, &a2); /*0x7ee68f*/
  if ( *((_DWORD *)this + 0x23) ) /*0x7ee694*/
  {
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("number of decals", *((_DWORD *)this + 0x23));// BloodOnDeath decode: "number of decals" is diagnostic shader-property state, not a trail density cap. /*0x7ee6a4*/
    v15 = v2->end; /*0x7ee6a9*/
    v16 = v2->capacity; /*0x7ee6ad*/
    a2 = v14; /*0x7ee6b6*/
    if ( v15 >= v16 ) /*0x7ee6ba*/
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x7ee6c5*/
    NiTArray_SetAt(v2, v15, &a2); /*0x7ee6d2*/
  }
  v17 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Reference ID", *((_DWORD *)this + 0x26)); /*0x7ee6e3*/
  v18 = v2->end; /*0x7ee6e8*/
  v19 = v2->capacity; /*0x7ee6ec*/
  a2 = v17; /*0x7ee6f5*/
  if ( v18 >= v19 ) /*0x7ee6f9*/
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x7ee704*/
  return NiTArray_SetAt(v2, v18, &a2); /*0x7ee716*/
}
