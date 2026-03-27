int __thiscall sub_67C4A0(float **this, int a2, TESObjectREFR *a3, char a4)
{
  float *v5; // eax
  float *v7; // eax
  TESObjectCELL *ParentCell; // eax
  double v9; // st7
  double v10; // st7
  float v11; // edx
  float v12; // eax
  double v13; // st7
  double v14; // st7
  TESObjectCELL *v15; // eax
  TESObjectCELL *v16; // eax
  int *v17; // eax
  float v19; // [esp+Ch] [ebp-24h]
  float v20; // [esp+10h] [ebp-20h]
  float v21; // [esp+14h] [ebp-1Ch]
  float v22; // [esp+18h] [ebp-18h]
  float v23; // [esp+18h] [ebp-18h]
  float v24; // [esp+1Ch] [ebp-14h]
  float v25; // [esp+1Ch] [ebp-14h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+24h] [ebp-Ch] BYREF
  float v29; // [esp+28h] [ebp-8h]
  float v30; // [esp+2Ch] [ebp-4h]
  float v31; // [esp+38h] [ebp+8h]

  v5 = *(this + 0xF);
  v24 = v5[6];
  v22 = v5[5];
  v26 = v5[7];
  v7 = a3->vtbl->GetPos(a3);
  v19 = *v7;
  v20 = v7[1];
  v21 = v7[2];
  if ( TESObjectREFR_GetParentCell(a3)
    && (ParentCell = TESObjectREFR_GetParentCell(a3), TESObjectCELL_IsInterior(ParentCell)) )
  {
    v9 = flt_B36B20;
  }
  else
  {
    v9 = flt_B36B10;
  }
  v31 = v9 + v9 + dbl_A2FC68;
  if ( a4 )
  {
    *(float *)&v28 = v22 - v19;
    v29 = v24 - v20;
    v10 = v26 - v21;
  }
  else
  {
    *(float *)&v28 = v19 - v22;
    v29 = v20 - v24;
    v10 = v21 - v26;
  }
  v30 = v10;
  v11 = v29;
  v12 = v30;
  *(float *)a2 = *(float *)&v28;
  *(float *)(a2 + 4) = v11;
  *(float *)(a2 + 8) = v12;
  sub_43F350((float *)a2);
  *(float *)&v28 = *(float *)a2 * v31;
  v29 = *(float *)(a2 + 4) * v31;
  v30 = v31 * *(float *)(a2 + 8);
  v23 = *(float *)&v28 + v19;
  v13 = v29;
  *(float *)a2 = v23;
  v25 = v13 + v20;
  v14 = v30;
  *(float *)(a2 + 4) = v25;
  v27 = v14 + v21;
  *(float *)(a2 + 8) = v27;
  if ( TESObjectREFR_GetParentCell(a3) )
  {
    v15 = TESObjectREFR_GetParentCell(a3);
    if ( TESObjectCELL_IsInterior(v15) )
    {
      v16 = TESObjectREFR_GetParentCell(a3);
      v17 = sub_5E2E20(a3, &v28, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(float *)(a2 + 8), v16, 0.0, 0, 0);
      *(_DWORD *)a2 = *v17;
      *(_DWORD *)(a2 + 4) = v17[1];
      *(_DWORD *)(a2 + 8) = v17[2];
    }
  }
  *(this + 0x11) = *(float **)a2;
  *(this + 0x12) = *(float **)(a2 + 4);
  *(this + 0x13) = *(float **)(a2 + 8);
  return a2;
}
