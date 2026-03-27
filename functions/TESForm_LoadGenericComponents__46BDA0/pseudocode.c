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

  length_low = LOWORD(a1->currentChunk.length);
  v4 = a4;
  _alloca_();
  TESFile_GetChunkData(a1, (char *)v12 + 4, (unsigned __int16)length_low);
  v6 = length_low;
  if ( (unsigned __int16)length_low >= a4 )
    v6 = a4;
  LODWORD(v12[0]) = v6;
  memcpy(Dst, (char *)v12 + 4, v12[0]);
  *(float *)&v19 = COERCE_FLOAT(
                     OblivionDynamicCast(
                       this,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESUsesForm `RTTI Type Descriptor',
                       0));
  v14 = (int)OblivionDynamicCast(
               this,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESValueForm `RTTI Type Descriptor',
               0);
  v16 = (float *)OblivionDynamicCast(
                   this,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESHealthForm `RTTI Type Descriptor',
                   0);
  v17 = COERCE_FLOAT(
          OblivionDynamicCast(
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESWeightForm `RTTI Type Descriptor',
            0));
  *(float *)&v18 = COERCE_FLOAT(
                     OblivionDynamicCast(
                       this,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESQualityForm `RTTI Type Descriptor',
                       0));
  v15 = OblivionDynamicCast(
          this,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESAttackDamageForm `RTTI Type Descriptor',
          0);
  v7 = (TESAttributes *)OblivionDynamicCast(
                          this,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESAttributes `RTTI Type Descriptor',
                          0);
  v8 = length_low;
  v13 = v7;
  if ( *(float *)&v19 != 0.0 && a4 < (unsigned __int16)length_low )
  {
    *(_BYTE *)(v19 + 4) = *((_BYTE *)v12 + a4 + 4);
    v4 = a4 + 1;
  }
  if ( v14 )
  {
    if ( v4 < v8 )
    {
      v19 = *(int *)((char *)v12 + v4 + 4);
      v4 += 4;
      TESValueForm_SetValue((_DWORD *)v14, v19);
      v8 = length_low;
    }
  }
  if ( v16 )
  {
    if ( v4 < v8 )
    {
      v19 = *(int *)((char *)v12 + v4 + 4);
      v4 += 4;
      v16[1] = *(float *)&v19;
    }
  }
  v9 = v17;
  if ( v17 != 0.0 && v4 < v8 )
  {
    v17 = *(float *)((char *)v12 + v4 + 4);
    v4 += 4;
    *(float *)&v19 = v17;
    *(float *)(LODWORD(v9) + 4) = v17;
  }
  v10 = v18;
  if ( *(float *)&v18 != 0.0 && v4 < v8 )
  {
    v18 = *(int *)((char *)v12 + v4 + 4);
    v4 += 4;
    v19 = v18;
    v18 = (int)*(float *)&v18;
    LOWORD(v9) = (unsigned __int8)v18;
    v18 = (unsigned __int8)v18;
    *(float *)(v10 + 4) = (float)(unsigned __int8)v18;
  }
  if ( v15 )
  {
    if ( v4 < v8 )
    {
      LOWORD(length_low) = *(_WORD *)((char *)v12 + v4 + 4);
      v4 += 2;
      LOWORD(v9) = sub_468A50(v15, length_low);
    }
  }
  if ( v13 )
    LOWORD(v9) = sub_468CA0(v13, (size_t *)((char *)v12 + v4 + 4));
  return LOWORD(v9);
}
