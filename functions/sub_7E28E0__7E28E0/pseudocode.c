// Shader/property diagnostic dumper. Prints pass names via BSShaderProperty_GetRenderPassName; BSSM_FRONDS from this path is diagnostic text only.
unsigned int __thiscall sub_7E28E0(float *this, unsigned __int16 *a2)
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
  unsigned __int16 *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  unsigned __int16 *v28; // eax
  unsigned int v29; // edi
  unsigned int v30; // ecx
  unsigned __int16 *v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // edx
  unsigned __int16 *v34; // eax
  unsigned int v35; // edi
  int v36; // ebx
  unsigned __int16 *v37; // eax
  unsigned int v38; // edi
  unsigned int result; // eax
  int v40; // eax
  _DWORD *v41; // ebx
  const char *RenderPassName; // eax
  unsigned __int16 *v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // ecx
  const char *v46; // eax
  unsigned __int16 *v47; // eax
  unsigned int v48; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7e28e3*/
  sub_73DCA0(this, (int)this, a2); /*0x7e28eb*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)NiRTTI_BSShaderProperty.name); /*0x7e28f6*/
  end = v2->end; /*0x7e28fb*/
  capacity = v2->capacity; /*0x7e28ff*/
  a2 = v4; /*0x7e2908*/
  if ( end >= capacity ) /*0x7e290c*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7e2917*/
  NiTArray_SetAt(v2, end, &a2); /*0x7e2924*/
  if ( (*(_BYTE *)(this + 7) & 1) != 0 ) /*0x7e292d*/
  {
    v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("specular", 1); /*0x7e2936*/
    v8 = v2->end; /*0x7e293b*/
    v9 = v2->capacity; /*0x7e293f*/
    a2 = v7; /*0x7e2948*/
    if ( v8 >= v9 ) /*0x7e294c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7e2957*/
    NiTArray_SetAt(v2, v8, &a2); /*0x7e2964*/
  }
  if ( (*(_BYTE *)(this + 7) & 2) != 0 ) /*0x7e296d*/
  {
    v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("skinned", 1); /*0x7e2976*/
    v11 = v2->end; /*0x7e297b*/
    v12 = v2->capacity; /*0x7e297f*/
    a2 = v10; /*0x7e2988*/
    if ( v11 >= v12 ) /*0x7e298c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x7e2997*/
    NiTArray_SetAt(v2, v11, &a2); /*0x7e29a4*/
  }
  if ( (*(_BYTE *)(this + 7) & 4) != 0 ) /*0x7e29ad*/
  {
    v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("lowdetail", 1); /*0x7e29b6*/
    v14 = v2->end; /*0x7e29bb*/
    v15 = v2->capacity; /*0x7e29bf*/
    a2 = v13; /*0x7e29c8*/
    if ( v14 >= v15 ) /*0x7e29cc*/
      NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x7e29d7*/
    NiTArray_SetAt(v2, v14, &a2); /*0x7e29e4*/
  }
  if ( (*(_BYTE *)(this + 7) & 8) != 0 ) /*0x7e29ed*/
  {
    v16 = (unsigned __int16 *)TESOutput_PrintLabeledBool("multitexture", 1); /*0x7e29f6*/
    v17 = v2->end; /*0x7e29fb*/
    v18 = v2->capacity; /*0x7e29ff*/
    a2 = v16; /*0x7e2a08*/
    if ( v17 >= v18 ) /*0x7e2a0c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x7e2a17*/
    NiTArray_SetAt(v2, v17, &a2); /*0x7e2a24*/
  }
  if ( (*(_BYTE *)(this + 7) & 0x10) != 0 ) /*0x7e2a2d*/
  {
    v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool("multispecular", 1); /*0x7e2a36*/
    v20 = v2->end; /*0x7e2a3b*/
    v21 = v2->capacity; /*0x7e2a3f*/
    a2 = v19; /*0x7e2a48*/
    if ( v20 >= v21 ) /*0x7e2a4c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x7e2a57*/
    NiTArray_SetAt(v2, v20, &a2); /*0x7e2a64*/
  }
  if ( (*(_DWORD *)(this + 7) & 0x80) != 0 ) /*0x7e2a70*/
  {
    v22 = (unsigned __int16 *)TESOutput_PrintLabeledBool("envmap reflection", 1); /*0x7e2a79*/
    v23 = v2->end; /*0x7e2a7e*/
    v24 = v2->capacity; /*0x7e2a82*/
    a2 = v22; /*0x7e2a8b*/
    if ( v23 >= v24 ) /*0x7e2a8f*/
      NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x7e2a9a*/
    NiTArray_SetAt(v2, v23, &a2); /*0x7e2aa7*/
  }
  if ( *(this + 8) < 1.0 ) /*0x7e2ab6*/
  {
    v25 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fAlpha", *(this + 8)); /*0x7e2ac4*/
    v26 = v2->end; /*0x7e2ac9*/
    v27 = v2->capacity; /*0x7e2acd*/
    a2 = v25; /*0x7e2ad6*/
    if ( v26 >= v27 ) /*0x7e2ada*/
      NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize); /*0x7e2ae5*/
    NiTArray_SetAt(v2, v26, &a2); /*0x7e2af2*/
  }
  if ( (*(_DWORD *)(this + 7) & 0x100) != 0 ) /*0x7e2afe*/
  {
    v28 = (unsigned __int16 *)TESOutput_PrintLabeledBool("alpha base texture", 1); /*0x7e2b07*/
    v29 = v2->end; /*0x7e2b0c*/
    v30 = v2->capacity; /*0x7e2b10*/
    a2 = v28; /*0x7e2b19*/
    if ( v29 >= v30 ) /*0x7e2b1d*/
      NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize); /*0x7e2b28*/
    NiTArray_SetAt(v2, v29, &a2); /*0x7e2b35*/
  }
  v31 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("Scenegraph", *((_DWORD *)this + 7) >> 0x1C); /*0x7e2b49*/
  v32 = v2->end; /*0x7e2b4e*/
  v33 = v2->capacity; /*0x7e2b52*/
  a2 = v31; /*0x7e2b5b*/
  if ( v32 >= v33 ) /*0x7e2b5f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize); /*0x7e2b6a*/
  NiTArray_SetAt(v2, v32, &a2); /*0x7e2b77*/
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("iLastRenderPassState", *((_DWORD *)this + 9)); /*0x7e2b85*/
  v35 = v2->end; /*0x7e2b8a*/
  a2 = v34; /*0x7e2b8e*/
  if ( v35 >= v2->capacity ) /*0x7e2b9b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize); /*0x7e2ba6*/
  NiTArray_SetAt(v2, v35, &a2); /*0x7e2bb3*/
  v36 = *((_DWORD *)this + 0xD); /*0x7e2bb8*/
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("number of passes", v36); /*0x7e2bc1*/
  v38 = v2->end; /*0x7e2bc6*/
  a2 = v37; /*0x7e2bca*/
  if ( v38 >= v2->capacity ) /*0x7e2bd7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v38 + v2->growSize); /*0x7e2be2*/
  result = NiTArray_SetAt(v2, v38, &a2); /*0x7e2bef*/
  if ( v36 > 0 ) /*0x7e2bf6*/
  {
    v40 = *((_DWORD *)this + 0xB); /*0x7e2bfc*/
    v41 = *(_DWORD **)v40; /*0x7e2bff*/
    for ( result = *(_DWORD *)(v40 + 8); result; v41 = (_DWORD *)*v41 ) /*0x7e2c08*/
    {
      if ( *(_BYTE *)(result + 6) ) /*0x7e2c10*/
      {
        RenderPassName = BSShaderProperty_GetRenderPassName(*(unsigned __int16 *)(result + 4)); /*0x7e2c1b*/
        v43 = (unsigned __int16 *)TESOutput_PrintLabeledString(" Fpass", RenderPassName); /*0x7e2c26*/
        v44 = v2->end; /*0x7e2c2b*/
        v45 = v2->capacity; /*0x7e2c2f*/
        a2 = v43; /*0x7e2c38*/
        if ( v44 >= v45 ) /*0x7e2c3c*/
          NiTArray_SetSize((unsigned __int16 *)v2, v44 + v2->growSize); /*0x7e2c47*/
      }
      else
      {
        v46 = BSShaderProperty_GetRenderPassName(*(unsigned __int16 *)(result + 4)); /*0x7e2c58*/
        v47 = (unsigned __int16 *)TESOutput_PrintLabeledString("  pass", v46); /*0x7e2c63*/
        v44 = v2->end; /*0x7e2c68*/
        v48 = v2->capacity; /*0x7e2c6c*/
        a2 = v47; /*0x7e2c75*/
        if ( v44 >= v48 ) /*0x7e2c79*/
          NiTArray_SetSize((unsigned __int16 *)v2, v44 + v2->growSize); /*0x7e2c84*/
      }
      result = NiTArray_SetAt(v2, v44, &a2); /*0x7e2c91*/
      if ( !v41 ) /*0x7e2c98*/
        break; /*0x7e2c98*/
      result = v41[2]; /*0x7e2c9d*/
    }
  }
  return result; /*0x7e2ca9*/
}
