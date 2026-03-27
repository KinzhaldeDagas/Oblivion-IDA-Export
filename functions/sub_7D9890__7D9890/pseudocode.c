unsigned int __thiscall sub_7D9890(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  const char *v10; // eax
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // eax
  const char *v15; // eax
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // edx
  int v21; // edx
  const char *v22; // eax
  const char *v23; // eax
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned __int16 *v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  int i; // ebp
  int v31; // edx
  const char *v32; // eax
  unsigned __int16 *v33; // eax
  unsigned int v34; // ebx
  unsigned __int16 *v35; // eax
  unsigned int v36; // ecx
  int v37; // ecx
  const char *v38; // eax
  unsigned __int16 *v39; // eax
  unsigned __int16 *v40; // eax
  unsigned int v41; // ebx
  const char *v42; // eax
  int *v43; // eax
  const char *v44; // eax
  unsigned __int16 *v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // ecx
  unsigned __int16 *v48; // eax
  unsigned int v49; // edx
  unsigned __int16 *v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  int v53; // eax
  unsigned __int16 *v54; // eax
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  unsigned __int16 *v57; // eax
  unsigned int v58; // ebx
  unsigned int v59; // ecx
  unsigned __int16 *v60; // eax
  unsigned int v61; // edx
  unsigned __int16 *v62; // eax
  unsigned int v63; // ebx
  unsigned int v64; // edx
  unsigned __int16 *v65; // eax
  unsigned int v66; // ebx
  unsigned int v67; // edx
  unsigned int result; // eax
  unsigned __int16 *v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // edx
  unsigned __int16 *v72; // eax
  unsigned int v73; // ebx
  unsigned int v74; // edx
  unsigned __int16 *v75; // eax
  unsigned int v76; // ebx
  unsigned int v77; // edx
  unsigned __int16 *v78; // eax
  unsigned int v79; // ebx
  unsigned int v80; // edx
  unsigned __int16 *v81; // eax
  unsigned int v82; // ebx
  unsigned int v83; // edx
  unsigned __int16 *v84; // eax
  unsigned int v85; // ebx
  unsigned int v86; // edx
  unsigned __int16 *v87; // eax
  unsigned int v88; // ebx
  unsigned int v89; // edx
  unsigned __int16 *v90; // eax
  unsigned int v91; // ebx
  unsigned int v92; // edx
  unsigned __int16 *v93; // eax
  unsigned int v94; // ebx
  unsigned int v95; // edx
  unsigned __int16 *v96; // eax
  unsigned int v97; // edi
  unsigned int v98; // edx

  v2 = a2;
  sub_7EE5D0(this, (unsigned __int16 *)a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B45DA8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( (*(_DWORD *)(this + 7) & 0x400) != 0 )
  {
    v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("facegenblend", 1);
    v8 = v2->end;
    v9 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v7;
    if ( v8 >= v9 )
      NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
    NiTArray_SetAt(v2, v8, &a2);
  }
  if ( (*(_DWORD *)(this + 7) & 0x4000) != 0 )
  {
    v24 = (unsigned __int16 *)TESOutput_PrintLabeledBool("landscape texturing", 1);
    v25 = v2->end;
    v26 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v24;
    if ( v25 >= v26 )
      NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
    NiTArray_SetAt(v2, v25, &a2);
    v27 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("landscape textures", *((_WORD *)this + 0x5C));
    v28 = v2->end;
    v29 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v27;
    if ( v28 >= v29 )
      NiTArray_SetSize((unsigned __int16 *)v2, v28 + v2->growSize);
    NiTArray_SetAt(v2, v28, &a2);
    for ( i = 0; i < 9; ++i )
    {
      v31 = *((_DWORD *)this + 0x2F);
      if ( *(_DWORD *)(v31 + 4 * i) )
      {
        v32 = (const char *)sub_6F9540(*(_DWORD *)(v31 + 4 * i));
        if ( v32 )
        {
          v33 = (unsigned __int16 *)TESOutput_PrintLabeledString("base tex", v32);
          v34 = v2->end;
          a2 = (NiTArray_NiTexturingPropertyMap *)v33;
          if ( v34 >= v2->capacity )
            NiTArray_SetSize((unsigned __int16 *)v2, v34 + v2->growSize);
        }
        else
        {
          v35 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("base tex", **((_DWORD **)this + 0x2F));
          v34 = v2->end;
          v36 = v2->capacity;
          a2 = (NiTArray_NiTexturingPropertyMap *)v35;
          if ( v34 >= v36 )
            NiTArray_SetSize((unsigned __int16 *)v2, v34 + v2->growSize);
        }
        NiTArray_SetAt(v2, v34, &a2);
        v37 = *((_DWORD *)this + 0x30);
        if ( *(_DWORD *)(v37 + 4 * i) )
        {
          v38 = (const char *)sub_6F9540(*(_DWORD *)(v37 + 4 * i));
          if ( v38 )
            v39 = (unsigned __int16 *)TESOutput_PrintLabeledString(" normal map", v38);
          else
            v39 = (unsigned __int16 *)TESOutput_PrintLabeledPointer(
                                        " normal map",
                                        *(_DWORD *)(*((_DWORD *)this + 0x30) + 4 * i));
          a2 = (NiTArray_NiTexturingPropertyMap *)v39;
          NiTArray_Add((unsigned __int16 *)v2, &a2);
        }
        if ( *(_BYTE *)(*((_DWORD *)this + 0x34) + i) )
        {
          v40 = (unsigned __int16 *)TESOutput_PrintLabeledBool(" specular", 1);
          v41 = v2->end;
          a2 = (NiTArray_NiTexturingPropertyMap *)v40;
          if ( v41 >= v2->capacity )
            NiTArray_SetSize((unsigned __int16 *)v2, v41 + v2->growSize);
          NiTArray_SetAt(v2, v41, &a2);
        }
        if ( *(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i) )
        {
          v42 = (const char *)sub_6F9540(*(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i));
          if ( v42 )
            a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString(" glow map", v42);
          else
            a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer(
                                                      " glow map",
                                                      *(_DWORD *)(*((_DWORD *)this + 0x31) + 4 * i));
          NiTArray_Add((unsigned __int16 *)v2, &a2);
        }
      }
    }
  }
  else
  {
    v10 = (const char *)sub_6F9540(**((_DWORD **)this + 0x2F));
    if ( v10 )
    {
      v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("base diff", v10);
      v12 = v2->end;
      v13 = v2->capacity;
      a2 = (NiTArray_NiTexturingPropertyMap *)v11;
      if ( v12 >= v13 )
        NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
    }
    else
    {
      v14 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("base diff", **((_DWORD **)this + 0x2F));
      v12 = v2->end;
      a2 = (NiTArray_NiTexturingPropertyMap *)v14;
      if ( v12 >= v2->capacity )
        NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
    }
    NiTArray_SetAt(v2, v12, &a2);
    v15 = (const char *)sub_6F9540(**((_DWORD **)this + 0x30));
    if ( v15 )
    {
      v16 = (unsigned __int16 *)TESOutput_PrintLabeledString("base normal", v15);
      v17 = v2->end;
      v18 = v2->capacity;
      a2 = (NiTArray_NiTexturingPropertyMap *)v16;
      if ( v17 >= v18 )
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
    }
    else
    {
      v19 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("base normal", **((_DWORD **)this + 0x30));
      v17 = v2->end;
      v20 = v2->capacity;
      a2 = (NiTArray_NiTexturingPropertyMap *)v19;
      if ( v17 >= v20 )
        NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
    }
    NiTArray_SetAt(v2, v17, &a2);
    v21 = *((_DWORD *)this + 0x2F);
    if ( *(_DWORD *)(v21 + 4) )
    {
      v22 = (const char *)sub_6F9540(*(_DWORD *)(v21 + 4));
      if ( v22 )
        a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("multi diff", v22);
      else
        a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer(
                                                  "multi diff",
                                                  *(_DWORD *)(*((_DWORD *)this + 0x2F) + 4));
      NiTArray_Add((unsigned __int16 *)v2, &a2);
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 0x30) + 4) )
    {
      v23 = (const char *)sub_6F9540(*(_DWORD *)(*((_DWORD *)this + 0x30) + 4));
      if ( v23 )
        a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("multi normal", v23);
      else
        a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledPointer(
                                                  "multi normal",
                                                  *(_DWORD *)(*((_DWORD *)this + 0x30) + 4));
      NiTArray_Add((unsigned __int16 *)v2, &a2);
    }
  }
  v43 = *((int **)this + 0x31);
  if ( v43 )
  {
    v44 = (const char *)sub_6F9540(*v43);
    if ( v44 )
    {
      v45 = (unsigned __int16 *)TESOutput_PrintLabeledString("glowmap texture", v44);
      v46 = v2->end;
      v47 = v2->capacity;
      a2 = (NiTArray_NiTexturingPropertyMap *)v45;
      if ( v46 >= v47 )
        NiTArray_SetSize((unsigned __int16 *)v2, v46 + v2->growSize);
    }
    else
    {
      v48 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("glowmap texture", **((_DWORD **)this + 0x31));
      v46 = v2->end;
      v49 = v2->capacity;
      a2 = (NiTArray_NiTexturingPropertyMap *)v48;
      if ( v46 >= v49 )
        NiTArray_SetSize((unsigned __int16 *)v2, v46 + v2->growSize);
    }
    NiTArray_SetAt(v2, v46, &a2);
  }
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this) )
  {
    v50 = (unsigned __int16 *)TESOutput_PrintLabeledBool("clamp", 1);
    v51 = v2->end;
    v52 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v50;
    if ( v51 >= v52 )
      NiTArray_SetSize((unsigned __int16 *)v2, v51 + v2->growSize);
    NiTArray_SetAt(v2, v51, &a2);
  }
  v53 = *((_DWORD *)this + 7);
  if ( (v53 & 0x8000) != 0 )
  {
    v54 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("refraction power", *(this + 0x3A));
    v55 = v2->end;
    v56 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v54;
    if ( v55 >= v56 )
      NiTArray_SetSize((unsigned __int16 *)v2, v55 + v2->growSize);
  }
  else
  {
    if ( (v53 & 0x10000) == 0 )
      goto LABEL_79;
    v57 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("refraction power", *(this + 0x3A));
    v58 = v2->end;
    v59 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v57;
    if ( v58 >= v59 )
      NiTArray_SetSize((unsigned __int16 *)v2, v58 + v2->growSize);
    NiTArray_SetAt(v2, v58, &a2);
    v60 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("refraction period", *((_DWORD *)this + 0x3B));
    v55 = v2->end;
    v61 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v60;
    if ( v55 >= v61 )
      NiTArray_SetSize((unsigned __int16 *)v2, v55 + v2->growSize);
  }
  NiTArray_SetAt(v2, v55, &a2);
