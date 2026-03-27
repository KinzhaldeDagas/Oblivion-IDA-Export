void __thiscall sub_5FA0A0(TESObjectREFR *this, float *a2)
{
  int v2; // edx
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  double v7; // st6
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  hkVector4 v11; // xmm0
  double v12; // st7
  float *v13; // eax
  double v14; // rt0
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v16; // esi
  BSExtraDataVtbl *v17; // eax
  BSExtraDataVtbl *v18; // eax
  TESWaterForm *WaterForm; // eax
  float v20; // [esp+1Ch] [ebp-C8h]
  float v21; // [esp+24h] [ebp-C0h]
  float v22; // [esp+24h] [ebp-C0h]
  float v23; // [esp+28h] [ebp-BCh]
  float v24; // [esp+2Ch] [ebp-B8h]
  float v25; // [esp+30h] [ebp-B4h]
  float v26; // [esp+30h] [ebp-B4h]
  int v27[3]; // [esp+34h] [ebp-B0h] BYREF
  TESObjectREFR v28; // [esp+40h] [ebp-A4h] BYREF
  float v29; // [esp+98h] [ebp-4Ch]
  int v30; // [esp+A4h] [ebp-40h]
  hkVector4 v31; // [esp+B4h] [ebp-30h]
  int v32; // [esp+C4h] [ebp-20h]
  int v33; // [esp+C8h] [ebp-1Ch]
  int v34; // [esp+CCh] [ebp-18h]

  v2 = *((_DWORD *)a2 + 1);
  v27[0] = *(int *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v27[1] = v2;
  v5 = *(_DWORD *)a2;
  v27[2] = v4;
  v23 = *(float *)&v5;
  v24 = a2[1];
  v25 = a2[2];
  v20 = *a2;
  v21 = v25;
  v6 = sub_5E0660(this) * dbl_A3C770;
  v7 = dbl_A46970;
  v8 = v7 < v6;
  v9 = v7 == v6;
  v10 = v7;
  if ( !v8 && !v9 )
    v10 = sub_5E0660(this) * dbl_A3C770;
  v11 = stru_BA7A40;
  v26 = v10 + v25;
  v12 = v21 - flt_B37328;
  LOBYTE(v28.member.pos[2]) = 0;
  v28.member.scale = 0.0;
  v30 = 0;
  v22 = v12;
  v32 = 0;
  v33 = 0;
  v29 = 1.0;
  v34 = 0;
  v31 = v11;
  v13 = (float *)sub_65ABE0(this, &v28);
  v14 = hkFactor;
  v28.member.scale = *v13;
  *(float *)&v28.member.super.type = v23 * v14;
  *(float *)&v28.member.super.flags = v24 * v14;
  *(float *)&v28.member.super.refID = v26 * v14;
  *(_OWORD *)&v28.member.super.modlist.next = *(_OWORD *)&v28.member.super.type;
  v31 = stru_BA7A40;
  *(float *)&v28.member.super.type = v20 * v14;
  *(float *)&v28.member.super.refID = v14 * v22;
  *(_OWORD *)&v28.member.rot.y = *(_OWORD *)&v28.member.super.type;
  ParentCell = TESObjectREFR_GetParentCell(this);
  v16 = ParentCell;
  if ( !ParentCell
    || (!TESObjectCELL_IsInterior(ParentCell)
      ? (v17 = (BSExtraDataVtbl *)bhkWorldM)
      : (v17 = sub_424180(&v16->members.extraData)),
        v17
     && (!TESObjectCELL_IsInterior(v16)
       ? (v18 = (BSExtraDataVtbl *)bhkWorldM)
       : (v18 = sub_424180(&v16->members.extraData)),
         (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, TESForm::ModReferenceList **))v18->Destructor + 0x22))(
           v18,
           &v28.member.super.modlist.next))) )
  {
    sub_5EA270((__m128 *)&v28.member.super.modlist.next, (float *)v27);
    if ( !v16
      || (WaterForm = TESObjectCELL::GetWaterForm(v16)) == 0
      || !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm)
      || !Actor_IsUnderwater__(this, (int)v27, (ExtraDataList *)v16, flt_A34BA0) )
    {
      if ( MobileObject_GetCharProxy((MobileObject *)this) )
        sub_8949C0(v27, 1, 1, 1);
    }
  }
}
