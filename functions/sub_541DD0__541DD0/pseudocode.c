// Oblivion Sky fog synthesis. Selects underwater/water, exterior weather, or interior-cell fog distances and colors, updates sky/sun presentation, and optionally clamps the far plane. Fallout corroborates the conventional Sky::UpdateFog label only after the Oblivion behavior was established.
void __thiscall Sky__UpdateFog(Sky *this)
{                                               // Fog water decode: enter water/underwater Sky fog branch when Flags0FC bit 2 was set by normal sky update water-height test.
  float *v2; // eax
  float *v3; // edi
  int v4; // ebx
  TESObjectCELL *ParentCell; // eax
  double v6; // st7
  int v7; // edx
  UInt32 unk0DC; // eax
  bool v9; // bl
  NiNode *unk0C; // eax
  NiNode *unk08; // eax
  NiAVObject *v12; // eax
  NiNode *SunBillboard; // eax
  NiNode *SunGlareBillboard; // eax
  NiNode *nodeSkyRoot; // esi
  UInt32 v16; // eax
  double v17; // st7
  double v18; // st7
  float *firstWeather; // eax
  double v20; // st7
  double v21; // st5
  double v22; // st4
  double v23; // st3
  float *secondWeather; // eax
  double v25; // st6
  TESObjectCELL *currentInteriorCell; // ecx
  double v27; // st7
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st7
  double v32; // st5
  double v33; // st2
  float v34; // [esp+14h] [ebp-30h]
  float v35; // [esp+14h] [ebp-30h]
  float v36; // [esp+14h] [ebp-30h]
  float v37; // [esp+14h] [ebp-30h]
  float v38; // [esp+18h] [ebp-2Ch]
  float v39; // [esp+18h] [ebp-2Ch]
  float v40; // [esp+18h] [ebp-2Ch]
  float v41; // [esp+1Ch] [ebp-28h]
  float v42; // [esp+20h] [ebp-24h]
  float v43; // [esp+20h] [ebp-24h]
  float v44; // [esp+20h] [ebp-24h]
  float v45; // [esp+20h] [ebp-24h]
  float FarPlane; // [esp+20h] [ebp-24h]
  float v47; // [esp+20h] [ebp-24h]
  int v48[8]; // [esp+24h] [ebp-20h] BYREF

  if ( (this->Flags0FC & 4) != 0 ) /*0x541ddf*/
  {
    v2 = (float *)sub_4994C0();                 // Fog water decode: select current water fog source record via 0x4994C0. /*0x541de5*/
    v3 = v2; /*0x541dea*/
    if ( v2 ) /*0x541df0*/
    {
      this->unk0C8 = v2[0x18];                  // Fog water decode: Sky+0x0C8 fogStart = selected water source record field [0x18]. /*0x541dfa*/
      this->unk0CC = v2[0x19];                  // Fog water decode: Sky+0x0CC fogEnd = selected water source record field [0x19]. /*0x541e03*/
      if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x541e0e*/
        v4 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C); /*0x541e21*/
      else
        v4 = 0; /*0x541e17*/
      ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference);// Fog water decode: reads player/current parent cell before water-height depth calculation. /*0x541e29*/
      v34 = (TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) - *(float *)(v4 + 0x90)) * unk_B36670;// Fog water decode: depth blend factor = (cell water height - active scene height) * unk_B36670, later clamped to max 1.0. /*0x541e41*/
      if ( v34 <= 1.0 ) /*0x541e52*/
      {
        v6 = v34; /*0x541e60*/
      }
      else
      {
        v34 = 1.0; /*0x541e56*/
        v6 = (float)1.0; /*0x541e5a*/
      }
      v7 = *((_DWORD *)v3 + 0x1B); /*0x541e69*/
      v48[0] = (int)v3[0x1A];                   // Fog water decode: first packed RGB water fog color = source record field [0x1A]. /*0x541e73*/
      *(float *)&v48[4] = 1.0 - v6;             // Fog water decode: first water fog color weight = 1 - depthBlend. /*0x541e7a*/
      v48[1] = v7;                              // Fog water decode: second packed RGB water fog color = source record field [0x1B]. /*0x541e80*/
      *(float *)&v48[5] = v6;                   // Fog water decode: second water fog color weight = depthBlend. /*0x541e84*/
      v48[2] = 0; /*0x541e88*/
      v48[3] = 0; /*0x541e8e*/
      *(float *)&v48[6] = 0.0; /*0x541e92*/
      *(float *)&v48[7] = 0.0; /*0x541e96*/
      sub_5400E0(this, (float *)&this->unk03C[3], (float *)v48, 0.0);// Fog water decode: blend packed water RGB colors into Sky+0x48/+0x4C/+0x50 using 0x5400E0. /*0x541e9f*/
      unk0DC = this->unk0DC; /*0x541ea4*/
      if ( unk0DC == 3 || unk0DC == 2 ) /*0x541eb2*/
      {
        *(float *)&this->unk03C[3] = *(float *)&this->unk03C[3] * *(float *)&this->unk03C[0xC];// Fog water decode: in exterior/weather sky modes, multiply water fog RGB by existing Sky color/tint vector at +0x6C/+0x70/+0x74. /*0x541ebd*/
        *(float *)&this->unk03C[4] = *(float *)&this->unk03C[0xD] * *(float *)&this->unk03C[4]; /*0x541ec5*/
        *(float *)&this->unk03C[5] = *(float *)&this->unk03C[0xE] * *(float *)&this->unk03C[5]; /*0x541ece*/
        v9 = kHeadBodyNormalMatchRadius < (double)v34;// Fog water decode: compare depthBlend against flt_A3D65C to choose underwater sky visibility flag state. /*0x541ee0*/
        unk0C = this->clouds->unk0C; /*0x541eed*/
        if ( kHeadBodyNormalMatchRadius >= (double)v34 )// Fog water decode: toggles clouds node m_flags bit 0 for underwater sky visibility. /*0x541efa*/
          unk0C->members.super.m_flags &= ~1u; /*0x541f02*/
        else
          unk0C->members.super.m_flags |= 1u; /*0x541efc*/
        unk08 = this->clouds->unk08; /*0x541f0b*/
        if ( v9 ) /*0x541f0e*/
          unk08->members.super.m_flags |= 1u; /*0x541f10*/
        else
          unk08->members.super.m_flags &= ~1u; /*0x541f16*/
        v12 = Shared_GetPointerAtOffset08(this->atmosphere); /*0x541f1d*/
        if ( v9 )                               // Fog water decode: toggles atmosphere mesh m_flags bit 0 for underwater sky visibility. /*0x541f24*/
          v12->members.m_flags |= 1u; /*0x541f26*/
        else
          v12->members.m_flags &= ~1u; /*0x541f2c*/
        SunBillboard = (NiNode *)this->sun->membr.SunBillboard; /*0x541f35*/
        if ( v9 )                               // Fog water decode: toggles sun billboard m_flags bit 0 for underwater sky visibility. /*0x541f38*/
          SunBillboard->members.super.m_flags |= 1u; /*0x541f3a*/
        else
          SunBillboard->members.super.m_flags &= ~1u; /*0x541f40*/
        SunGlareBillboard = (NiNode *)this->sun->membr.SunGlareBillboard; /*0x541f49*/
        if ( v9 )                               // Fog water decode: toggles sun glare billboard m_flags bit 0 for underwater sky visibility. /*0x541f4c*/
          SunGlareBillboard->members.super.m_flags |= 1u; /*0x541f4e*/
        else
          SunGlareBillboard->members.super.m_flags &= ~1u; /*0x541f54*/
        nodeSkyRoot = this->nodeSkyRoot;        // Fog water decode: toggles sky root m_flags bit 0, then water branch returns before weather/interior fog and far-plane clamp. /*0x541f5a*/
        if ( v9 ) /*0x541f5d*/
          nodeSkyRoot->members.super.m_flags |= 1u; /*0x541f5f*/
        else
          nodeSkyRoot->members.super.m_flags &= ~1u; /*0x541f6b*/
      }
      return; /*0x541f5f*/
    }
  }
  if ( this->firstWeather )                     // Exterior fog decode: enters normal weather-fog branch when Sky::firstWeather is present. /*0x541f77*/
  {
    v16 = this->unk0DC;                         // Exterior fog decode: reads Sky::unk0DC mode for weather fog; modes 2 and 3 are the exterior/weather path. /*0x541f81*/
    if ( v16 == 3 || v16 == 2 )                 // Exterior fog decode: guard for Sky exterior/weather modes 2 or 3 before TESWeather fog blending. /*0x541f8f*/
    {
      v38 = sub_53FC10(this);                   // Fog time-boundary decode: exterior distance update consumes adjusted sunrise blend-start from 0x53FC10. /*0x541f9c*/
      v35 = sub_499180(this);                   // Fog time-boundary decode: exterior distance update consumes normalized climate day boundary from 0x499180. /*0x541fa7*/
      v41 = sub_4991C0(this);                   // Fog time-boundary decode: exterior distance update consumes normalized climate sunset boundary from 0x4991C0. /*0x541fb2*/
      v42 = sub_53FC90(this);                   // Fog time-boundary decode: exterior distance update consumes adjusted sunset/night blend-end from 0x53FC90. /*0x541fbd*/
      if ( this->unk0D0 <= (double)v38 || this->unk0D0 >= (double)v35 ) /*0x541fe5*/
      {
        v18 = v41; /*0x542003*/
        if ( this->unk0D0 < (double)v35 || this->unk0D0 > v18 ) /*0x542019*/
        {
          if ( this->unk0D0 <= v18 || v42 <= (double)this->unk0D0 ) /*0x542043*/
            v17 = 0.0;                          // Fog weather-field decode: outside day window, dayWeight = 0 so TESWeather night fog fields dominate. /*0x542059*/
          else
            v17 = (v42 - this->unk0D0) / (v42 - v18);// Fog weather-field decode: sunset transition computes dayWeight decreasing from climate sunset boundary to adjusted sunset blend-end. /*0x542051*/
        }
        else
        {
          v17 = 1.0; /*0x54201d*/
        }
      }
      else
      {
        v17 = (this->unk0D0 - v38) / (v35 - v38);// Fog weather-field decode: sunrise transition computes dayWeight from current time between adjusted sunrise blend-start and climate day boundary. /*0x541ff3*/
      }
      firstWeather = (float *)this->firstWeather;// Exterior fog decode: firstWeather pointer; TESWeather fog fields are +0x58/+0x5C day near/far and +0x60/+0x64 night near/far. /*0x54205b*/
      v36 = v17; /*0x54205e*/
      v20 = v36;                                // Fog weather-field decode: dayWeight used for TESWeather day near/far fields +0x58/+0x5C. /*0x542062*/
      v43 = 1.0 - v36;                          // Fog weather-field decode: nightWeight = 1 - dayWeight used for TESWeather night near/far fields +0x60/+0x64. /*0x542070*/
      v21 = v43; /*0x542086*/
      this->unk0C8 = firstWeather[0x18] * v43 + firstWeather[0x16] * v36;// Exterior fog decode: writes Sky+0x0C8 fogStart = lerp(nightNear +0x60, dayNear +0x58, dayWeight) from firstWeather. /*0x542088*/
      v22 = firstWeather[0x19] * v43;           // Fog weather-field decode: night fogFar component = TESWeather +0x64 * nightWeight. /*0x542091*/
      v23 = firstWeather[0x17];                 // Fog weather-field decode: day fogFar component reads TESWeather +0x5C before dayWeight blend. /*0x542093*/
      secondWeather = (float *)this->secondWeather; /*0x542096*/
      this->unk0CC = v22 + v23 * v36;           // Exterior fog decode: writes Sky+0x0CC fogEnd = lerp(nightFar +0x64, dayFar +0x5C, dayWeight) from firstWeather. /*0x54209f*/
      if ( secondWeather )                      // Exterior fog decode: if secondWeather exists, blend first-weather fog against second-weather fog using Sky::weatherPercent. /*0x5420a5*/
      {
        v44 = this->weatherPercent * this->unk0C8; /*0x5420b7*/
        this->unk0C8 = v44; /*0x5420bf*/
        v25 = 1.0 - this->weatherPercent; /*0x5420cb*/
        this->unk0C8 = v44 + (secondWeather[0x18] * v21 + secondWeather[0x16] * v20) * v25;// Exterior fog decode: transition blend for Sky+0x0C8 fogStart; first-weather contribution weighted by weatherPercent, second by 1-weatherPercent. /*0x5420dd*/
        v45 = this->weatherPercent * this->unk0CC; /*0x5420ef*/
        this->unk0CC = v45; /*0x5420f7*/
        this->unk0CC = v45 + v25 * (v20 * secondWeather[0x17] + v21 * secondWeather[0x19]);// Exterior fog decode: transition blend for Sky+0x0CC fogEnd; first-weather contribution weighted by weatherPercent, second by 1-weatherPercent. /*0x542111*/
      }
      goto LABEL_59; /*0x542117*/
    }
  }
  if ( this->unk0DC == 1 )                      // Fog interior decode: enter interior distance branch when Sky::unk0DC == 1. /*0x542123*/
  {
    if ( MEMORY[0xB333A0] ) /*0x542129*/
    {
      currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell;// Fog interior decode: fetch TES::currentInteriorCell before reading LightingData fog distances. /*0x542136*/
      if ( currentInteriorCell ) /*0x54213b*/
      {
        v37 = sub_4C9A40((int)currentInteriorCell);// Fog interior decode: read cell fogFar via 0x4C9A40. /*0x542146*/
        if ( v37 <= 0.0 ) /*0x54215f*/
        {
          v27 = flt_A3F4F0; /*0x5421a2*/
        }
        else
        {
          v27 = flt_A3F4F0; /*0x542165*/
          if ( v27 >= v37 ) /*0x54216a*/
            goto LABEL_50; /*0x54216a*/
        }
        v37 = v27;                              // Fog interior decode: clamp invalid or over-limit fogFar to default flt_A3F4F0. /*0x5421a4*/
LABEL_50:
        v39 = sub_4C9A20((int)MEMORY[0xB333A0]->currentInteriorCell);// Fog interior decode: read cell fogNear via 0x4C9A20. /*0x54216e*/
        v28 = v39; /*0x54218a*/
        if ( v39 <= 0.0 )                       // Fog interior decode: validate fogNear; non-positive near falls back to derived start distance. /*0x54218f*/
        {
          v30 = v37; /*0x5421ac*/
        }
        else
        {
          v29 = v37; /*0x542191*/
          if ( v37 >= v28 )                     // Fog interior decode: if fogFar >= fogNear, use cell fogNear directly as fogStart. /*0x54219c*/
          {
LABEL_57:
            this->unk0C8 = v28;                 // Fog interior decode: write Sky+0x0C8 fogStart from cell fogNear or derived fallback. /*0x5421c2*/
            this->unk0CC = v29;                 // Fog interior decode: write Sky+0x0CC fogEnd from clamped cell fogFar. /*0x5421ca*/
            goto LABEL_59; /*0x5421d0*/
          }
          v30 = v37; /*0x54219e*/
        }
        v40 = dbl_A56EA0 * v30;                 // Fog interior decode: derived fallback fogStart = fogFar * dbl_A56EA0 when fogNear is invalid or beyond fogFar. /*0x5421b8*/
        v29 = v30; /*0x5421c0*/
        v28 = v40; /*0x5421c0*/
        goto LABEL_57; /*0x5421c0*/
      }
    }
  }
  v31 = flt_A3F4F0;                             // Fog default decode: default Sky fogStart/fogEnd to flt_A3F4F0 when water, weather, and interior branches do not produce values. /*0x5421d2*/
  this->unk0C8 = flt_A3F4F0; /*0x5421d8*/
  this->unk0CC = v31; /*0x5421de*/
LABEL_59:
  if ( !sub_4E9F40() )                          // Fog decode: far-plane clamp gate. When 0x4E9F40 is false, non-water fogStart/fogEnd are remapped to active GetFarPlane output. /*0x5421ec*/
  {
    FarPlane = GetFarPlane((SceneGraph *)g_WorldSceneReceiverRoot);// Fog decode: reads active GetFarPlane result; for interior mode 1 this can use cell fogClipDistance. /*0x542204*/
    v32 = FarPlane; /*0x54221f*/
    v33 = NearDistance; /*0x542231*/
    v47 = (this->unk0CC - FarPlane) / (this->unk0CC - v33); /*0x542239*/
    this->unk0C8 = this->unk0C8 - (this->unk0C8 - v33) * v47;// Fog decode: final clamped Sky+0x0C8 fogStart, preserving fog curve against NearDistance and active FarPlane. /*0x54224b*/
    this->unk0CC = v32;                         // Fog decode: final clamped Sky+0x0CC fogEnd = active FarPlane. /*0x542251*/
  }
}
