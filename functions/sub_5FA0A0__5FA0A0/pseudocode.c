void __thiscall sub_5FA0A0(TESObjectREFR *this, float *a2)
{
  float v2; // edx
  float v4; // ecx
  float v5; // edx
  double v6; // st7
  double v7; // st6
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  hkVector4 v11; // xmm0
  double v12; // st7
  float *CollisionFilterInfo; // eax
  double v14; // rt0
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v16; // esi
  BSExtraDataVtbl *v17; // eax
  BSExtraDataVtbl *v18; // eax
  TESWaterForm *WaterForm; // eax
  bhkCharacterProxy *CharProxy; // eax
  float v21; // [esp+1Ch] [ebp-C8h]
  float v22; // [esp+24h] [ebp-C0h]
  float v23; // [esp+24h] [ebp-C0h]
  float v24; // [esp+28h] [ebp-BCh]
  float v25; // [esp+2Ch] [ebp-B8h]
  float v26; // [esp+30h] [ebp-B4h]
  float v27; // [esp+30h] [ebp-B4h]
  NiPoint3 v28; // [esp+34h] [ebp-B0h] BYREF
  TESObjectREFR v29; // [esp+40h] [ebp-A4h] BYREF
  float v30; // [esp+98h] [ebp-4Ch]
  int v31; // [esp+A4h] [ebp-40h]
  hkVector4 v32; // [esp+B4h] [ebp-30h]
  int v33; // [esp+C4h] [ebp-20h]
  int v34; // [esp+C8h] [ebp-1Ch]
  int v35; // [esp+CCh] [ebp-18h]

  v2 = a2[1]; /*0x5fa0bd*/
  v28.x = *a2; /*0x5fa0c7*/
  v4 = a2[2]; /*0x5fa0cb*/
  v28.y = v2; /*0x5fa0ce*/
  v5 = *a2; /*0x5fa0d2*/
  v28.z = v4; /*0x5fa0d4*/
  v24 = v5; /*0x5fa0db*/
  v25 = a2[1]; /*0x5fa0e2*/
  v26 = a2[2]; /*0x5fa0e8*/
  v21 = *a2; /*0x5fa0f2*/
  v22 = v26; /*0x5fa0fc*/
  v6 = Actor_GetScaledCollisionHeight(this) * dbl_A3C770; /*0x5fa105*/
  v7 = dbl_A46970; /*0x5fa10b*/
  v8 = v7 < v6; /*0x5fa111*/
  v9 = v7 == v6; /*0x5fa111*/
  v10 = v7; /*0x5fa115*/
  if ( !v8 && !v9 ) /*0x5fa117*/
    v10 = Actor_GetScaledCollisionHeight(this) * dbl_A3C770; /*0x5fa125*/
  v11 = unk_BA7A40; /*0x5fa12f*/
  v27 = v10 + v26; /*0x5fa13c*/
  v12 = v22 - unk_B37328; /*0x5fa147*/
  LOBYTE(v29.member.pos[2]) = 0; /*0x5fa14d*/
  v29.member.scale = 0.0; /*0x5fa151*/
  v31 = 0; /*0x5fa155*/
  v23 = v12; /*0x5fa15c*/
  v33 = 0; /*0x5fa160*/
  v34 = 0; /*0x5fa169*/
  v30 = 1.0; /*0x5fa170*/
  v35 = 0; /*0x5fa177*/
  v32 = v11; /*0x5fa17e*/
  CollisionFilterInfo = (float *)MobileObject_GetCollisionFilterInfo((MobileObject *)this, &v29); /*0x5fa186*/
  v14 = hkFactor; /*0x5fa19b*/
  v29.member.scale = *CollisionFilterInfo; /*0x5fa19d*/
  *(float *)&v29.member.super.type = v24 * v14; /*0x5fa1a1*/
  *(float *)&v29.member.super.flags = v25 * v14; /*0x5fa1ab*/
  *(float *)&v29.member.super.refID = v27 * v14; /*0x5fa1b5*/
  *(_OWORD *)&v29.member.super.modlist.next = *(_OWORD *)&v29.member.super.type; /*0x5fa1c2*/
  v32 = unk_BA7A40; /*0x5fa1d0*/
  *(float *)&v29.member.super.type = v21 * v14; /*0x5fa1d8*/
  *(float *)&v29.member.super.refID = v14 * v23; /*0x5fa1ea*/
  *(_OWORD *)&v29.member.rot.y = *(_OWORD *)&v29.member.super.type; /*0x5fa1f3*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5fa1f8*/
  v16 = DwordAtOffset40; /*0x5fa1fd*/
  if ( !DwordAtOffset40
    || (!TESObjectCELL_IsInterior(DwordAtOffset40)
      ? (v17 = (BSExtraDataVtbl *)MEMORY[0xB35C24])
      : (v17 = sub_424180(&v16->members.extraData)),
        v17
     && (!TESObjectCELL_IsInterior(v16)
       ? (v18 = (BSExtraDataVtbl *)MEMORY[0xB35C24])
       : (v18 = sub_424180(&v16->members.extraData)),
         (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, TESForm::ModReferenceList **))v18->Destructor + 0x22))(
           v18,
           &v29.member.super.modlist.next))) )
  {
    sub_5EA270((__m128 *)&v29.member.super.modlist.next, &v28.x); /*0x5fa272*/
    if ( !v16 /*0x5fa2a8*/
      || (WaterForm = TESObjectCELL::GetWaterForm(v16)) == 0
      || !((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm)
      || !Actor_IsUnderwater__(this, (int)&v28, (ExtraDataList *)v16, flt_A34BA0) )
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x5fa2b3*/
      if ( CharProxy ) /*0x5fa2ba*/
        sub_8949C0((__m128 *)CharProxy, &v28, 1, 1, 1); /*0x5fa2c9*/
    }
  }
}
