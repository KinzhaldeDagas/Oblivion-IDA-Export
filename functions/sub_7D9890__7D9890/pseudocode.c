// Verified (Oblivion): BSShaderPPLightingProperty_GetViewerStrings exports property+0xE0 as "spTexEffectData" and reads the current-fill color at +0x0C..+0x18, current-edge color at +0x1C..+0x28, and edge falloff at +0x54. Viewer labels duplicate R for the third color component; probable blue-channel typo, corroborated by the RGBA grouping and Fallout's NiColorA layout.
unsigned int __thiscall BSShaderPPLightingProperty_GetViewerStrings(
        BSShaderPPLightingProperty *this,
        NiTArray_NiTexturingPropertyMap *viewerStrings)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  const char *v10; // eax
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char *v14; // eax
  const char *v15; // eax
  char *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  char *v19; // eax
  unsigned int v20; // edx
  int v21; // edx
  const char *v22; // eax
  const char *v23; // eax
  char *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  char *v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  int i; // ebp
  int v31; // edx
  const char *v32; // eax
  char *v33; // eax
  unsigned int v34; // ebx
  char *v35; // eax
  unsigned int v36; // ecx
  int v37; // ecx
  const char *v38; // eax
  char *v39; // eax
  char *v40; // eax
  unsigned int v41; // ebx
  const char *v42; // eax
  int *v43; // eax
  const char *v44; // eax
  char *v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // ecx
  char *v48; // eax
  unsigned int v49; // edx
  char *v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  int v53; // eax
  char *v54; // eax
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  char *v57; // eax
  unsigned int v58; // ebx
  unsigned int v59; // ecx
  char *v60; // eax
  unsigned int v61; // edx
  char *v62; // eax
  unsigned int v63; // ebx
  unsigned int v64; // edx
  char *v65; // eax
  unsigned int v66; // ebx
  unsigned int v67; // edx
  unsigned int result; // eax
  char *v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // edx
  char *v72; // eax
  unsigned int v73; // ebx
  unsigned int v74; // edx
  char *v75; // eax
  unsigned int v76; // ebx
  unsigned int v77; // edx
  char *v78; // eax
  unsigned int v79; // ebx
  unsigned int v80; // edx
  char *v81; // eax
  unsigned int v82; // ebx
  unsigned int v83; // edx
  char *v84; // eax
  unsigned int v85; // ebx
  unsigned int v86; // edx
  char *v87; // eax
  unsigned int v88; // ebx
  unsigned int v89; // edx
  char *v90; // eax
  unsigned int v91; // ebx
  unsigned int v92; // edx
  char *v93; // eax
  unsigned int v94; // ebx
  unsigned int v95; // edx
  char *v96; // eax
  unsigned int v97; // edi
  unsigned int v98; // edx

  v2 = viewerStrings; /*0x7d9892*/
  sub_7EE5D0((float *)this, (unsigned __int16 *)viewerStrings); /*0x7d989a*/
  v4 = TESOutput_PrintString((char *)NiRTTI_BSShaderPPLightingProperty.name); /*0x7d98a5*/
  end = v2->end; /*0x7d98aa*/
  capacity = v2->capacity; /*0x7d98ae*/
  viewerStrings = (NiTArray_NiTexturingPropertyMap *)v4; /*0x7d98b7*/
  if ( end >= capacity ) /*0x7d98bb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7d98c6*/
  NiTArray_SetAt(v2, end, &viewerStrings); /*0x7d98d3*/
  if ( (*((_DWORD *)this + 7) & 0x400) != 0 ) /*0x7d98df*/
  {
    v7 = TESOutput_PrintLabeledBool("facegenblend", 1); /*0x7d98e8*/
    v8 = v2->end; /*0x7d98ed*/
    v9 = v2->capacity; /*0x7d98f1*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v7; /*0x7d98fa*/
    if ( v8 >= v9 ) /*0x7d98fe*/
      NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x7d9909*/
    NiTArray_SetAt(v2, v8, &viewerStrings); /*0x7d9916*/
  }
  if ( (*((_DWORD *)this + 7) & 0x4000) != 0 ) /*0x7d9922*/
  {
    v24 = TESOutput_PrintLabeledBool("landscape texturing", 1); /*0x7d9b08*/
    v25 = v2->end; /*0x7d9b0d*/
    v26 = v2->capacity; /*0x7d9b11*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v24; /*0x7d9b1a*/
    if ( v25 >= v26 ) /*0x7d9b1e*/
      NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x7d9b29*/
    NiTArray_SetAt(v2, v25, &viewerStrings); /*0x7d9b36*/
    v27 = TESOutput_PrintLabeledUnsignedShort("landscape textures", *((_WORD *)this + 0x5C)); /*0x7d9b48*/
    v28 = v2->end; /*0x7d9b4d*/
    v29 = v2->capacity; /*0x7d9b51*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v27; /*0x7d9b5a*/
    if ( v28 >= v29 ) /*0x7d9b5e*/
      NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize); /*0x7d9b69*/
    NiTArray_SetAt(v2, v28, &viewerStrings); /*0x7d9b77*/
    for ( i = 0; i < 9; ++i ) /*0x7d9b7c*/
    {
      v31 = *((_DWORD *)this + 0x2F); /*0x7d9b80*/
      if ( *(_DWORD *)(v31 + 4 * i) ) /*0x7d9b86*/
      {
        v32 = (const char *)sub_6F9540(*(_DWORD *)(v31 + 4 * i)); /*0x7d9b96*/
        if ( v32 ) /*0x7d9ba0*/
        {
          v33 = TESOutput_PrintLabeledString("base tex", v32); /*0x7d9ba8*/
          v34 = v2->end; /*0x7d9bad*/
          viewerStrings = (NiTArray_NiTexturingPropertyMap *)v33; /*0x7d9bb1*/
          if ( v34 >= v2->capacity ) /*0x7d9bbe*/
            NiTArray_SetSize((unsigned __int16 *)v2, v34 + v2->growSize); /*0x7d9bc9*/
        }
        else
        {
          v35 = TESOutput_PrintLabeledPointer("base tex", **((_DWORD **)this + 0x2F)); /*0x7d9be3*/
          v34 = v2->end; /*0x7d9be8*/
          v36 = v2->capacity; /*0x7d9bec*/
          viewerStrings = (NiTArray_NiTexturingPropertyMap *)v35; /*0x7d9bf5*/
          if ( v34 >= v36 ) /*0x7d9bf9*/
            NiTArray_SetSize((unsigned __int16 *)v2, v34 + v2->growSize); /*0x7d9c04*/
        }
        NiTArray_SetAt(v2, v34, &viewerStrings); /*0x7d9c11*/
        v37 = *((_DWORD *)this + 0x30); /*0x7d9c16*/
        if ( *(_DWORD *)(v37 + 4 * i) ) /*0x7d9c1c*/
        {
          v38 = (const char *)sub_6F9540(*(_DWORD *)(v37 + 4 * i)); /*0x7d9c24*/
          if ( v38 ) /*0x7d9c2e*/
            v39 = TESOutput_PrintLabeledString(" normal map", v38); /*0x7d9c36*/
          else
            v39 = TESOutput_PrintLabeledPointer(" normal map", *(_DWORD *)(*((_DWORD *)this + 0x30) + 4 * i)); /*0x7d9c54*/
          viewerStrings = (NiTArray_NiTexturingPropertyMap *)v39; /*0x7d9c63*/
          NiTArray_Add((unsigned __int16 *)v2, &viewerStrings); /*0x7d9c67*/
        }
        if ( *(_BYTE *)(*((_DWORD *)this + 0x34) + i) ) /*0x7d9c72*/
        {
          v40 = TESOutput_PrintLabeledBool(" specular", 1); /*0x7d9c7f*/
          v41 = v2->end; /*0x7d9c84*/
          viewerStrings = (NiTArray_NiTexturingPropertyMap *)v40; /*0x7d9c88*/
          if ( v41 >= v2->capacity ) /*0x7d9c95*/
            NiTArray_SetSize((unsigned __int16 *)v2, v41 + v2->growSize); /*0x7d9ca0*/
          NiTArray_SetAt(v2, v41, &viewerStrings); /*0x7d9cad*/
        }
        if ( *(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i) ) /*0x7d9cb8*/
        {
          v42 = (const char *)sub_6F9540(*(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i)); /*0x7d9cc0*/
          if ( v42 ) /*0x7d9cca*/
            viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString(" glow map", v42); /*0x7d9cde*/
          else
            viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer( /*0x7d9cf9*/
                                                                 " glow map",
                                                                 *(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i));
          NiTArray_Add((unsigned __int16 *)v2, &viewerStrings); /*0x7d9ce3*/
        }
      }
    }
  }
  else
  {
    v10 = (const char *)sub_6F9540(**((_DWORD **)this + 0x2F)); /*0x7d9931*/
    if ( v10 ) /*0x7d993b*/
    {
      v11 = TESOutput_PrintLabeledString("base diff", v10); /*0x7d9943*/
      v12 = v2->end; /*0x7d9948*/
      v13 = v2->capacity; /*0x7d994c*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v11; /*0x7d9955*/
      if ( v12 >= v13 ) /*0x7d9959*/
        NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x7d9964*/
    }
    else
    {
      v14 = TESOutput_PrintLabeledPointer("base diff", **((_DWORD **)this + 0x2F)); /*0x7d997e*/
      v12 = v2->end; /*0x7d9983*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v14; /*0x7d9987*/
      if ( v12 >= v2->capacity ) /*0x7d9994*/
        NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x7d999f*/
    }
    NiTArray_SetAt(v2, v12, &viewerStrings); /*0x7d99ac*/
    v15 = (const char *)sub_6F9540(**((_DWORD **)this + 0x30)); /*0x7d99ba*/
    if ( v15 ) /*0x7d99c4*/
    {
      v16 = TESOutput_PrintLabeledString("base normal", v15); /*0x7d99cc*/
      v17 = v2->end; /*0x7d99d1*/
      v18 = v2->capacity; /*0x7d99d5*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v16; /*0x7d99de*/
      if ( v17 >= v18 ) /*0x7d99e2*/
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x7d99ed*/
    }
    else
    {
      v19 = TESOutput_PrintLabeledPointer("base normal", **((_DWORD **)this + 0x30)); /*0x7d9a07*/
      v17 = v2->end; /*0x7d9a0c*/
      v20 = v2->capacity; /*0x7d9a10*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v19; /*0x7d9a19*/
      if ( v17 >= v20 ) /*0x7d9a1d*/
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x7d9a28*/
    }
    NiTArray_SetAt(v2, v17, &viewerStrings); /*0x7d9a35*/
    v21 = *((_DWORD *)this + 0x2F); /*0x7d9a3a*/
    if ( *(_DWORD *)(v21 + 4) ) /*0x7d9a40*/
    {
      v22 = (const char *)sub_6F9540(*(_DWORD *)(v21 + 4)); /*0x7d9a48*/
      if ( v22 ) /*0x7d9a52*/
        viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("multi diff", v22); /*0x7d9a5f*/
      else
        viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer( /*0x7d9a88*/
                                                             "multi diff",
                                                             *(_DWORD *)(*((_DWORD *)this + 0x2F) + 4));
      NiTArray_Add((unsigned __int16 *)v2, &viewerStrings); /*0x7d9a6b*/
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 0x30) + 4) ) /*0x7d9a9a*/
    {
      v23 = (const char *)sub_6F9540(*(_DWORD *)(*((_DWORD *)this + 0x30) + 4)); /*0x7d9aa6*/
      if ( v23 ) /*0x7d9ab0*/
        viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("multi normal", v23); /*0x7d9ac7*/
      else
        viewerStrings = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer( /*0x7d9ae9*/
                                                             "multi normal",
                                                             *(_DWORD *)(*((_DWORD *)this + 0x30) + 4));
      NiTArray_Add((unsigned __int16 *)v2, &viewerStrings); /*0x7d9acb*/
    }
  }
  v43 = *((int **)this + 0x31); /*0x7d9d19*/
  if ( v43 ) /*0x7d9d21*/
  {
    v44 = (const char *)sub_6F9540(*v43); /*0x7d9d2a*/
    if ( v44 ) /*0x7d9d34*/
    {
      v45 = TESOutput_PrintLabeledString("glowmap texture", v44); /*0x7d9d3c*/
      v46 = v2->end; /*0x7d9d41*/
      v47 = v2->capacity; /*0x7d9d45*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v45; /*0x7d9d4e*/
      if ( v46 >= v47 ) /*0x7d9d52*/
        NiTArray_SetSize((unsigned __int16 *)v2, v46 + v2->growSize); /*0x7d9d5d*/
    }
    else
    {
      v48 = TESOutput_PrintLabeledPointer("glowmap texture", **((_DWORD **)this + 0x31)); /*0x7d9d77*/
      v46 = v2->end; /*0x7d9d7c*/
      v49 = v2->capacity; /*0x7d9d80*/
      viewerStrings = (NiTArray_NiTexturingPropertyMap *)v48; /*0x7d9d89*/
      if ( v46 >= v49 ) /*0x7d9d8d*/
        NiTArray_SetSize((unsigned __int16 *)v2, v46 + v2->growSize); /*0x7d9d98*/
    }
    NiTArray_SetAt(v2, v46, &viewerStrings); /*0x7d9da5*/
  }
  if ( !(*(int (__thiscall **)(BSShaderPPLightingProperty *))(*(_DWORD *)this + 0x78))(this) ) /*0x7d9db1*/
  {
    v50 = TESOutput_PrintLabeledBool("clamp", 1); /*0x7d9dbe*/
    v51 = v2->end; /*0x7d9dc3*/
    v52 = v2->capacity; /*0x7d9dc7*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v50; /*0x7d9dd0*/
    if ( v51 >= v52 ) /*0x7d9dd4*/
      NiTArray_SetSize((unsigned __int16 *)v2, v51 + v2->growSize); /*0x7d9ddf*/
    NiTArray_SetAt(v2, v51, &viewerStrings); /*0x7d9dec*/
  }
  v53 = *((_DWORD *)this + 7); /*0x7d9df1*/
  if ( (v53 & 0x8000) != 0 ) /*0x7d9df9*/
  {
    v54 = TESOutput_PrintLabeledFloat("refraction power", *((float *)this + 0x3A));// MoonSugarEffect decode: TES output path reports shader-property refraction power when refraction flag 0x8000 is set. /*0x7d9e0a*/
    v55 = v2->end; /*0x7d9e0f*/
    v56 = v2->capacity; /*0x7d9e13*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v54; /*0x7d9e1c*/
    if ( v55 >= v56 ) /*0x7d9e20*/
      NiTArray_SetSize((unsigned __int16 *)v2, v55 + v2->growSize); /*0x7d9e2b*/
  }
  else
  {
    if ( (v53 & 0x10000) == 0 ) /*0x7d9e3f*/
      goto LABEL_79; /*0x7d9e3f*/
    v57 = TESOutput_PrintLabeledFloat("refraction power", *((float *)this + 0x3A)); /*0x7d9e54*/
    v58 = v2->end; /*0x7d9e59*/
    v59 = v2->capacity; /*0x7d9e5d*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v57; /*0x7d9e66*/
    if ( v58 >= v59 ) /*0x7d9e6a*/
      NiTArray_SetSize((unsigned __int16 *)v2, v58 + v2->growSize); /*0x7d9e75*/
    NiTArray_SetAt(v2, v58, &viewerStrings); /*0x7d9e82*/
    v60 = TESOutput_PrintLabeledSignedInt("refraction period", *((_DWORD *)this + 0x3B));// MoonSugarEffect decode: TES output path reports refraction period when fire/refraction flag 0x10000 is set. /*0x7d9e93*/
    v55 = v2->end; /*0x7d9e98*/
    v61 = v2->capacity; /*0x7d9e9c*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v60; /*0x7d9ea5*/
    if ( v55 >= v61 ) /*0x7d9ea9*/
      NiTArray_SetSize((unsigned __int16 *)v2, v55 + v2->growSize); /*0x7d9eb4*/
  }
  NiTArray_SetAt(v2, v55, &viewerStrings); /*0x7d9ec1*/
