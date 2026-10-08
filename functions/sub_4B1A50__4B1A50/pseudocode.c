// Oblivion native attached-point-light animation. lightFlags_7C bits 0x08/0x40 select Flicker/Flicker Slow and bits 0x80/0x100 select Pulse/Pulse Slow; the slow variants reduce the update step. It updates NiLight position and m_fDimmer using AttachedLightPayload_Decoded::targetDimmer_04 and TESObjectLIGH::fade_88. This is source-light state animation, not shadow-caster admission.
bool __thiscall TESObjectLIGH_UpdateAttachedLightState(
        TESObjectLIGH_DecodedLayout *self,
        NiLight *light,
        float *targetDimmer,
        void *optionalContext)
{
  unsigned int lightFlags_7C; // ecx
  bool v7; // bl
  double v9; // st5
  double v10; // st5
  double v11; // st6
  unsigned int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float v21; // [esp+1Ch] [ebp-38h]
  double v22; // [esp+1Ch] [ebp-38h]
  float v23; // [esp+24h] [ebp-30h]
  NiAVObjectVtbl *vtbl; // [esp+24h] [ebp-30h]
  float v25; // [esp+24h] [ebp-30h]
  float v26; // [esp+24h] [ebp-30h]
  float v27; // [esp+24h] [ebp-30h]
  float v28; // [esp+28h] [ebp-2Ch]
  float v29; // [esp+28h] [ebp-2Ch]
  double v30; // [esp+2Ch] [ebp-28h]
  double v31; // [esp+34h] [ebp-20h]
  float v32; // [esp+58h] [ebp+4h]
  float v33; // [esp+58h] [ebp+4h]
  float v34; // [esp+58h] [ebp+4h]
  float v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+58h] [ebp+4h]
  float v37; // [esp+58h] [ebp+4h]
  float v38; // [esp+58h] [ebp+4h]
  float v39; // [esp+58h] [ebp+4h]
  float v40; // [esp+58h] [ebp+4h]
  float *targetDimmera; // [esp+5Ch] [ebp+8h]
  float targetDimmerb; // [esp+5Ch] [ebp+8h]
  float targetDimmerc; // [esp+5Ch] [ebp+8h]
  float targetDimmerd; // [esp+5Ch] [ebp+8h]
  float optionalContexta; // [esp+60h] [ebp+Ch]
  float optionalContexte; // [esp+60h] [ebp+Ch]
  float optionalContextf; // [esp+60h] [ebp+Ch]
  float optionalContextg; // [esp+60h] [ebp+Ch]
  void *optionalContextb; // [esp+60h] [ebp+Ch]
  float optionalContextc; // [esp+60h] [ebp+Ch]
  float optionalContexth; // [esp+60h] [ebp+Ch]
  float optionalContexti; // [esp+60h] [ebp+Ch]
  float optionalContextj; // [esp+60h] [ebp+Ch]
  float optionalContextk; // [esp+60h] [ebp+Ch]
  float optionalContextd; // [esp+60h] [ebp+Ch]
  float optionalContextl; // [esp+60h] [ebp+Ch]
  NiPoint3 v57; // 0:^40.12

  lightFlags_7C = self->lightFlags_7C;          // Read TESObjectLIGH_DecodedLayout::lightFlags_7C; these bits select native source-light flicker/pulse behavior. /*0x4b1a79*/
  v7 = 0; /*0x4b1a80*/
  if ( (lightFlags_7C & 0x48) != 0 )            // Flicker-family selector: lightFlags_7C bit 0x08 ('Flicker') or 0x40 ('Flicker Slow') enters randomized native point-light position/dimmer animation. /*0x4b1a8d*/
  {
    v21 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x4b1bea*/
    optionalContextb = (void *)light[1].members.super.super.m_uiRefCount; /*0x4b1bfe*/
    targetDimmera = (float *)light[1].members.super.m_pcName; /*0x4b1c08*/
    if ( (lightFlags_7C & 0x40) != 0 )          // lightFlags_7C bit 0x40 ('Flicker Slow') scales down the flicker phase step. /*0x4b1c0c*/
      v21 = v21 * dbl_A2FAA0; /*0x4b1c18*/
    vtbl = light[1].vtbl; /*0x4b1bf4*/
    v25 = ((double)Game_RandomLargeInteger(0) / dbl_A43320 + dbl_A43318) * v21 + *(float *)&vtbl; /*0x4b1c41*/
    optionalContextc = ((double)Game_RandomLargeInteger(0) / dbl_A43320 + dbl_A43310) * v21 /*0x4b1c68*/
                     + *(float *)&optionalContextb;
    targetDimmerb = ((double)Game_RandomLargeInteger(0) / dbl_A43308 + dbl_A43300) * v21 + *(float *)&targetDimmera; /*0x4b1c90*/
    v13 = v25; /*0x4b1c94*/
    v14 = dbl_A3D5B0; /*0x4b1c98*/
    if ( v14 < v25 ) /*0x4b1ca5*/
    {
      v26 = v13 - v14; /*0x4b1cab*/
      v13 = v26; /*0x4b1cb3*/
    }
    v15 = optionalContextc; /*0x4b1cb5*/
    if ( optionalContextc > v14 ) /*0x4b1cc0*/
    {
      optionalContextc = v15 - v14; /*0x4b1cc4*/
      v15 = optionalContextc; /*0x4b1cc8*/
    }
    if ( targetDimmerb > v14 ) /*0x4b1cd7*/
      targetDimmerb = targetDimmerb - v14; /*0x4b1ce1*/
    ++light->unk0B8; /*0x4b1cf2*/
    *(float *)&light[1].vtbl = v13; /*0x4b1cf8*/
    ++light->unk0B8; /*0x4b1cfe*/
    *(float *)&light[1].members.super.super.m_uiRefCount = v15; /*0x4b1d06*/
    ++light->unk0B8; /*0x4b1d0c*/
    *(float *)&light[1].members.super.m_pcName = targetDimmerb; /*0x4b1d12*/
    v31 = v13 + dbl_A432F8; /*0x4b1d1e*/
    v28 = v31 + v31; /*0x4b1d24*/
    v29 = sin(v28); /*0x4b1d31*/
    v30 = optionalContextc + dbl_A2FAA0; /*0x4b1d47*/
    optionalContexth = v30 * dbl_A432F8; /*0x4b1d51*/
    optionalContexti = sin(optionalContexth); /*0x4b1d5e*/
    v27 = optionalContexti; /*0x4b1d66*/
    v22 = targetDimmerb + dbl_A432F0; /*0x4b1d74*/
    optionalContextj = v22 * dbl_A432E8; /*0x4b1d7e*/
    optionalContextk = sin(optionalContextj); /*0x4b1d8b*/
    targetDimmerc = optionalContextk; /*0x4b1d93*/
    optionalContextd = flt_B08150 * v29 * v27 * dbl_A2FAA0; /*0x4b1db7*/
    if ( flt_B08150 + optionalContextd <= dbl_A2FC68 ) /*0x4b1dd2*/
      optionalContextd = 0.0; /*0x4b1de7*/
    v57.x = v29 * optionalContextd; /*0x4b1df8*/
    v57.y = v27 * optionalContextd; /*0x4b1e09*/
    v57.z = optionalContextd * targetDimmerc; /*0x4b1e18*/
    light->members.m_localTransform.pos = v57; /*0x4b1e21*/
    NiAVObject_UpdateNiAVObject(light, 0.0, 1); /*0x4b1e29*/
    v32 = v22 * dbl_A30E48; /*0x4b1e38*/
    v33 = sin(v32); /*0x4b1e45*/
    targetDimmerd = v33; /*0x4b1e4d*/
    v34 = v30 * dbl_A43300; /*0x4b1e5b*/
    v35 = sin(v34); /*0x4b1e68*/
    optionalContextl = v35; /*0x4b1e70*/
    v36 = v31 * dbl_A43318; /*0x4b1e7e*/
    v37 = sin(v36); /*0x4b1e8b*/
    v16 = dbl_A2FAA0; /*0x4b1ea5*/
    v38 = (optionalContextl + 1.0) * v16 * (v37 + 1.0) * v16 / dbl_A30E48 + targetDimmerd / dbl_A3F3F0; /*0x4b1ebd*/
    v17 = v38; /*0x4b1ec1*/
    if ( v38 > 1.0 ) /*0x4b1ece*/
      v38 = 1.0; /*0x4b1ed0*/
    if ( v38 >= dbl_A3D360 ) /*0x4b1eed*/
    {
      if ( v17 <= 1.0 ) /*0x4b1f0e*/
        v18 = v17; /*0x4b1f1c*/
      else
        v18 = (float)1.0; /*0x4b1f16*/
    }
    else
    {
      v18 = kTerrainLODQuadRayDirectionZ; /*0x4b1eff*/
    }
    v39 = v16 + v18 * v16; /*0x4b1f22*/
    v19 = (v39 * dbl_A432E0 + dbl_A432D8) * self->fade_88;// Scale the native flicker dimmer by TESObjectLIGH::fade_88. /*0x4b1f36*/
    ++light->unk0B8; /*0x4b1f3c*/
    v40 = v19; /*0x4b1f42*/
    light->m_fDimmer = v40; /*0x4b1f4a*/
  }
  else if ( (char)lightFlags_7C < 0 /*0x4b1ab5*/
         || (lightFlags_7C & 0x100) != 0
         || optionalContext && 0.0 == *((float *)optionalContext + 3) )// Pulse-family selector: the signed low-byte test is bit 0x80 ('Pulse'); the adjacent 0x100 test is 'Pulse Slow'. Both drive dimmer interpolation, not shadow-caster admission.
  {
    optionalContexta = light->m_fDimmer;        // Load NiLight::m_fDimmer (+0xDC), the current dimmer that converges toward *targetDimmer. /*0x4b1ac7*/
    v23 = kFaceEarNormalMatchRadius; /*0x4b1ad1*/
    if ( (lightFlags_7C & 0x100) != 0 )         // lightFlags_7C bit 0x100 ('Pulse Slow') selects the slower native dimmer interpolation step. /*0x4b1ad5*/
      v23 = flt_A43328; /*0x4b1add*/
    v9 = *(float *)&MEMORY[0xB33E90][0xC] * v23; /*0x4b1b07*/
    if ( *targetDimmer <= (double)optionalContexta )// Compare current NiLight::m_fDimmer with AttachedLightPayload_Decoded::targetDimmer_04. /*0x4b1b09*/
    {
      v11 = v23; /*0x4b1b13*/
      v10 = optionalContexta - v9; /*0x4b1b15*/
    }
    else
    {
      v10 = optionalContexta + v9; /*0x4b1b0f*/
      v11 = v23; /*0x4b1b0f*/
    }
    ++light->unk0B8; /*0x4b1b17*/
    optionalContexte = v10; /*0x4b1b1e*/
    light->m_fDimmer = optionalContexte; /*0x4b1b26*/
    optionalContextf = optionalContexte - *targetDimmer; /*0x4b1b2f*/
    optionalContextg = fabs(optionalContextf); /*0x4b1b39*/
    if ( optionalContextg < v11 ) /*0x4b1b48*/
    {
      if ( optionalContext && 0.0 == *((float *)optionalContext + 3) ) /*0x4b1b5a*/
      {
        v7 = 1; /*0x4b1b5c*/
      }
      else
      {
        v12 = self->lightFlags_7C; /*0x4b1b65*/
        if ( (v12 & 0x48) != 0 ) /*0x4b1b6a*/
        {
          *targetDimmer = ((double)(Game_RandomLargeInteger(0) % 0x4B) * fConstant_Inv100 + dbl_A3C770) * self->fade_88; /*0x4b1bd9*/
        }
        else if ( (char)v12 < 0 || (v12 & 0x100) != 0 ) /*0x4b1b75*/
        {
          if ( kHeadBodyNormalMatchRadius >= (double)*targetDimmer ) /*0x4b1b89*/
            *targetDimmer = self->fade_88;      // Retarget the payload dimmer to TESObjectLIGH::fade_88 for the full native pulse state. /*0x4b1ba5*/
          else
            *targetDimmer = self->fade_88 * dbl_A3C770;// Retarget the payload dimmer to half of TESObjectLIGH::fade_88 for the alternating native pulse state. /*0x4b1b97*/
        }
      }
    }
  }
  if ( light ) /*0x4b1f5e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&light->members) ) /*0x4b1f64*/
      light->vtbl->super.super.Destructor((NiRefObject *)light, 1); /*0x4b1f76*/
  }
  return v7; /*0x4b1f7a*/
}
