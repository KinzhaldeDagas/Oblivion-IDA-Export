// Generic fixed-prefix/component DATA overlay. Copies min(chunk_length,fixed_prefix_size), then updates later components only when their starting offset is below chunk_length; omitted suffix components retain prior in-memory values.
__int16 __thiscall TESForm_LoadGenericComponents(TESForm *this, Data *a1, void *Dst, unsigned __int16 a4)
{
  unsigned __int16 v4; // di
  unsigned __int16 v6; // ax
  TESAttributes *v7; // eax
  unsigned __int16 v8; // dx
  float v9; // eax
  int v10; // ecx
  size_t v12[2]; // [esp-4h] [ebp-34h] BYREF
  TESAttributes *v13; // [esp+Ch] [ebp-24h]
  int v14; // [esp+10h] [ebp-20h]
  _WORD *v15; // [esp+14h] [ebp-1Ch]
  float *v16; // [esp+18h] [ebp-18h]
  float v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+24h] [ebp-Ch]
  int length_low; // [esp+28h] [ebp-8h]

  length_low = LOWORD(a1->currentChunk.length); /*0x46bdbc*/
  v4 = a4; /*0x46bdc3*/
  _alloca_(SHIDWORD(v12[0])); /*0x46bdc9*/
  TESFile_GetChunkData(a1, (char *)v12 + 4, (unsigned __int16)length_low); /*0x46bdd9*/
  v6 = length_low; /*0x46bde7*/
  if ( (unsigned __int16)length_low >= a4 ) /*0x46bdea*/
    v6 = a4; /*0x46bdec*/
  LODWORD(v12[0]) = v6; /*0x46bdf5*/
  memcpy(Dst, (char *)v12 + 4, v12[0]);         // Copy the available fixed prefix only; this is an overlay, not a whole-structure replacement. /*0x46bdf8*/
  *(float *)&v19 = COERCE_FLOAT( /*0x46be20*/
                     OblivionDynamicCast(
                       this,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESUsesForm `RTTI Type Descriptor',
                       0));
  v14 = (int)OblivionDynamicCast( /*0x46be37*/
               this,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESValueForm `RTTI Type Descriptor',
               0);
  v16 = (float *)OblivionDynamicCast( /*0x46be51*/
                   this,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESHealthForm `RTTI Type Descriptor',
                   0);
  v17 = COERCE_FLOAT( /*0x46be68*/
          OblivionDynamicCast(
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESWeightForm `RTTI Type Descriptor',
            0));
  *(float *)&v18 = COERCE_FLOAT( /*0x46be7f*/
                     OblivionDynamicCast(
                       this,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESQualityForm `RTTI Type Descriptor',
                       0));
  v15 = OblivionDynamicCast( /*0x46be96*/
          this,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESAttackDamageForm `RTTI Type Descriptor',
          0);
  v7 = (TESAttributes *)OblivionDynamicCast( /*0x46be99*/
                          this,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESAttributes `RTTI Type Descriptor',
                          0);
  v8 = length_low; /*0x46be9e*/
  v13 = v7; /*0x46bea1*/
  if ( *(float *)&v19 != 0.0 && a4 < (unsigned __int16)length_low ) /*0x46beb4*/
  {
    *(_BYTE *)(v19 + 4) = *((_BYTE *)v12 + a4 + 4); /*0x46bebf*/
    v4 = a4 + 1; /*0x46bec2*/
  }
  if ( v14 ) /*0x46beca*/
  {                                             // Value component is overwritten only when the chunk extends past its start offset. The check does not require all four bytes to remain, so a truncated component is unsafe/indeterminate.
    if ( v4 < v8 ) /*0x46becf*/
    {
      v19 = *(int *)((char *)v12 + v4 + 4); /*0x46bed7*/
      v4 += 4; /*0x46bede*/
      TESValueForm_SetValue((_DWORD *)v14, v19); /*0x46bee1*/
      v8 = length_low; /*0x46bee6*/
    }
  }
  if ( v16 ) /*0x46beee*/
  {
    if ( v4 < v8 ) /*0x46bef3*/
    {
      v19 = *(int *)((char *)v12 + v4 + 4); /*0x46befb*/
      v4 += 4; /*0x46bf01*/
      v16[1] = *(float *)&v19; /*0x46bf04*/
    }
  }
  v9 = v17; /*0x46bf07*/
  if ( v17 != 0.0 && v4 < v8 ) /*0x46bf11*/
  {
    v17 = *(float *)((char *)v12 + v4 + 4); /*0x46bf19*/
    v4 += 4; /*0x46bf1c*/
    *(float *)&v19 = v17; /*0x46bf22*/
    *(float *)(LODWORD(v9) + 4) = v17; /*0x46bf2e*/
  }
  v10 = v18; /*0x46bf31*/
  if ( *(float *)&v18 != 0.0 && v4 < v8 ) /*0x46bf3b*/
  {
    v18 = *(int *)((char *)v12 + v4 + 4); /*0x46bf46*/
    v4 += 4; /*0x46bf49*/
    v19 = v18; /*0x46bf4f*/
    v18 = (int)*(float *)&v18; /*0x46bf64*/
    LOWORD(v9) = (unsigned __int8)v18; /*0x46bf67*/
    v18 = (unsigned __int8)v18; /*0x46bf6b*/
    *(float *)(v10 + 4) = (float)(unsigned __int8)v18; /*0x46bf74*/
  }
  if ( v15 ) /*0x46bf7c*/
  {
    if ( v4 < v8 ) /*0x46bf81*/
    {
      LOWORD(length_low) = *(_WORD *)((char *)v12 + v4 + 4); /*0x46bf8a*/
      v4 += 2; /*0x46bf93*/
      LOWORD(v9) = sub_468A50(v15, length_low); /*0x46bf96*/
    }
  }
  if ( v13 ) /*0x46bfa0*/
    LOWORD(v9) = sub_468CA0(v13, (size_t *)((char *)v12 + v4 + 4)); /*0x46bfa8*/
  return LOWORD(v9); /*0x46bfb0*/
}
