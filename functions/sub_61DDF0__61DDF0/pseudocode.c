// Computes aim pitch/yaw to target. In ranged weapon/spell modes uses projectile speed/gravity and motion lead; writes pitch through out pointer and returns yaw normalized to roughly [-pi,pi].
double __cdecl Actor_CalculateAimAnglesToTarget(TESObjectREFR *a1, int a2, float *a3, int a4)
{
  char v5; // bl
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  void **v9; // eax
  EffectSetting *FXEffect; // eax
  double projSpeed; // st7
  void *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  EffectSetting *v15; // eax
  double v16; // st7
  void *v17; // eax
  float *v18; // eax
  double v19; // st7
  double result; // st7
  float *v21; // edi
  float *v22; // eax
  double v23; // st6
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+20h] [ebp-14h]
  int v27[2]; // [esp+28h] [ebp-Ch] BYREF
  float v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]
  float v30; // [esp+38h] [ebp+4h]
  float v31; // [esp+38h] [ebp+4h]
  float v32; // [esp+38h] [ebp+4h]
  float v33; // [esp+38h] [ebp+4h]
  float v34; // [esp+38h] [ebp+4h]
  float v35; // [esp+38h] [ebp+4h]
  int v36; // [esp+38h] [ebp+4h]
  int v39; // [esp+40h] [ebp+Ch]
  float v40; // [esp+40h] [ebp+Ch]

  *a3 = 0.0; /*0x61ddf9*/
  if ( !a1 || !a2 || !((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) ) /*0x61de1d*/
    return 0.0; /*0x61e0e6*/
  v5 = 0; /*0x61de37*/
  v6 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))( /*0x61de40*/
         a1[1].vtbl,
         1);
  if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x4F))(a1[1].vtbl) ) /*0x61de48*/
    v7 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3B))( /*0x61de5d*/
           a1[1].vtbl,
           1);
  else
    v7 = 0; /*0x61de61*/
  a1->vtbl[1].IsMobileObject(a1); /*0x61de6d*/
  v8 = *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) + 0x70); /*0x61de7b*/
  if ( v8 == 2 || v8 == 4 ) /*0x61de86*/
  {
    v24 = 0.0; /*0x61de96*/
    *(float *)&v29 = 0.0; /*0x61de9c*/
    if ( *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) + 0x70) == 4 ) /*0x61dea6*/
    {
      v9 = *(void ***)(((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) + 0x80); /*0x61deb4*/
      if ( v9 && (FXEffect = MagicItem_GetFXEffect(*v9, 2u)) != 0 ) /*0x61dec9*/
        projSpeed = FXEffect->projSpeed; /*0x61decb*/
      else
        projSpeed = 1.0; /*0x61ded0*/
      v30 = projSpeed; /*0x61ded7*/
      v5 = 1; /*0x61dee6*/
      v24 = v30 * *GameSetting_GetSafeFloatPointer(&flt_B37ED0[6]);// Ranged spell projectile speed = strongest target FX EffectSetting.projSpeed * live fMagicProjectileBaseSpeed (default 1000). /*0x61dee8*/
      *(float *)&v29 = 0.0; /*0x61deee*/
    }
    if ( v7 ) /*0x61def4*/
    {
      v12 = *(void **)(v7 + 8); /*0x61def6*/
      if ( v12 ) /*0x61defb*/
      {
        v13 = OblivionDynamicCast( /*0x61df0c*/
                v12,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        if ( v13 ) /*0x61df16*/
          v14 = v13[1]; /*0x61df18*/
        else
          v14 = 0; /*0x61df1d*/
        if ( v14 && (v15 = MagicItem_GetFXEffect((void *)(v14 + 0x18), 2u)) != 0 ) /*0x61df2f*/
          v16 = v15->projSpeed; /*0x61df31*/
        else
          v16 = 1.0; /*0x61df36*/
        v31 = v16; /*0x61df3d*/
        v25 = v31 * *GameSetting_GetSafeFloatPointer(&flt_B37ED0[6]); /*0x61df4c*/
        Combat_CalculatePredictedAimAngles((int)v27, (int)a1, a2, v25, 0.0, a4); /*0x61df56*/
        goto LABEL_33; /*0x61df56*/
      }
    }
    if ( v6 ) /*0x61df5a*/
    {
      v17 = *(void **)(v6 + 8); /*0x61df5c*/
      if ( v17 ) /*0x61df61*/
      {
        v18 = (float *)OblivionDynamicCast( /*0x61df72*/
                         v17,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESAmmo `RTTI Type Descriptor',
                         0);
        if ( v18 ) /*0x61df7c*/
          v19 = v18[0x1F]; /*0x61df7e*/
        else
          v19 = 1.0; /*0x61df83*/
        v32 = v19; /*0x61df8a*/
        v26 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xDA]) * v32;// Ordinary arrow projectile speed = live fArrowSpeedMult (default 1500) * equipped TESAmmo.speed. /*0x61df9a*/
        v33 = Actor_CalculateArrowGravity((MobileObject *)a1); /*0x61dfa3*/
        Combat_CalculatePredictedAimAngles((int)v27, (int)a1, a2, v26, v33, a4); /*0x61dfaa*/
        goto LABEL_33; /*0x61dfaa*/
      }
    }
    if ( v5 ) /*0x61dfae*/
    {
      Combat_CalculatePredictedAimAngles((int)v27, (int)a1, a2, v24, *(float *)&v29, a4); /*0x61dfd2*/
LABEL_33:
      v34 = v28; /*0x61dfd7*/
      *a3 = *(float *)v27; /*0x61dfeb*/
      return v34; /*0x61dff7*/
    }
  }
  v21 = a1->vtbl->GetPos(a1);                   // Non-predictive fallback subtracts target GetPos from shooter GetPos, normalizes the 3D vector, then derives heading relative to shooter rotation. /*0x61e00a*/
  v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x61e012*/
  *(float *)&v39 = v22[1] - v21[1]; /*0x61e01e*/
  v35 = v22[2] - v21[2]; /*0x61e028*/
  *(float *)v27 = *v22 - *v21; /*0x61e030*/
  v27[1] = v39; /*0x61e038*/
  v28 = v35; /*0x61e040*/
  Vector3_NormalizeInPlace((float *)v27); /*0x61e044*/
  v40 = Vector3_CalculateHeadingRadiansXY((float *)v27); /*0x61e055*/
  *(float *)&v36 = v40 - ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1); /*0x61e074*/
  v23 = *(float *)&v36; /*0x61e084*/
  if ( *(float *)&v36 == 0.0 ) /*0x61e089*/
    return *(float *)&v36; /*0x61e0dc*/
  result = *(float *)&v36; /*0x61e08f*/
  if ( v23 >= 0.0 ) /*0x61e094*/
  {
    if ( v23 > dbl_A3D5B8 ) /*0x61e0c4*/
      return (float)(dbl_A3D5B0 - v23); /*0x61e0d4*/
  }
  else if ( v23 <= dbl_A491E0 ) /*0x61e0a1*/
  {
    return (float)(v23 + dbl_A3D5B0); /*0x61e0b1*/
  }
  return result; /*0x61dff3*/
}
