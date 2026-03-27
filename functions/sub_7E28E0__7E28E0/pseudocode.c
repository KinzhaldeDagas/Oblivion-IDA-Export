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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_73DCA0(this, (int)this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B46000);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( (*(_BYTE *)(this + 7) & 1) != 0 )
  {
    v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("specular", 1);
    v8 = v2->end;
    v9 = v2->capacity;
    a2 = v7;
    if ( v8 >= v9 )
      NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
    NiTArray_SetAt(v2, v8, &a2);
  }
  if ( (*(_BYTE *)(this + 7) & 2) != 0 )
  {
    v10 = (unsigned __int16 *)TESOutput_PrintLabeledBool("skinned", 1);
    v11 = v2->end;
    v12 = v2->capacity;
    a2 = v10;
    if ( v11 >= v12 )
      NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
    NiTArray_SetAt(v2, v11, &a2);
  }
  if ( (*(_BYTE *)(this + 7) & 4) != 0 )
  {
    v13 = (unsigned __int16 *)TESOutput_PrintLabeledBool("lowdetail", 1);
    v14 = v2->end;
    v15 = v2->capacity;
    a2 = v13;
    if ( v14 >= v15 )
      NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
    NiTArray_SetAt(v2, v14, &a2);
  }
  if ( (*(_BYTE *)(this + 7) & 8) != 0 )
  {
    v16 = (unsigned __int16 *)TESOutput_PrintLabeledBool("multitexture", 1);
    v17 = v2->end;
    v18 = v2->capacity;
    a2 = v16;
    if ( v17 >= v18 )
      NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
    NiTArray_SetAt(v2, v17, &a2);
  }
  if ( (*(_BYTE *)(this + 7) & 0x10) != 0 )
  {
    v19 = (unsigned __int16 *)TESOutput_PrintLabeledBool("multispecular", 1);
    v20 = v2->end;
    v21 = v2->capacity;
    a2 = v19;
    if ( v20 >= v21 )
      NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize);
    NiTArray_SetAt(v2, v20, &a2);
  }
  if ( (*(_DWORD *)(this + 7) & 0x80) != 0 )
  {
    v22 = (unsigned __int16 *)TESOutput_PrintLabeledBool("envmap reflection", 1);
    v23 = v2->end;
    v24 = v2->capacity;
    a2 = v22;
    if ( v23 >= v24 )
      NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize);
    NiTArray_SetAt(v2, v23, &a2);
  }
  if ( *(this + 8) < 1.0 )
  {
    v25 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fAlpha", *(this + 8));
    v26 = v2->end;
    v27 = v2->capacity;
    a2 = v25;
    if ( v26 >= v27 )
      NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize);
    NiTArray_SetAt(v2, v26, &a2);
  }
  if ( (*(_DWORD *)(this + 7) & 0x100) != 0 )
  {
    v28 = (unsigned __int16 *)TESOutput_PrintLabeledBool("alpha base texture", 1);
    v29 = v2->end;
    v30 = v2->capacity;
    a2 = v28;
    if ( v29 >= v30 )
      NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize);
    NiTArray_SetAt(v2, v29, &a2);
  }
  v31 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("Scenegraph", *((_DWORD *)this + 7) >> 0x1C);
  v32 = v2->end;
  v33 = v2->capacity;
  a2 = v31;
  if ( v32 >= v33 )
    NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize);
  NiTArray_SetAt(v2, v32, &a2);
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("iLastRenderPassState", *((_DWORD *)this + 9));
  v35 = v2->end;
  a2 = v34;
  if ( v35 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize);
  NiTArray_SetAt(v2, v35, &a2);
  v36 = *((_DWORD *)this + 0xD);
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("number of passes", v36);
  v38 = v2->end;
  a2 = v37;
  if ( v38 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v38 + v2->growSize);
  result = NiTArray_SetAt(v2, v38, &a2);
  if ( v36 > 0 )
  {
    v40 = *((_DWORD *)this + 0xB);
    v41 = *(_DWORD **)v40;
    for ( result = *(_DWORD *)(v40 + 8); result; v41 = (_DWORD *)*v41 )
    {
      if ( *(_BYTE *)(result + 6) )
      {
        RenderPassName = BSShaderProperty_GetRenderPassName(*(unsigned __int16 *)(result + 4));
        v43 = (unsigned __int16 *)TESOutput_PrintLabeledString(" Fpass", RenderPassName);
        v44 = v2->end;
        v45 = v2->capacity;
        a2 = v43;
        if ( v44 >= v45 )
          NiTArray_SetSize((unsigned __int16 *)v2, v44 + v2->growSize);
      }
      else
      {
        v46 = BSShaderProperty_GetRenderPassName(*(unsigned __int16 *)(result + 4));
        v47 = (unsigned __int16 *)TESOutput_PrintLabeledString("  pass", v46);
        v44 = v2->end;
        v48 = v2->capacity;
        a2 = v47;
        if ( v44 >= v48 )
          NiTArray_SetSize((unsigned __int16 *)v2, v44 + v2->growSize);
      }
      result = NiTArray_SetAt(v2, v44, &a2);
      if ( !v41 )
        break;
      result = v41[2];
    }
  }
  return result;
}
