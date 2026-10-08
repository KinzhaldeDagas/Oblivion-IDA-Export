unsigned int __thiscall sub_751AD0(float *this, unsigned __int16 *a2)
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
  unsigned __int16 *v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // edi
  const char *v28; // eax
  unsigned __int16 *v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x751ad2*/
  sub_752EC0(this, a2); /*0x751ada*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40C3C.name); /*0x751ae5*/
  end = v2->end; /*0x751aea*/
  capacity = v2->capacity; /*0x751aee*/
  a2 = v4; /*0x751af7*/
  if ( end >= capacity ) /*0x751afb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x751b06*/
  NiTArray_SetAt(v2, end, &a2); /*0x751b13*/
  v7 = *((_DWORD *)this + 6); /*0x751b18*/
  if ( v7 ) /*0x751b1d*/
    v8 = *(const char **)(v7 + 8); /*0x751b1f*/
  else
    v8 = "None"; /*0x751b24*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Gravity Object", v8); /*0x751b2f*/
  v10 = v2->end; /*0x751b34*/
  v11 = v2->capacity; /*0x751b38*/
  a2 = v9; /*0x751b41*/
  if ( v10 >= v11 ) /*0x751b45*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x751b50*/
  NiTArray_SetAt(v2, v10, &a2); /*0x751b5d*/
  v12 = (unsigned __int16 *)sub_707280(this + 7, "Gravity Axis"); /*0x751b6a*/
  v13 = v2->end; /*0x751b6f*/
  v14 = v2->capacity; /*0x751b73*/
  a2 = v12; /*0x751b79*/
  if ( v13 >= v14 ) /*0x751b7d*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x751b88*/
  NiTArray_SetAt(v2, v13, &a2); /*0x751b95*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Decay", *(this + 0xA)); /*0x751ba6*/
  v16 = v2->end; /*0x751bab*/
  v17 = v2->capacity; /*0x751baf*/
  a2 = v15; /*0x751bb8*/
  if ( v16 >= v17 ) /*0x751bbc*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x751bc7*/
  NiTArray_SetAt(v2, v16, &a2); /*0x751bd4*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Strength", *(this + 0xB)); /*0x751be5*/
  v19 = v2->end; /*0x751bea*/
  v20 = v2->capacity; /*0x751bee*/
  a2 = v18; /*0x751bf7*/
  if ( v19 >= v20 ) /*0x751bfb*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x751c06*/
  NiTArray_SetAt(v2, v19, &a2); /*0x751c13*/
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Turbulence", *(this + 0xD)); /*0x751c24*/
  v22 = v2->end; /*0x751c29*/
  v23 = v2->capacity; /*0x751c2d*/
  a2 = v21; /*0x751c36*/
  if ( v22 >= v23 ) /*0x751c3a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize); /*0x751c45*/
  NiTArray_SetAt(v2, v22, &a2); /*0x751c52*/
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("TurbulenceScale", *(this + 0xE)); /*0x751c63*/
  v25 = v2->end; /*0x751c68*/
  v26 = v2->capacity; /*0x751c6c*/
  a2 = v24; /*0x751c75*/
  if ( v25 >= v26 ) /*0x751c79*/
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x751c84*/
  NiTArray_SetAt(v2, v25, &a2); /*0x751c91*/
  v27 = *((_DWORD *)this + 0xC); /*0x751c96*/
  if ( v27 ) /*0x751c9b*/
  {
    v28 = "FORCE_SPHERICAL"; /*0x751ca7*/
    if ( v27 != 1 ) /*0x751cac*/
      v28 = "Unknown"; /*0x751cae*/
  }
  else
  {
    v28 = "FORCE_PLANAR"; /*0x751c9d*/
  }
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledString("Force Type", v28); /*0x751cb9*/
  v30 = v2->end; /*0x751cbe*/
  v31 = v2->capacity; /*0x751cc2*/
  a2 = v29; /*0x751ccb*/
  if ( v30 >= v31 ) /*0x751ccf*/
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize); /*0x751cda*/
  return NiTArray_SetAt(v2, v30, &a2); /*0x751cec*/
}
