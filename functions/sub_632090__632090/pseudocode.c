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
  int v30; // [esp+50h] [ebp+4h]
  int v31; // [esp+50h] [ebp+4h]
  float v32; // [esp+50h] [ebp+4h]
  float v33; // [esp+54h] [ebp+8h]

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1);
  if ( result )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8)
      && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8) + 4) == 0x22
      && (v5 = *(_DWORD *)((*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xF4))(this, 1) + 8)) != 0 )
    {
      v6 = *(float *)(v5 + 0x7C);
    }
    else
    {
      v6 = 1.0;
    }
    v14 = v6;
    v15 = v14 * flt_B37040;
    v16 = sub_608280(a2);
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3);
    v22 = v9[1];
    v21 = *v9;
    v23 = v9[2];
    v10 = a2->vtbl->super.GetPos((TESObjectREFR *)a2);
    v17 = *v10;
    v18 = v10[1];
    v19 = v10[2];
    v20 = sub_5E0660(a2) * dbl_A31C70 + v19;
    v24 = v21 - v17;
    v25 = v22 - v18;
    v26 = v23 - v20;
    v27 = v25 * v25 + v24 * v24 + 0.0 * 0.0;
    v28 = sqrt(v27);
    v33 = sub_6132D0(v28, v26, v15, v16);
    sub_613410(v28, v33, v15);
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3);
    v29 = -v33;
    *(float *)&v30 = v29 - sub_4A9720((Actor *)a2);
    v11 = ((int (__thiscall *)(MobileObject *, int))a2->vtbl[1].super.super.Unk_20)(a2, 0x1C);
    v12 = v11;
    if ( v11 >= 5 )
    {
      if ( v11 > 0x64 )
        v12 = 0x64;
    }
    else
    {
      v12 = 5;
    }
    *(float *)&v31 = (double)(GetRandomLargeInteger_(0) % (0x69 - v12) / 0xA) * dbl_A31C78 + *(float *)&v30;
    v13 = *(float *)&v31;
    if ( *(float *)&v31 != 0.0 )
    {
      if ( v13 > dbl_A491E0 )
      {
        if ( v13 > dbl_A3D5B8 )
          *(float *)&v31 = v13 + dbl_A3D5B0;
      }
      else
      {
        *(float *)&v31 = dbl_A3D5B0 - v13;
      }
    }
    v32 = sub_4A9720((Actor *)a2) + *(float *)&v31;
    return sub_65A650((TESObjectREFR *)a2, v32);
  }
  return result;
}
