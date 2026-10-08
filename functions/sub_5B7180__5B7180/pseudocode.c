int __stdcall sub_5B7180(float *a1, float *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  PlayerCharacter *v4; // ecx
  ExtraDataList *DwordAtOffset40; // eax
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
  float z; // edx
  double v19; // st5
  double v20; // st4
  PlayerCharacter *v21; // ecx
  ExtraDataList *v22; // eax
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
  float x; // [esp+34h] [ebp-Ch]
  float y; // [esp+38h] [ebp-8h]
  float v35; // [esp+3Ch] [ebp-4h]
  float v36; // [esp+44h] [ebp+4h]

  v2 = (unsigned int)(uGridsToLoad - 1) >> 1; /*0x5b719d*/
  v3 = ((int (*)(void))reference->vtbl->super.super.super.GetPos)(); /*0x5b719f*/
  v27 = *(int *)v3; /*0x5b71a3*/
  v28 = *(float *)(v3 + 4); /*0x5b71b0*/
  v4 = reference; /*0x5b71ba*/
  v29 = *(_DWORD *)(v3 + 8); /*0x5b71c1*/
  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v4); /*0x5b71c5*/
  sub_4CCE20(DwordAtOffset40, (float *)&v27, &v27, COERCE_FLOAT(1)); /*0x5b71cc*/
  if ( sub_4D8B90((TESObjectREFR *)reference) ) /*0x5b71d7*/
  {
    v6 = ((int)*(float *)&v27 - 0x800) >> 0xC; /*0x5b71f2*/
    v7 = (int)v28 - 0x800; /*0x5b7201*/
  }
  else
  {
    v6 = (int)*(float *)&v27 >> 0xC; /*0x5b7215*/
    v7 = (int)v28; /*0x5b7220*/
  }
  v8 = (v6 - v2) << 0xC; /*0x5b7236*/
  v9 = ((v7 >> 0xC) - v2) << 0xC; /*0x5b7239*/
  if ( sub_4D8B90((TESObjectREFR *)reference) ) /*0x5b722d*/
  {
    v8 += 0x800; /*0x5b7240*/
    v9 += 0x800; /*0x5b724e*/
  }
  x = (float)v8; /*0x5b7258*/
  y = (float)v9; /*0x5b727a*/
  v35 = 0.0; /*0x5b7288*/
  v11 = dbl_A37650; /*0x5b7292*/
  v12 = *a1 * v11; /*0x5b729c*/
  v30 = x; /*0x5b729e*/
  v13 = dbl_A6CC90; /*0x5b72a7*/
  x = g_zeroNiPoint3.x; /*0x5b72ad*/
  v14 = uGridsToLoad - 1; /*0x5b72b8*/
  v15 = v13; /*0x5b72bd*/
  v16 = v12 * v13; /*0x5b72bd*/
  v17 = v15; /*0x5b72bd*/
  v32 = 0.0; /*0x5b72bf*/
  z = g_zeroNiPoint3.z; /*0x5b72c3*/
  x = v16; /*0x5b72c9*/
  v19 = *a2; /*0x5b72cd*/
  v31 = y; /*0x5b72cf*/
  v20 = (double)v14; /*0x5b72dd*/
  y = g_zeroNiPoint3.y; /*0x5b72e1*/
  v35 = z; /*0x5b72e5*/
  if ( v14 < 0 ) /*0x5b72e9*/
    v20 = v20 + flt_A2FC78; /*0x5b72eb*/
  v21 = reference; /*0x5b7302*/
  v36 = v19 - v20 * dbl_A6CC88; /*0x5b7309*/
  y = v11 - v17 * v36 * v11; /*0x5b7317*/
  *(float *)&v24 = v30 + x; /*0x5b7323*/
  v25 = v31 + y; /*0x5b732f*/
  v26 = v35 + v32; /*0x5b733b*/
  v22 = (ExtraDataList *)Shared_GetDwordAtOffset40(v21); /*0x5b733f*/
  result = sub_4CCE20(v22, (float *)&v24, &v24, 0.0); /*0x5b7346*/
  *a1 = *(float *)&v24; /*0x5b734f*/
  *a2 = v25; /*0x5b7355*/
  return result; /*0x5b7357*/
}
