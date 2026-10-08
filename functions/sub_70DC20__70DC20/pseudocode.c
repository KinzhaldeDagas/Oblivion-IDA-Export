unsigned int __thiscall sub_70DC20(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // ecx
  float v30; // [esp+10h] [ebp-Ch] BYREF
  float v31; // [esp+14h] [ebp-8h]
  float v32; // [esp+18h] [ebp-4h]

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x70dc25*/
  sub_7086B0(this, a2); /*0x70dc2d*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FACC.name); /*0x70dc38*/
  end = v3->end; /*0x70dc3d*/
  capacity = v3->capacity; /*0x70dc41*/
  a2 = v5; /*0x70dc4a*/
  if ( end >= capacity ) /*0x70dc4e*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x70dc59*/
  NiTArray_SetAt(v3, end, &a2); /*0x70dc66*/
  v8 = (unsigned __int16 *)sub_70DEB0(this + 0x3B, "m_kViewFrustum"); /*0x70dc76*/
  v9 = v3->end; /*0x70dc7b*/
  v10 = v3->capacity; /*0x70dc7f*/
  a2 = v8; /*0x70dc85*/
  if ( v9 >= v10 ) /*0x70dc89*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x70dc94*/
  NiTArray_SetAt(v3, v9, &a2); /*0x70dca1*/
  v11 = (unsigned __int16 *)sub_70D270(this + 0x44, "m_kPort"); /*0x70dcb1*/
  v12 = v3->end; /*0x70dcb6*/
  v13 = v3->capacity; /*0x70dcba*/
  a2 = v11; /*0x70dcc0*/
  if ( v12 >= v13 ) /*0x70dcc4*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x70dccf*/
  NiTArray_SetAt(v3, v12, &a2); /*0x70dcdc*/
  v30 = *(this + 0x19); /*0x70dce4*/
  v31 = *(this + 0x1C); /*0x70dcf4*/
  v32 = *(this + 0x1F); /*0x70dcfb*/
  v14 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldDir"); /*0x70dcff*/
  v15 = v3->end; /*0x70dd04*/
  v16 = v3->capacity; /*0x70dd08*/
  a2 = v14; /*0x70dd0e*/
  if ( v15 >= v16 ) /*0x70dd12*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x70dd1d*/
  NiTArray_SetAt(v3, v15, &a2); /*0x70dd2a*/
  v30 = *(this + 0x1A); /*0x70dd32*/
  v31 = *(this + 0x1D); /*0x70dd42*/
  v32 = *(this + 0x20); /*0x70dd4c*/
  v17 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldUp"); /*0x70dd50*/
  v18 = v3->end; /*0x70dd55*/
  v19 = v3->capacity; /*0x70dd59*/
  a2 = v17; /*0x70dd5f*/
  if ( v18 >= v19 ) /*0x70dd63*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x70dd6e*/
  NiTArray_SetAt(v3, v18, &a2); /*0x70dd7b*/
  v30 = *(this + 0x1B); /*0x70dd83*/
  v31 = *(this + 0x1E); /*0x70dd93*/
  v32 = *(this + 0x21); /*0x70dd9d*/
  v20 = (unsigned __int16 *)sub_707280(&v30, "m_kWorldRight"); /*0x70dda1*/
  v21 = v3->end; /*0x70dda6*/
  v22 = v3->capacity; /*0x70ddaa*/
  a2 = v20; /*0x70ddb0*/
  if ( v21 >= v22 ) /*0x70ddb4*/
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize); /*0x70ddbf*/
  NiTArray_SetAt(v3, v21, &a2); /*0x70ddcc*/
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fMinNearPlaneDist", *(this + 0x42)); /*0x70dde0*/
  v24 = v3->end; /*0x70dde5*/
  v25 = v3->capacity; /*0x70dde9*/
  a2 = v23; /*0x70ddf2*/
  if ( v24 >= v25 ) /*0x70ddf6*/
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize); /*0x70de01*/
  NiTArray_SetAt(v3, v24, &a2); /*0x70de0e*/
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fMaxFarNearRatio", *(this + 0x43)); /*0x70de22*/
  v27 = v3->end; /*0x70de27*/
  v28 = v3->capacity; /*0x70de2b*/
  a2 = v26; /*0x70de34*/
  if ( v27 >= v28 ) /*0x70de38*/
    NiTArray_SetSize((unsigned __int16 *)v3, v27 + v3->growSize); /*0x70de43*/
  return NiTArray_SetAt(v3, v27, &a2); /*0x70de55*/
}
