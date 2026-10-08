int __thiscall sub_632090(void *this, MobileObject *a2, int a3)
{
  int result; // eax
  int v5; // eax
  double v6; // st7
  float *v9; // eax
  float *v10; // eax
  int v11; // eax
  int v12; // edi
  double v13; // st7
  float v14; // [esp+20h] [ebp-2Ch]
  float v15; // [esp+20h] [ebp-2Ch]
  float v16; // [esp+24h] [ebp-28h]
  float v17; // [esp+28h] [ebp-24h]
  float v18; // [esp+2Ch] [ebp-20h]
  float v19; // [esp+30h] [ebp-1Ch]
  float v20; // [esp+30h] [ebp-1Ch]
  float v21; // [esp+34h] [ebp-18h]
  float v22; // [esp+38h] [ebp-14h]
  float v23; // [esp+3Ch] [ebp-10h]
  float v24; // [esp+40h] [ebp-Ch]
  float v25; // [esp+44h] [ebp-8h]
  float v26; // [esp+48h] [ebp-4h]
  float v27; // [esp+50h] [ebp+4h]
  float v28; // [esp+50h] [ebp+4h]
  float v29; // [esp+50h] [ebp+4h]
  float v30; // [esp+50h] [ebp+4h]
  float v31; // [esp+50h] [ebp+4h]
  float v32; // [esp+50h] [ebp+4h]
  float v33; // [esp+54h] [ebp+8h]

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1); /*0x6320a0*/
  if ( result ) /*0x6320a4*/
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8) /*0x6320e8*/
      && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8) + 4) == 0x22
      && (v5 = *(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8)) != 0 )
    {
      v6 = *(float *)(v5 + 0x7C); /*0x6320ea*/
    }
    else
    {
      v6 = 1.0; /*0x6320ef*/
    }
    v14 = v6; /*0x6320f5*/
    v15 = v14 * g_GameSettingStringPointers_B36CD8[0xDA]; /*0x632105*/
    v16 = Actor_CalculateArrowGravity(a2); /*0x632112*/
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3); /*0x632123*/
    v22 = v9[1]; /*0x63212d*/
    v21 = *v9; /*0x632133*/
    v23 = v9[2]; /*0x632137*/
    v10 = a2->vtbl->super.GetPos(a2); /*0x632143*/
    v17 = *v10; /*0x63214d*/
    v18 = v10[1]; /*0x632153*/
    v19 = v10[2]; /*0x632157*/
    v20 = Actor_GetScaledCollisionHeight(a2) * dbl_A31C70 + v19; /*0x63216a*/
    v24 = v21 - v17; /*0x632176*/
    v25 = v22 - v18; /*0x632182*/
    v26 = v23 - v20; /*0x63218e*/
    v27 = v25 * v25 + v24 * v24 + 0.0 * 0.0; /*0x6321a8*/
    v28 = sqrt(v27); /*0x6321b5*/
    v33 = Combat_CalculateBallisticPitch(v28, v26, v15, v16); /*0x6321e8*/
    sub_613410(v28, v33, v15); /*0x632206*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3); /*0x63221a*/
    v29 = -v33; /*0x632224*/
    v30 = v29 - Actor_GetAimPitch((Actor *)a2); /*0x63223d*/
    v11 = ((int (__thiscall *)(MobileObject *, int))a2->vtbl[1].super.super.Unk_20)(a2, 0x1C); /*0x632241*/
    v12 = v11; /*0x632243*/
    if ( v11 >= 5 ) /*0x632248*/
    {
      if ( v11 > 0x64 ) /*0x632254*/
        v12 = 0x64; /*0x632256*/
    }
    else
    {
      v12 = 5; /*0x63224a*/
    }
    v31 = (double)(Game_RandomLargeInteger(0) % (0x69 - v12) / 0xA) * dbl_A31C78 + v30; /*0x632293*/
    v13 = v31; /*0x6322a1*/
    if ( v31 != 0.0 ) /*0x6322a6*/
    {
      if ( v13 > dbl_A491E0 ) /*0x6322b3*/
      {
        if ( v13 > dbl_A3D5B8 ) /*0x6322cc*/
          v31 = v13 + dbl_A3D5B0; /*0x6322d4*/
      }
      else
      {
        v31 = dbl_A3D5B0 - v13; /*0x6322bb*/
      }
    }
    v32 = Actor_GetAimPitch((Actor *)a2) + v31; /*0x6322ea*/
    return sub_65A650((TESObjectREFR *)a2, v32); /*0x6322f5*/
  }
  return result; /*0x6322fa*/
}
