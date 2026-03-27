bool __usercall sub_6163A0@<al>(int a1@<ecx>, char a2@<dil>)
{
  float v2; // eax
  float v3; // edx
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  float *v8; // eax
  int *v9; // edi
  TESObjectREFR *v10; // eax
  bool v11; // al
  float *v12; // ecx
  double v13; // st7
  float *v14; // eax
  float v17; // [esp+4h] [ebp-30h]
  float v18; // [esp+4h] [ebp-30h]
  float v19; // [esp+8h] [ebp-2Ch]
  float v20; // [esp+8h] [ebp-2Ch]
  float v21; // [esp+8h] [ebp-2Ch]
  float v22; // [esp+Ch] [ebp-28h]
  float v23; // [esp+10h] [ebp-24h] BYREF
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+18h] [ebp-1Ch]
  float v26; // [esp+1Ch] [ebp-18h] BYREF
  float v27; // [esp+20h] [ebp-14h]
  float v28; // [esp+24h] [ebp-10h]
  float v29; // [esp+28h] [ebp-Ch]
  float v30; // [esp+2Ch] [ebp-8h]
  float v31; // [esp+30h] [ebp-4h]

  v2 = Vector3_InitValue_;
  v3 = dword_B3F9B0;
  v24 = *(&Vector3_InitValue_ + 1);
  v23 = v2;
  v25 = v3;
  if ( !sub_6135F0(a1) )
    return 0;
  v5 = (_DWORD *)sub_6135F0(a1);
  if ( !sub_5E05B0(v5) )
    return 0;
  v6 = sub_6135F0(a1);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 0x1D0))(v6, &v23);
  v25 = 0.0;
  v7 = sub_6135F0(a1);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x174))(v7);
  v17 = v8[1] + v24;
  v19 = v8[2] + v25;
  v26 = *v8 + v23;
  v27 = v17;
  v28 = v19;
  if ( *(float *)(a1 + 0x184) < 0.0 )
  {
    v9 = *(int **)(a1 + 0x3C);
    v10 = (TESObjectREFR *)sub_6135F0(a1);
    *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v9, (TESObjectREFR *)v9, v10, 0, a2);
  }
  v22 = *(float *)(a1 + 0x184);
  v11 = sub_5E05B0(*(_DWORD **)(a1 + 0x3C));
  v12 = *(float **)(a1 + 0x3C);
  if ( v11 )
  {
    v14 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v12 + 0x174))(v12);
    v29 = *v14 - v26;
    v30 = v14[1] - v27;
    v31 = v14[2] - v28;
    v20 = v30 * v30 + v29 * v29 + v31 * v31;
    v21 = sqrt(v20);
    v13 = v21;
  }
  else
  {
    v13 = sub_4D7E30(v12, &v26);
  }
  v18 = v13;
  return v22 <= (double)v18;
}
