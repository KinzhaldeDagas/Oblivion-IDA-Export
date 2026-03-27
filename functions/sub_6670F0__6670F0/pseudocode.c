char __thiscall sub_6670F0(MobileObject *this, int a2)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  double v8; // st6
  PlayerCharacter *v9; // ecx
  double v10; // st7
  _DWORD *v11; // ecx
  _WORD *v12; // ecx
  float *v13; // ecx
  float v14; // edx
  int v15; // ecx
  double v16; // st7
  _WORD *v17; // ecx
  double v18; // rt0
  float *v19; // ecx
  float v20; // edx
  int v21; // ecx
  double v22; // st7
  _WORD *v23; // ecx
  float *v24; // ecx
  float v25; // edx
  int v26; // ecx
  bhkCharacterProxy *CharProxy; // eax
  float v28; // [esp+8h] [ebp-44h]
  float v29; // [esp+Ch] [ebp-40h]
  float v30; // [esp+10h] [ebp-3Ch] BYREF
  float v31; // [esp+14h] [ebp-38h]
  float v32; // [esp+18h] [ebp-34h]
  float v33; // [esp+1Ch] [ebp-30h]
  float v34; // [esp+20h] [ebp-2Ch]
  float v35; // [esp+24h] [ebp-28h]
  float v36; // [esp+28h] [ebp-24h]
  float v37; // [esp+2Ch] [ebp-20h]
  float v38; // [esp+30h] [ebp-1Ch]
  float v39; // [esp+34h] [ebp-18h] BYREF
  float v40; // [esp+38h] [ebp-14h]
  float v41; // [esp+3Ch] [ebp-10h]
  float v42[3]; // [esp+40h] [ebp-Ch] BYREF
  float v43; // [esp+50h] [ebp+4h]
  float v44; // [esp+50h] [ebp+4h]
  float v45; // [esp+50h] [ebp+4h]

  if ( !a2 )
    return 0;
  if ( !dword_B3BB88 )
  {
    dword_B3BB88 = (int)word_B3BB4C;
    byte_B3BB5C = 0;
    byte_B3BB79 = 1;
  }
  v4 = this->vtbl->super.GetPos((TESObjectREFR *)this);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v30 = 0.0;
  v8 = flt_A2F930;
  v33 = v5;
  v9 = TESDataHandler_g_PlayerRef;
  v31 = v8;
  v34 = v6;
  v32 = 0.0;
  v35 = v7;
  v10 = sub_5E0660(v9);
  v11 = (_DWORD *)dword_B3BB88;
  v35 = v10 * dbl_A3C770 + v35;
  sub_441920(v11, a2);
  v12 = (_WORD *)dword_B3BB88;
  v39 = (float)0.0 + v33;
  v40 = v34 + v31;
  v41 = (float)0.0 + v35;
  if ( sub_959D60(v12, &v39, &v30, 0) )
  {
    v13 = **(float ***)(dword_B3BB88 + 0x1C);
    v14 = v13[0xA];
    v37 = v13[0xB];
    v36 = v14;
    v38 = v13[0xC];
    v43 = v37 * v31 + v30 * v14 + v38 * v32;
    if ( v43 > (double)*(float *)&SrcStr )
    {
      v15 = *(_DWORD *)(*(_DWORD *)v13 + 0x1C);
      if ( !v15 || (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15) != dword_B3FD4C )
        return 1;
    }
  }
  v36 = flt_A2F930;
  v16 = flt_A7386C;
  v30 = v36;
  v37 = v16;
  v38 = 0.0;
  v31 = v37;
  v17 = (_WORD *)dword_B3BB88;
  v18 = dbl_A2F920;
  v32 = 0.0;
  v42[0] = v33 + v18;
  v44 = v34 - v18;
  v42[1] = v44;
  v28 = v35 + dbl_A2FC68;
  v42[2] = v28;
  if ( sub_959D60(v17, v42, &v30, 0) )
  {
    v19 = **(float ***)(dword_B3BB88 + 0x1C);
    v20 = v19[0xA];
    v37 = v19[0xB];
    v36 = v20;
    v38 = v19[0xC];
    v29 = v37 * v31 + v20 * v30 + v38 * v32;
    if ( v29 > (double)*(float *)&SrcStr )
    {
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 0x1C);
      if ( !v21 || (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 4))(v21) != dword_B3FD4C )
        return 1;
    }
  }
  v36 = flt_A7386C;
  v37 = v36;
  v30 = v36;
  v38 = 0.0;
  v22 = v33 - dbl_A2F920;
  v31 = v36;
  v23 = (_WORD *)dword_B3BB88;
  v39 = v22;
  v32 = 0.0;
  v40 = v44;
  v41 = v28;
  if ( sub_959D60(v23, &v39, &v30, 0) )
  {
    v24 = **(float ***)(dword_B3BB88 + 0x1C);
    v25 = v24[0xA];
    v37 = v24[0xB];
    v36 = v25;
    v38 = v24[0xC];
    v45 = v37 * v31 + v25 * v30 + v38 * v32;
    if ( v45 > (double)*(float *)&SrcStr )
    {
      v26 = *(_DWORD *)(*(_DWORD *)v24 + 0x1C);
      if ( !v26 || (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 4))(v26) != dword_B3FD4C )
        return 1;
    }
  }
  CharProxy = MobileObject_GetCharProxy(this);
  return sub_892D90((__m128 *)CharProxy);
}