LABEL_79:
  if ( (*((_BYTE *)this + 0x1C) & 1) != 0 ) /*0x7d9eca*/
  {
    v62 = TESOutput_PrintLabeledFloat("specular lod", *((float *)this + 0x27)); /*0x7d9edb*/
    v63 = v2->end; /*0x7d9ee0*/
    v64 = v2->capacity; /*0x7d9ee4*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v62; /*0x7d9eed*/
    if ( v63 >= v64 ) /*0x7d9ef1*/
      NiTArray_SetSize((unsigned __int16 *)v2, v63 + v2->growSize); /*0x7d9efc*/
    NiTArray_SetAt(v2, v63, &viewerStrings); /*0x7d9f09*/
  }
  if ( (*((_DWORD *)this + 7) & 0x80) != 0 ) /*0x7d9f15*/
  {
    v65 = TESOutput_PrintLabeledFloat("envmap lod", *((float *)this + 0x29)); /*0x7d9f26*/
    v66 = v2->end; /*0x7d9f2b*/
    v67 = v2->capacity; /*0x7d9f2f*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v65; /*0x7d9f38*/
    if ( v66 >= v67 ) /*0x7d9f3c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v66 + v2->growSize); /*0x7d9f47*/
    NiTArray_SetAt(v2, v66, &viewerStrings); /*0x7d9f54*/
  }
  result = *((_DWORD *)this + 0x38); /*0x7d9f59*/
  if ( result ) /*0x7d9f61*/
  {
    v69 = TESOutput_PrintLabeledPointer("spTexEffectData", *((_DWORD *)this + 0x38)); /*0x7d9f6d*/
    v70 = v2->end; /*0x7d9f72*/
    v71 = v2->capacity; /*0x7d9f76*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v69; /*0x7d9f7f*/
    if ( v70 >= v71 ) /*0x7d9f83*/
      NiTArray_SetSize((unsigned __int16 *)v2, v70 + v2->growSize); /*0x7d9f8e*/
    NiTArray_SetAt(v2, v70, &viewerStrings); /*0x7d9f9b*/
    v72 = TESOutput_PrintLabeledFloat("Fill Color R", *(float *)(*((_DWORD *)this + 0x38) + 0xC)); /*0x7d9fb2*/
    v73 = v2->end; /*0x7d9fb7*/
    v74 = v2->capacity; /*0x7d9fbb*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v72; /*0x7d9fc4*/
    if ( v73 >= v74 ) /*0x7d9fc8*/
      NiTArray_SetSize((unsigned __int16 *)v2, v73 + v2->growSize); /*0x7d9fd3*/
    NiTArray_SetAt(v2, v73, &viewerStrings); /*0x7d9fe0*/
    v75 = TESOutput_PrintLabeledFloat("Fill Color G", *(float *)(*((_DWORD *)this + 0x38) + 0x10)); /*0x7d9ff7*/
    v76 = v2->end; /*0x7d9ffc*/
    v77 = v2->capacity; /*0x7da000*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v75; /*0x7da009*/
    if ( v76 >= v77 ) /*0x7da00d*/
      NiTArray_SetSize((unsigned __int16 *)v2, v76 + v2->growSize); /*0x7da018*/
    NiTArray_SetAt(v2, v76, &viewerStrings); /*0x7da025*/
    v78 = TESOutput_PrintLabeledFloat("Fill Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x14));// Verified (Oblivion): viewer exports the third current-fill color component at TextureEffectData+0x14 but labels it "Fill Color R", duplicating the red label already used for +0x0C. Probable: +0x14 is blue, based on the grouped four-float color layout, packed RGB initialization, and Fallout's NiColorA CurrentFillColor field. /*0x7da03c*/
    v79 = v2->end; /*0x7da041*/
    v80 = v2->capacity; /*0x7da045*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v78; /*0x7da04e*/
    if ( v79 >= v80 ) /*0x7da052*/
      NiTArray_SetSize((unsigned __int16 *)v2, v79 + v2->growSize); /*0x7da05d*/
    NiTArray_SetAt(v2, v79, &viewerStrings); /*0x7da06a*/
    v81 = TESOutput_PrintLabeledFloat("Fill Color A", *(float *)(*((_DWORD *)this + 0x38) + 0x18)); /*0x7da081*/
    v82 = v2->end; /*0x7da086*/
    v83 = v2->capacity; /*0x7da08a*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v81; /*0x7da093*/
    if ( v82 >= v83 ) /*0x7da097*/
      NiTArray_SetSize((unsigned __int16 *)v2, v82 + v2->growSize); /*0x7da0a2*/
    NiTArray_SetAt(v2, v82, &viewerStrings); /*0x7da0af*/
    v84 = TESOutput_PrintLabeledFloat("Edge Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x1C)); /*0x7da0c6*/
    v85 = v2->end; /*0x7da0cb*/
    v86 = v2->capacity; /*0x7da0cf*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v84; /*0x7da0d8*/
    if ( v85 >= v86 ) /*0x7da0dc*/
      NiTArray_SetSize((unsigned __int16 *)v2, v85 + v2->growSize); /*0x7da0e7*/
    NiTArray_SetAt(v2, v85, &viewerStrings); /*0x7da0f4*/
    v87 = TESOutput_PrintLabeledFloat("Edge Color G", *(float *)(*((_DWORD *)this + 0x38) + 0x20)); /*0x7da10b*/
    v88 = v2->end; /*0x7da110*/
    v89 = v2->capacity; /*0x7da114*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v87; /*0x7da11d*/
    if ( v88 >= v89 ) /*0x7da121*/
      NiTArray_SetSize((unsigned __int16 *)v2, v88 + v2->growSize); /*0x7da12c*/
    NiTArray_SetAt(v2, v88, &viewerStrings); /*0x7da139*/
    v90 = TESOutput_PrintLabeledFloat("Edge Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x24));// Verified (Oblivion): viewer exports the third current-edge color component at TextureEffectData+0x24 but labels it "Edge Color R", duplicating the red label already used for +0x1C. Probable: +0x24 is blue, based on the grouped four-float color layout, packed RGB initialization, and Fallout's NiColorA CurrentRimColor field. Fallout names this color group Rim; Oblivion's source data calls it Edge. /*0x7da150*/
    v91 = v2->end; /*0x7da155*/
    v92 = v2->capacity; /*0x7da159*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v90; /*0x7da162*/
    if ( v91 >= v92 ) /*0x7da166*/
      NiTArray_SetSize((unsigned __int16 *)v2, v91 + v2->growSize); /*0x7da171*/
    NiTArray_SetAt(v2, v91, &viewerStrings); /*0x7da17e*/
    v93 = TESOutput_PrintLabeledFloat("Edge Color A", *(float *)(*((_DWORD *)this + 0x38) + 0x28)); /*0x7da195*/
    v94 = v2->end; /*0x7da19a*/
    v95 = v2->capacity; /*0x7da19e*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v93; /*0x7da1a7*/
    if ( v94 >= v95 ) /*0x7da1ab*/
      NiTArray_SetSize((unsigned __int16 *)v2, v94 + v2->growSize); /*0x7da1b6*/
    NiTArray_SetAt(v2, v94, &viewerStrings); /*0x7da1c3*/
    v96 = TESOutput_PrintLabeledFloat("Edge Falloff", *(float *)(*((_DWORD *)this + 0x38) + 0x54)); /*0x7da1da*/
    v97 = v2->end; /*0x7da1df*/
    v98 = v2->capacity; /*0x7da1e3*/
    viewerStrings = (NiTArray_NiTexturingPropertyMap *)v96; /*0x7da1ec*/
    if ( v97 >= v98 ) /*0x7da1f0*/
      NiTArray_SetSize((unsigned __int16 *)v2, v97 + v2->growSize); /*0x7da1fb*/
    return NiTArray_SetAt(v2, v97, &viewerStrings); /*0x7da208*/
  }
  return result; /*0x7da20d*/
}
