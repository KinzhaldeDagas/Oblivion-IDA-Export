void __userpurge SunDamageEffect_Update(int a1@<ecx>, double a2@<st1>, double a3@<st0>, int a4)
{
  int v6; // ecx
  PlayerCharacter *v7; // edi
  TESObjectCELL *DwordAtOffset40; // ebx
  double v9; // st5
  double v10; // st7
  double v11; // st5
  float *v12; // ecx
  double v13; // st5
  Sky *sky; // edi
  unsigned __int8 *firstWeather; // ecx
  unsigned __int8 *secondWeather; // ecx
  double v17; // st5
  double v18; // st2
  double v19; // st3
  double v20; // st5
  double v21; // st5
  float v22; // [esp+4h] [ebp-30h]
  float a; // [esp+8h] [ebp-2Ch]
  float ba; // [esp+Ch] [ebp-28h]
  int b; // [esp+Ch] [ebp-28h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+1Ch] [ebp-18h]
  float v28; // [esp+1Ch] [ebp-18h]
  float weatherPercent; // [esp+20h] [ebp-14h]
  float v30; // [esp+20h] [ebp-14h]
  double v31; // [esp+20h] [ebp-14h]
  float v32; // [esp+28h] [ebp-Ch]
  float v33; // [esp+28h] [ebp-Ch]
  float v34; // [esp+2Ch] [ebp-8h]
  double v35; // [esp+2Ch] [ebp-8h]
  float v36; // [esp+2Ch] [ebp-8h]
  float v37; // [esp+2Ch] [ebp-8h]
  float v38; // [esp+2Ch] [ebp-8h]
  float v39; // [esp+2Ch] [ebp-8h]
  float v40; // [esp+2Ch] [ebp-8h]
  float v41; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+2Ch] [ebp-8h]
  float v43; // [esp+2Ch] [ebp-8h]
  float v44; // [esp+2Ch] [ebp-8h]
  float v45; // [esp+38h] [ebp+4h]
  float v46; // [esp+38h] [ebp+4h]
  float v47; // [esp+38h] [ebp+4h]
  float v48; // [esp+38h] [ebp+4h]
  float v49; // [esp+38h] [ebp+4h]

  if ( *(_BYTE *)(a1 + 0x3D) ) /*0x6a6de6*/
  {
    *(_BYTE *)(a1 + 0x3D) = 0; /*0x6a6dec*/
    return; /*0x6a6df4*/
  }
  v6 = *(_DWORD *)(a1 + 0x20); /*0x6a6df7*/
  if ( !v6 || !(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v6 + 4))(v6, a3, a2) ) /*0x6a6e07*/
  {
    SunDamageEffect_Update_::Done(a4); /*0x6a6dfc*/
    return; /*0x6a6dfc*/
  }
  v7 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20)); /*0x6a6e1d*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x6a6e28*/
  if ( !sub_4D8B90((TESObjectREFR *)v7) || DwordAtOffset40 && TESObjectCELL_HasFlag80(DwordAtOffset40) ) /*0x6a6e3d*/
  {
    v32 = sub_6A6AF0((float *)a1); /*0x6a6f5b*/
    v10 = flt_A34BA0; /*0x6a6f5f*/
    sub_6A6920((unsigned int *)a1, v10 < v32); /*0x6a6f79*/
    if ( v7 != reference ) /*0x6a6f86*/
    {
LABEL_36:
      SunDamageEffect_Update_::Done_(a4); /*0x6a6f86*/
      return; /*0x6a6f86*/
    }
    if ( v32 <= (double)flt_A34BA0 ) /*0x6a6fa1*/
    {
      v13 = 0.0; /*0x6a7027*/
LABEL_22:
      sky = MEMORY[0xB333A0]->sky; /*0x6a7029*/
      firstWeather = (unsigned __int8 *)sky->firstWeather; /*0x6a7031*/
      if ( firstWeather ) /*0x6a7036*/
      {
        ba = v13; /*0x6a703b*/
        v13 = sub_499100(firstWeather, 5, 1.0, ba); /*0x6a7046*/
      }
      secondWeather = (unsigned __int8 *)sky->secondWeather; /*0x6a704b*/
      v27 = v13; /*0x6a704e*/
      v17 = 1.0; /*0x6a7054*/
      if ( secondWeather ) /*0x6a7056*/
      {
        weatherPercent = sky->weatherPercent; /*0x6a7063*/
        v18 = sub_499100(secondWeather, 5, 1.0, 0.0); /*0x6a7085*/
        v17 = 1.0; /*0x6a7085*/
        v19 = (1.0 - weatherPercent) * v18; /*0x6a7087*/
        v30 = weatherPercent * v27; /*0x6a7091*/
        v27 = v19 + v30; /*0x6a7099*/
      }
      v28 = v17 + (flt_B37ED0[0x3A] - v17) * v27; /*0x6a70ab*/
      if ( v28 <= (double)*(float *)(a1 + 0x38) ) /*0x6a70bf*/
      {
        if ( *(float *)(a1 + 0x38) <= (double)v28 ) /*0x6a7178*/
        {
          SunDamageEffect_Update_::Done_(a4); /*0x6a7178*/
          return; /*0x6a7178*/
        }
        v31 = *(float *)(a1 + 0x38); /*0x6a7186*/
        v41 = v31 - *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x3E]) * v34; /*0x6a719c*/
        v42 = Min_Float(v28, v41); /*0x6a71b4*/
        v20 = v42; /*0x6a71bb*/
        *(float *)(a1 + 0x38) = v42; /*0x6a71bf*/
        if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x6a71c2*/
        {
LABEL_28:
          v38 = v20 / kFaceGenVariationScale1_5; /*0x6a710c*/
          flt_B2C7A4 = Min_Float(1.0, v38); /*0x6a712b*/
          return; /*0x6a713a*/
        }
        b = dword_B06D54; /*0x6a720a*/
        v43 = v20 * flt_B06D64; /*0x6a720e*/
        a = v43; /*0x6a7216*/
        v44 = v20 * flt_B06D5C; /*0x6a7220*/
        v21 = v44; /*0x6a7224*/
      }
      else
      {
        v36 = v34 * *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x3C]) + *(float *)(a1 + 0x38); /*0x6a70dd*/
        v37 = Float_Min(v28, v36); /*0x6a70f5*/
        v20 = v37; /*0x6a70fc*/
        *(float *)(a1 + 0x38) = v37; /*0x6a7100*/
        if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x6a7103*/
          goto LABEL_28; /*0x6a710a*/
        b = dword_B06D54; /*0x6a714b*/
        v39 = v20 * flt_B06D64; /*0x6a714f*/
        a = v39; /*0x6a7157*/
        v40 = v20 * flt_B06D5C; /*0x6a7161*/
        v21 = v40; /*0x6a7165*/
      }
      v22 = v21; /*0x6a722e*/
      sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, v22, a, b); /*0x6a7242*/
      SunDamageEffect_Update_::Done_(a4); /*0x6a7248*/
      return; /*0x6a7248*/
    }
    v33 = v32 * *(float *)&a4; /*0x6a6fbc*/
    ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD))reference->vtbl->super.ApplyDamage)( /*0x6a6fc7*/
      reference,
      LODWORD(v33),
      0.0,
      0);
    v11 = flt_B15EB0; /*0x6a6fd5*/
    if ( v11 >= 0.0 ) /*0x6a6fda*/
    {
      if ( v11 != dbl_A3A5B0 ) /*0x6a6fff*/
      {
LABEL_20:
        flt_B15EB0 = flt_B15EB0 - v34; /*0x6a7013*/
        v13 = 0.0; /*0x6a7023*/
        goto LABEL_22; /*0x6a7025*/
      }
      v12 = &flt_B37ED0[0x42]; /*0x6a7001*/
    }
    else
    {
      Actor_PlayPainFX((TESObjectREFR *)reference, v11, v10, a2, (int *)1, 1); /*0x6a6fe8*/
      v12 = &flt_B37ED0[0x40]; /*0x6a6fed*/
    }
    flt_B15EB0 = *GameSetting_GetSafeFloatPointer(v12); /*0x6a700d*/
    goto LABEL_20; /*0x6a700d*/
  }
  sub_6A6920((unsigned int *)a1, 0); /*0x6a6e4e*/
  if ( v7 != reference ) /*0x6a6e59*/
    goto LABEL_36; /*0x6a6e59*/
  flt_B15EB0 = *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x42]); /*0x6a6e6b*/
  if ( *(float *)(a1 + 0x38) <= 1.0 ) /*0x6a6e7b*/
    goto LABEL_36; /*0x6a6e7b*/
  v35 = *(float *)(a1 + 0x38); /*0x6a6e89*/
  v45 = v35 - *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x3E]) * *(float *)&a4; /*0x6a6e9f*/
  v46 = Min_Float(1.0, v45); /*0x6a6eb5*/
  v9 = v46; /*0x6a6eb9*/
  *(float *)(a1 + 0x38) = v46; /*0x6a6ec0*/
  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x6a6ec3*/
  {
    v47 = v9 / kFaceGenVariationScale1_5; /*0x6a6ed5*/
    flt_B2C7A4 = Min_Float(1.0, v47); /*0x6a6eeb*/
  }
  else
  {
    v48 = v9 * flt_B06D64; /*0x6a6f17*/
    v26 = v48; /*0x6a6f22*/
    v49 = v9 * flt_B06D5C; /*0x6a6f2c*/
    sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, v49, v26, dword_B06D54); /*0x6a6f43*/
  }
}
