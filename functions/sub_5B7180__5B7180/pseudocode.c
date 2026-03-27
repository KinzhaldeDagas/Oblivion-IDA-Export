int __stdcall sub_5B7180(float *a1, float *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  TESObjectREFR *v4; // ecx
  TESObjectCELL *ParentCell; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // edi
  double v11; // st6
  double v12; // st7
  double v13; // st5
  int v14; // eax
  double v15; // rt0
  double v16; // st5
  double v17; // st7
  float v18; // edx
  double v19; // st5
  double v20; // st4
  TESObjectREFR *v21; // ecx
  TESObjectCELL *v22; // eax
  int result; // eax
  int v24; // [esp+10h] [ebp-30h] BYREF
  float v25; // [esp+14h] [ebp-2Ch]
  float v26; // [esp+18h] [ebp-28h]
  int v27; // [esp+1Ch] [ebp-24h] BYREF
  float v28; // [esp+20h] [ebp-20h]
  int v29; // [esp+24h] [ebp-1Ch]
  float v30; // [esp+28h] [ebp-18h]
  float v31; // [esp+2Ch] [ebp-14h]
  float v32; // [esp+30h] [ebp-10h]
  float v33; // [esp+34h] [ebp-Ch]
  float v34; // [esp+38h] [ebp-8h]
  float v35; // [esp+3Ch] [ebp-4h]
  float v36; // [esp+44h] [ebp+4h]

  v2 = (unsigned int)(uGridsToLoad - 1) >> 1;
  v3 = ((int (*)(void))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)();
  v27 = *(int *)v3;
  v28 = *(float *)(v3 + 4);
  v4 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v29 = *(_DWORD *)(v3 + 8);
  ParentCell = TESObjectREFR_GetParentCell(v4);
  sub_4CCE20((ExtraDataList *)ParentCell, (float *)&v27, &v27, COERCE_FLOAT(1));
  if ( sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    v6 = ((int)*(float *)&v27 - 0x800) >> 0xC;
    v7 = (int)v28 - 0x800;
  }
  else
  {
    v6 = (int)*(float *)&v27 >> 0xC;
    v7 = (int)v28;
  }
  v8 = (v6 - v2) << 0xC;
  v9 = ((v7 >> 0xC) - v2) << 0xC;
  if ( sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    v8 += 0x800;
    v9 += 0x800;
  }
  v33 = (float)v8;
  v34 = (float)v9;
  v35 = 0.0;
  v11 = dbl_A37650;
  v12 = *a1 * v11;
  v30 = v33;
  v13 = dbl_A6CC90;
  v33 = Vector3_InitValue_;
  v14 = uGridsToLoad - 1;
  v15 = v13;
  v16 = v12 * v13;
  v17 = v15;
  v32 = 0.0;
  v18 = dword_B3F9B0;
  v33 = v16;
  v19 = *a2;
  v31 = v34;
  v20 = (double)v14;
  v34 = *(&Vector3_InitValue_ + 1);
  v35 = v18;
  if ( v14 < 0 )
    v20 = v20 + flt_A2FC78;
  v21 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v36 = v19 - v20 * dbl_A6CC88;
  v34 = v11 - v17 * v36 * v11;
  *(float *)&v24 = v30 + v33;
  v25 = v31 + v34;
  v26 = v35 + v32;
  v22 = TESObjectREFR_GetParentCell(v21);
  result = sub_4CCE20((ExtraDataList *)v22, (float *)&v24, &v24, 0.0);
  *a1 = *(float *)&v24;
  *a2 = v25;
  return result;
}
