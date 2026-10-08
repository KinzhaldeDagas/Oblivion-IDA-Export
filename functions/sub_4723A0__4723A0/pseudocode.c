// Computes the actor movement vector from ActorAnimData +0x0C/+0x10/+0x14. For non-creature ground-movement groups, clamps the vector by TESAnimGroup root-motion magnitude scaled by +0xBC and, when the blend sequence at +0xAC is active, +0xC0; optionally transforms the result and can suppress Z.
void __userpurge sub_4723A0(float *a1@<ecx>, double a2@<st1>, float *a3, Actor *a4, char a5, char a6)
{
  int v7; // eax
  int v8; // edx
  float v9; // ecx
  float v10; // edx
  float v11; // ecx
  float v12; // edx
  int v14; // eax
  double MovementMagnitude; // st6
  int v16; // eax
  double v17; // st5
  double v18; // st5
  float v19; // ecx
  float v20; // edx
  __int64 v21; // [esp-14h] [ebp-58h]
  float v22; // [esp+4h] [ebp-40h]
  float v23; // [esp+4h] [ebp-40h]
  float v24; // [esp+8h] [ebp-3Ch] BYREF
  float v25; // [esp+Ch] [ebp-38h]
  float v26; // [esp+10h] [ebp-34h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v28[36]; // [esp+20h] [ebp-24h] BYREF
  float v29; // [esp+4Ch] [ebp+8h]
  float v30; // [esp+4Ch] [ebp+8h]
  float v31; // [esp+4Ch] [ebp+8h]
  float v32; // [esp+4Ch] [ebp+8h]
  float v33; // [esp+4Ch] [ebp+8h]

  v7 = *((_DWORD *)a1 + 1); /*0x4723a6*/
  if ( v7 ) /*0x4723ab*/
  {
    v8 = *((_DWORD *)&g_zeroNiPoint3 + 1); /*0x4723bc*/
    *(float *)v27 = g_zeroNiPoint3; /*0x4723c2*/
    v9 = MEMORY[0xB3F9B0][0]; /*0x4723c6*/
    v27[1] = v8; /*0x4723cc*/
    v10 = a1[3]; /*0x4723d0*/
    *(float *)&v27[2] = v9; /*0x4723d3*/
    v11 = a1[4]; /*0x4723d7*/
    v24 = v10; /*0x4723db*/
    v12 = a1[5]; /*0x4723df*/
    v25 = v11; /*0x4723e2*/
    v26 = v12; /*0x4723ea*/
    qmemcpy(v28, (const void *)(v7 + 0x30), sizeof(v28)); /*0x4723f7*/
    if ( Actor_IsCreature(a4) ) /*0x4723ff*/
      goto LABEL_26; /*0x4723ff*/
    if ( !sub_5E05B0(a4) ) /*0x47240e*/
      goto LABEL_26; /*0x47240e*/
    v14 = *((_DWORD *)a1 + 0x28); /*0x47241b*/
    if ( !v14 /*0x47244b*/
      || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v14 + 0x68)) < 3
      || TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(*((_DWORD *)a1 + 0x28) + 0x68)) > 0x10 )
    {
      goto LABEL_26; /*0x47244b*/
    }
    v29 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x472460*/
    MovementMagnitude = TESAnimGroup_GetMovementMagnitude((float *)*(_DWORD *)(*((_DWORD *)a1 + 0x28) + 0x68)); /*0x472464*/
    v16 = *((_DWORD *)a1 + 0x2B); /*0x47246f*/
    v30 = MovementMagnitude * a1[0x2F] * v29; /*0x47247b*/
    if ( v16 && *(_DWORD *)(v16 + 0x44) == 1 ) /*0x472485*/
    {
      v22 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x472492*/
      v23 = TESAnimGroup_GetMovementMagnitude((float *)*(_DWORD *)(v16 + 0x68)) * a1[0x30] * v22; /*0x4724a5*/
      if ( v30 >= (double)v23 ) /*0x4724b8*/
      {
        a2 = v30; /*0x4724c6*/
LABEL_13:
        v31 = dbl_A3C800 * a2; /*0x4724c8*/
        if ( a2 > 0.0 ) /*0x4724dd*/
        {
          v17 = v31; /*0x4724ef*/
          if ( v31 < (double)v24 ) /*0x4724f4*/
            v24 = a2; /*0x4724f8*/
          if ( v25 > v17 ) /*0x472509*/
            v25 = a2; /*0x47250d*/
          if ( v26 > v17 ) /*0x47251e*/
            v26 = a2; /*0x472522*/
          v32 = -v17; /*0x47252a*/
          v18 = v32; /*0x47253a*/
          if ( v32 > (double)v24 ) /*0x47253f*/
            v24 = -a2; /*0x472545*/
          if ( v25 < v18 ) /*0x472554*/
            v25 = -a2; /*0x47255a*/
          if ( v26 < v18 ) /*0x472569*/
          {
            a2 = -a2; /*0x47256b*/
            v26 = a2; /*0x47256d*/
          }
        }
LABEL_26:
        if ( a4 ) /*0x472577*/
        {
          switch ( a4->vtbl->super.super.GetSleepState((TESObjectREFR *)a4) ) /*0x472594*/
          {
            case kSitSleep_SittingIn: /*0x472594*/
            case kSitSleep_SittingOut: /*0x472594*/
            case kSitSleep_SleepingIn: /*0x472594*/
            case kSitSleep_SleepingOut: /*0x472594*/
              a4->vtbl->super.super.GetScale((TESObjectREFR *)a4); /*0x4725a5*/
              v33 = a2; /*0x4725a7*/
              v24 = v24 / v33; /*0x4725b9*/
              v25 = v25 / v33; /*0x4725c1*/
              break; /*0x4725c1*/
            default:
              break;
          }
        }
        if ( a6 ) /*0x4725cc*/
          v26 = 0.0; /*0x4725d0*/
        if ( a5 ) /*0x4725d9*/
        {
          HIDWORD(v21) = v27; /*0x4725eb*/
          LODWORD(v21) = v28; /*0x4725f0*/
          sub_710580(v21, 1u, (int)&v24, (int)a3); /*0x4725f1*/
        }
        else
        {
          v19 = v25; /*0x47260a*/
          *a3 = v24; /*0x47260e*/
          v20 = v26; /*0x472610*/
          a3[1] = v19; /*0x472614*/
          a3[2] = v20; /*0x472617*/
        }
        return; /*0x4725ff*/
      }
      v30 = v23; /*0x4724bc*/
    }
    a2 = v30; /*0x4724c0*/
    goto LABEL_13; /*0x4724c4*/
  }
}
