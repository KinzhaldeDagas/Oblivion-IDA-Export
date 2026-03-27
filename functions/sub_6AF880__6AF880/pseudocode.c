void __usercall sub_6AF880(
        double a1@<st1>,
        double a2@<st0>,
        Actor *a3,
        float a4,
        int a5,
        Actor *a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11)
{
  float *v12; // ebx
  int *v13; // edi
  int *v14; // ebp
  int v15; // eax
  void *v16; // eax
  float *v17; // eax
  int v18; // esi
  double v19; // st5
  int v20; // eax
  int *v21; // eax
  int *v22; // esi
  float *v23; // eax
  int v24; // eax
  int v25; // eax
  char v26; // bl
  void *v27; // eax
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // eax
  int *v31; // esi
  int *v32; // ebx
  char *v33; // [esp+Ch] [ebp-38h]
  char v34; // [esp+22h] [ebp-22h]
  char v35; // [esp+23h] [ebp-21h]
  int *v36; // [esp+24h] [ebp-20h]
  float v37; // [esp+24h] [ebp-20h]
  float v38; // [esp+24h] [ebp-20h]
  float *v39; // [esp+28h] [ebp-1Ch]
  float v40; // [esp+2Ch] [ebp-18h]
  float v41; // [esp+2Ch] [ebp-18h]
  float v42; // [esp+2Ch] [ebp-18h]
  float v43; // [esp+2Ch] [ebp-18h]
  float v44; // [esp+2Ch] [ebp-18h]
  float v45; // [esp+30h] [ebp-14h]
  float v46; // [esp+34h] [ebp-10h]
  float v47; // [esp+38h] [ebp-Ch]
  float v48; // [esp+38h] [ebp-Ch]
  float v49; // [esp+3Ch] [ebp-8h]
  float v50; // [esp+3Ch] [ebp-8h]
  float v51; // [esp+40h] [ebp-4h]
  float v52; // [esp+40h] [ebp-4h]
  float v53; // [esp+48h] [ebp+4h]
  float v54; // [esp+48h] [ebp+4h]
  float v55; // [esp+48h] [ebp+4h]
  float v56; // [esp+48h] [ebp+4h]
  float v57; // [esp+48h] [ebp+4h]
  float v58; // [esp+48h] [ebp+4h]

  v12 = 0;
  if ( a3 )
  {
    if ( dword_B3C20C < (unsigned int)dword_B16304 )
    {
      if ( !dword_B3C0F0 )
        dword_B3C0F0 = (int)OSGlobals->sound;
      v35 = 0;
      v13 = 0;
      v14 = 0;
      v36 = 0;
      v15 = ((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>))a3->members.super.process->GetEquippedWeaponData)(
              a3->members.super.process,
              1,
              a2,
              a1);
      v16 = v15 ? *(void **)(v15 + 8) : 0;
      if ( v16 )
      {
        v12 = (float *)OblivionDynamicCast(
                         v16,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESObjectWEAP `RTTI Type Descriptor',
                         0);
        v39 = v12;
      }
      else
      {
        v39 = 0;
      }
      v17 = a3->vtbl->super.super.GetPos((TESObjectREFR *)a3);
      v18 = dword_B3C0F0;
      v47 = *v17;
      v49 = v17[1];
      v51 = v17[2];
      if ( !byte_B333B8
        || (v40 = *(float *)(v18 + 0x80) - v47,
            v45 = *(float *)(v18 + 0x84) - v49,
            v46 = *(float *)(v18 + 0x88) - v51,
            v41 = v40 * v40 + v45 * v45 + v46 * v46,
            v42 = sqrt(v41),
            v19 = v42,
            v43 = flt_B162FC * dbl_A2FAA0,
            v43 >= v19) )
      {
        if ( !a6 )
        {
          if ( !v12 )
          {
            v21 = PlaySound___((int *)v18, "WPNSwishHand", 0x4102, 1);
LABEL_28:
            v22 = v21;
            if ( v21 )
            {
              sub_6B7360(v21, v47, v49, v51);
              sub_6AC3E0((_DWORD **)dword_B3C0F0, *v22, (LONG)a3);
              sub_6B7190(v22, 0);
              sub_6B73E0(v22);
              FormHeapFree((unsigned int)v22);
            }
            return;
          }
          if ( byte_B162EC )
          {
            v37 = v12[0x25];
            if ( *(float *)GameSetting_GetSafeFloatPointer(&fMediumWeaponSpeedMax_Audio) >= (double)v37 )
            {
              if ( *(float *)GameSetting_GetSafeFloatPointer(&fMediumWeaponSpeedMax_Audio) <= (double)v37
                || *(float *)GameSetting_GetSafeFloatPointer(&fLargeWeaponSpeedMax_Audio) >= (double)v37 )
              {
LABEL_19:
                v20 = sub_447490("WPNSwishLarge");
LABEL_26:
                if ( !v20 )
                  return;
                v21 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v20 + 0xC), 0x4102, 1);
                goto LABEL_28;
              }
LABEL_23:
              v20 = sub_447490("WPNSwishMedium");
              goto LABEL_26;
            }
          }
          else
          {
            v38 = v12[0x1F];
            if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B162CC) <= (double)v38 )
            {
              if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B162CC) >= (double)v38
                || *(float *)GameSetting_GetSafeFloatPointer(&fLargeWeaponWeightMin_Audio) <= (double)v38 )
              {
                goto LABEL_19;
              }
              goto LABEL_23;
            }
          }
          v20 = sub_447490("WPNSwishSmall");
          goto LABEL_26;
        }
        v23 = a6->vtbl->super.super.GetPos((TESObjectREFR *)a6);
        v52 = v23[2];
        v48 = *v23;
        v50 = v23[1];
        if ( a8 >= 0 )
        {
          if ( a8 )
            v24 = sub_447490("PHYArmorHitHeavy");
          else
            v24 = sub_447490("PHYArmorHitLight");
          goto LABEL_40;
        }
        if ( a9 >= 0 )
        {
          if ( !a9 )
          {
            v33 = "WPNBlockShieldLight";
            goto LABEL_39;
          }
          if ( a9 == 1 )
          {
            v33 = "WPNBlockShieldHeavy";
LABEL_39:
            v35 = 1;
            v24 = sub_447490(v33);
LABEL_40:
            if ( v24 )
              v14 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v24 + 0xC), 0x4102, 1);
          }
        }
        v34 = 0;
        if ( !a10 )
        {
          if ( Actor_IsCreature(a6) && LOBYTE(a6[1].vtbl) == 2 )
          {
            v25 = sub_447490("PHYDamageBone");
          }
          else
          {
            v34 = 1;
            if ( Actor_IsCreature(a6) )
              v25 = sub_447490("PHYDamageFur");
            else
              v25 = sub_447490("PHYDamageFlesh");
          }
          if ( v25 )
            v36 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v25 + 0xC), 0x4102, 1);
        }
        v26 = 0;
        if ( a7 < 0 && Actor_IsCreature(a3) )
        {
          v27 = (void *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->super.super.GetBaseForm)(
                          a3,
                          a2,
                          a1);
          v28 = OblivionDynamicCast(
                  v27,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESCreature `RTTI Type Descriptor',
                  0);
          v29 = sub_51CEC0(v28, 9u);
          if ( v29 )
          {
            if ( dword_B3C0F0 )
            {
              v13 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v29 + 0xC), 0x4102, 1);
              if ( v13 )
                goto LABEL_73;
            }
          }
        }
        switch ( a7 )
        {
          case 0:
          case 1:
            v26 = 1;
            if ( a11 )
            {
              v30 = sub_447490("WPNHitBladeFleshEnchanted");
            }
            else if ( !v34 || v35 )
            {
              v30 = sub_447490("WPNHitBlade");
            }
            else
            {
              v30 = sub_447490("WPNHitBladeFlesh");
            }
            break;
          case 2:
          case 3:
            v26 = 1;
            if ( a11 )
            {
              v30 = sub_447490("WPNHitBluntFleshEnchanted");
            }
            else if ( !v34 || v35 )
            {
              v30 = sub_447490("WPNHitBlunt");
            }
            else
            {
              v30 = sub_447490("WPNHitBluntFlesh");
            }
            break;
          case 5:
            v30 = sub_447490("WPNHitArrow");
            break;
          default:
            v30 = sub_447490("WPNHitHand");
            break;
        }
        if ( v30 && (v13 = OSGLobals_PlaySound((int *)dword_B3C0F0, *(void **)(v30 + 0xC), 0x4102, 1)) != 0 )
        {
LABEL_73:
          sub_6B7360(v13, v48, v50, v52);
          if ( a3->members.super.process )
          {
            if ( v39 )
            {
              v53 = dbl_A68610 - Rand5(flt_A2FAAC) + dbl_A2F928;
              sub_6B7310(v13, v53);
            }
          }
          v54 = sub_517DD0() * dbl_A77428;
          sub_6B7280(v13, v54);
          v31 = (int *)a6;
          sub_6AC3E0((_DWORD **)dword_B3C0F0, *v13, (LONG)a6);
        }
        else
        {
          v31 = (int *)a6;
        }
        if ( v26 && v34 )
        {
          v32 = v36;
          if ( v36 )
          {
            sub_6B73C0(v36);
            sub_6B73E0(v36);
            FormHeapFree((unsigned int)v36);
            v32 = 0;
          }
        }
        else
        {
          v32 = v36;
          if ( v36 )
          {
            if ( a4 > 0.0 )
            {
              v55 = a4 / (double)Actor_GetBaseCalcAVi(v31, (int)v36, (int)v13, (int)v31, 8);
              if ( v55 > 1.0 )
                v55 = 1.0;
              sub_517DF0();
              v44 = a4 * dbl_A77428;
              sub_6B7280(v36, v44);
              sub_6B7360(v36, v48, v50, v52);
              v56 = 1.0 - v55 / dbl_A3F3E8 - dbl_A68610;
              sub_6B7310(v36, v56);
              sub_6AC3E0((_DWORD **)dword_B3C0F0, *v36, (LONG)v31);
            }
          }
        }
        if ( v14 )
        {
          sub_6B7360(v14, v48, v50, v52);
          v57 = (double)(Rand3(4) - 2) / fConst_200 + dbl_A2F928;
          sub_6B7310(v14, v57);
          sub_6AC3E0((_DWORD **)dword_B3C0F0, *v14, (LONG)v31);
          v58 = sub_517DE0() * dbl_A77428;
          sub_6B7280(v14, v58);
          sub_6B71C0(v14, 0);
        }
        if ( v32 )
          sub_6B71C0(v32, 0);
        if ( v13 )
        {
          sub_6B71C0(v13, 0);
          sub_6B73E0(v13);
          FormHeapFree((unsigned int)v13);
        }
        if ( v32 )
        {
          sub_6B73E0(v32);
          FormHeapFree((unsigned int)v32);
        }
        if ( v14 )
        {
          sub_6B73E0(v14);
          FormHeapFree((unsigned int)v14);
        }
      }
    }
  }
}