LABEL_79:
  if ( (*(_BYTE *)(this + 7) & 1) != 0 )
  {
    v62 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("specular lod", *(this + 0x27));
    v63 = v2->end;
    v64 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v62;
    if ( v63 >= v64 )
      NiTArray_SetSize((unsigned __int16 *)v2, v63 + v2->growSize);
    NiTArray_SetAt(v2, v63, &a2);
  }
  if ( (*(_DWORD *)(this + 7) & 0x80) != 0 )
  {
    v65 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("envmap lod", *(this + 0x29));
    v66 = v2->end;
    v67 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v65;
    if ( v66 >= v67 )
      NiTArray_SetSize((unsigned __int16 *)v2, v66 + v2->growSize);
    NiTArray_SetAt(v2, v66, &a2);
  }
  result = *((_DWORD *)this + 0x38);
  if ( result )
  {
    v69 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("spTexEffectData", *((_DWORD *)this + 0x38));
    v70 = v2->end;
    v71 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v69;
    if ( v70 >= v71 )
      NiTArray_SetSize((unsigned __int16 *)v2, v70 + v2->growSize);
    NiTArray_SetAt(v2, v70, &a2);
    v72 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fill Color R", *(float *)(*((_DWORD *)this + 0x38) + 0xC));
    v73 = v2->end;
    v74 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v72;
    if ( v73 >= v74 )
      NiTArray_SetSize((unsigned __int16 *)v2, v73 + v2->growSize);
    NiTArray_SetAt(v2, v73, &a2);
    v75 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fill Color G", *(float *)(*((_DWORD *)this + 0x38) + 0x10));
    v76 = v2->end;
    v77 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v75;
    if ( v76 >= v77 )
      NiTArray_SetSize((unsigned __int16 *)v2, v76 + v2->growSize);
    NiTArray_SetAt(v2, v76, &a2);
    v78 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fill Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x14));
    v79 = v2->end;
    v80 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v78;
    if ( v79 >= v80 )
      NiTArray_SetSize((unsigned __int16 *)v2, v79 + v2->growSize);
    NiTArray_SetAt(v2, v79, &a2);
    v81 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Fill Color A", *(float *)(*((_DWORD *)this + 0x38) + 0x18));
    v82 = v2->end;
    v83 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v81;
    if ( v82 >= v83 )
      NiTArray_SetSize((unsigned __int16 *)v2, v82 + v2->growSize);
    NiTArray_SetAt(v2, v82, &a2);
    v84 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Edge Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x1C));
    v85 = v2->end;
    v86 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v84;
    if ( v85 >= v86 )
      NiTArray_SetSize((unsigned __int16 *)v2, v85 + v2->growSize);
    NiTArray_SetAt(v2, v85, &a2);
    v87 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Edge Color G", *(float *)(*((_DWORD *)this + 0x38) + 0x20));
    v88 = v2->end;
    v89 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v87;
    if ( v88 >= v89 )
      NiTArray_SetSize((unsigned __int16 *)v2, v88 + v2->growSize);
    NiTArray_SetAt(v2, v88, &a2);
    v90 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Edge Color R", *(float *)(*((_DWORD *)this + 0x38) + 0x24));
    v91 = v2->end;
    v92 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v90;
    if ( v91 >= v92 )
      NiTArray_SetSize((unsigned __int16 *)v2, v91 + v2->growSize);
    NiTArray_SetAt(v2, v91, &a2);
    v93 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Edge Color A", *(float *)(*((_DWORD *)this + 0x38) + 0x28));
    v94 = v2->end;
    v95 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v93;
    if ( v94 >= v95 )
      NiTArray_SetSize((unsigned __int16 *)v2, v94 + v2->growSize);
    NiTArray_SetAt(v2, v94, &a2);
    v96 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Edge Falloff", *(float *)(*((_DWORD *)this + 0x38) + 0x54));
    v97 = v2->end;
    v98 = v2->capacity;
    a2 = (NiTArray_NiTexturingPropertyMap *)v96;
    if ( v97 >= v98 )
      NiTArray_SetSize((unsigned __int16 *)v2, v97 + v2->growSize);
    return NiTArray_SetAt(v2, v97, &a2);
  }
  return result;
}
