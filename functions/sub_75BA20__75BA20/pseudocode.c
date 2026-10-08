unsigned int __thiscall sub_75BA20(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // edi
  int v28; // edi
  const char *v29; // eax
  unsigned __int16 *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75ba22*/
  sub_752EC0(this, a2); /*0x75ba2a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41A28.name); /*0x75ba35*/
  end = v2->end; /*0x75ba3a*/
  capacity = v2->capacity; /*0x75ba3e*/
  a2 = v4; /*0x75ba47*/
  if ( end >= capacity ) /*0x75ba4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75ba56*/
  NiTArray_SetAt(v2, end, &a2); /*0x75ba63*/
  v7 = *((_DWORD *)this + 6); /*0x75ba68*/
  if ( v7 ) /*0x75ba6d*/
    v8 = *(const char **)(v7 + 8); /*0x75ba6f*/
  else
    v8 = "None"; /*0x75ba74*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Bomb Object", v8); /*0x75ba7f*/
  v10 = v2->end; /*0x75ba84*/
  v11 = v2->capacity; /*0x75ba88*/
  a2 = v9; /*0x75ba91*/
  if ( v10 >= v11 ) /*0x75ba95*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x75baa0*/
  NiTArray_SetAt(v2, v10, &a2); /*0x75baad*/
  v12 = (unsigned __int16 *)sub_707280(this + 7, "Bomb Axis"); /*0x75baba*/
  v13 = v2->end; /*0x75babf*/
  v14 = v2->capacity; /*0x75bac3*/
  a2 = v12; /*0x75bac9*/
  if ( v13 >= v14 ) /*0x75bacd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x75bad8*/
  NiTArray_SetAt(v2, v13, &a2); /*0x75bae5*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Decay", *(this + 0xA)); /*0x75baf6*/
  v16 = v2->end; /*0x75bafb*/
  v17 = v2->capacity; /*0x75baff*/
  a2 = v15; /*0x75bb08*/
  if ( v16 >= v17 ) /*0x75bb0c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x75bb17*/
  NiTArray_SetAt(v2, v16, &a2); /*0x75bb24*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("DeltaV", *(this + 0xB)); /*0x75bb35*/
  v19 = v2->end; /*0x75bb3a*/
  v20 = v2->capacity; /*0x75bb3e*/
  a2 = v18; /*0x75bb47*/
  if ( v19 >= v20 ) /*0x75bb4b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x75bb56*/
  NiTArray_SetAt(v2, v19, &a2); /*0x75bb63*/
  v21 = *((_DWORD *)this + 0xC); /*0x75bb68*/
  if ( v21 ) /*0x75bb6e*/
  {
    v22 = v21 - 1; /*0x75bb70*/
    if ( v22 ) /*0x75bb73*/
    {
      if ( v22 == 1 ) /*0x75bb78*/
        v23 = "EXPONENTIAL"; /*0x75bb81*/
      else
        v23 = "Unknown"; /*0x75bb7a*/
    }
    else
    {
      v23 = "LINEAR"; /*0x75bb88*/
    }
  }
  else
  {
    v23 = "NONE"; /*0x75bb8f*/
  }
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledString("Decay Type", v23); /*0x75bb9a*/
  v25 = v2->end; /*0x75bb9f*/
  v26 = v2->capacity; /*0x75bba3*/
  a2 = v24; /*0x75bbac*/
  if ( v25 >= v26 ) /*0x75bbb0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x75bbbb*/
  NiTArray_SetAt(v2, v25, &a2); /*0x75bbc8*/
  v27 = *((_DWORD *)this + 0xD); /*0x75bbcd*/
  if ( v27 ) /*0x75bbd3*/
  {
    v28 = v27 - 1; /*0x75bbd5*/
    if ( v28 ) /*0x75bbd8*/
    {
      if ( v28 == 1 ) /*0x75bbdd*/
        v29 = "PLANAR"; /*0x75bbe6*/
      else
        v29 = "Unknown"; /*0x75bbdf*/
    }
    else
    {
      v29 = "CYLINDRICAL"; /*0x75bbed*/
    }
  }
  else
  {
    v29 = "SPHERICAL"; /*0x75bbf4*/
  }
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledString("Symmetry Type", v29); /*0x75bbff*/
  v31 = v2->end; /*0x75bc04*/
  v32 = v2->capacity; /*0x75bc08*/
  a2 = v30; /*0x75bc11*/
  if ( v31 >= v32 ) /*0x75bc15*/
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize); /*0x75bc20*/
  return NiTArray_SetAt(v2, v31, &a2); /*0x75bc32*/
}
