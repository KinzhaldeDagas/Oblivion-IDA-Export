void __usercall sub_6AF880(
        double a1@<st1>,
        double a2@<st0>,
        TESObjectREFR *a3,
        float a4,
        int a5,
        TESObjectREFR *a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11)
{
  float *v11; // ebx
  int *v12; // edi
  int *v13; // ebp
  int v14; // eax
  void *v15; // eax
  float *v16; // eax
  int v17; // esi
  double v18; // st5
  int v19; // eax
  int *v20; // eax
  int *v21; // esi
  float *v22; // eax
  int v23; // eax
  int v24; // eax
  char v25; // bl
  void *v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  int v29; // eax
  int *v30; // esi
  int *v31; // ebx
  char *v32; // [esp+Ch] [ebp-38h]
  char v33; // [esp+22h] [ebp-22h]
  char v34; // [esp+23h] [ebp-21h]
  int *v35; // [esp+24h] [ebp-20h]
  float v36; // [esp+24h] [ebp-20h]
  float v37; // [esp+24h] [ebp-20h]
  float *v38; // [esp+28h] [ebp-1Ch]
  float v39; // [esp+2Ch] [ebp-18h]
  float v40; // [esp+2Ch] [ebp-18h]
  float v41; // [esp+2Ch] [ebp-18h]
  float v42; // [esp+2Ch] [ebp-18h]
  float v43; // [esp+2Ch] [ebp-18h]
  float v44; // [esp+30h] [ebp-14h]
  float v45; // [esp+34h] [ebp-10h]
  float v46; // [esp+38h] [ebp-Ch]
  float v47; // [esp+38h] [ebp-Ch]
  float v48; // [esp+3Ch] [ebp-8h]
  float v49; // [esp+3Ch] [ebp-8h]
  float v50; // [esp+40h] [ebp-4h]
  float v51; // [esp+40h] [ebp-4h]
  float v52; // [esp+48h] [ebp+4h]
  float v53; // [esp+48h] [ebp+4h]
  float v54; // [esp+48h] [ebp+4h]
  float v55; // [esp+48h] [ebp+4h]
  float v56; // [esp+48h] [ebp+4h]
  float v57; // [esp+48h] [ebp+4h]

  v11 = 0; /*0x6af888*/
  if ( a3 )
  {
    if ( unk_B3C20C < (unsigned int)dword_B16304 )
    {
      if ( !unk_B3C0F0 ) /*0x6af8a4*/
        unk_B3C0F0 = (int)MEMORY[0xB33398]->sound; /*0x6af8b5*/
      v34 = 0; /*0x6af8ca*/
      v12 = 0; /*0x6af8ce*/
      v13 = 0; /*0x6af8d0*/
      v35 = 0; /*0x6af8d2*/
      v14 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>))a3[1].vtbl->super.super.InitializeComponent /*0x6af8d6*/
             + 0x3B))(
              a3[1].vtbl,
              1,
              a2,
              a1);
      v15 = v14 ? *(void **)(v14 + 8) : 0;
      if ( v15 ) /*0x6af8e5*/
      {
        v11 = (float *)OblivionDynamicCast( /*0x6af8fc*/
                         v15,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &TESObjectWEAP `RTTI Type Descriptor',
                         0);
        v38 = v11; /*0x6af8fe*/
      }
      else
      {
        v38 = 0; /*0x6af904*/
      }
      v16 = a3->vtbl->GetPos(a3); /*0x6af915*/
      v17 = unk_B3C0F0; /*0x6af926*/
      v46 = *v16; /*0x6af92c*/
      v48 = v16[1]; /*0x6af930*/
      v50 = v16[2]; /*0x6af934*/
      if ( !unk_B333B8 /*0x6af9cc*/
        || (v39 = *(float *)(v17 + 0x80) - v46,
            v44 = *(float *)(v17 + 0x84) - v48,
            v45 = *(float *)(v17 + 0x88) - v50,
            v40 = v39 * v39 + v44 * v44 + v45 * v45,
            v41 = sqrt(v40),
            v18 = v41,
            v42 = flt_B162FC * dbl_A2FAA0,
            v42 >= v18) )
      {
        if ( !a6 ) /*0x6af9d6*/
        {
          if ( !v11 ) /*0x6af9de*/
          {
            v20 = PlaySound___((int *)v17, "WPNSwishHand", 0x4102, 1); /*0x6afab4*/
LABEL_28:
            v21 = v20; /*0x6afae9*/
            if ( v20 ) /*0x6afaed*/
            {
              sub_6B7360(v20, v46, v48, v50); /*0x6afb0f*/
              sub_6AC3E0((_DWORD **)unk_B3C0F0, *v21, (LONG)a3); /*0x6afb22*/
              sub_6B7190(v21, 0); /*0x6afb2b*/
              sub_6B73E0(v21); /*0x6afb32*/
              FormHeapFree((unsigned int)v21); /*0x6afb38*/
            }
            return; /*0x6afb47*/
          }
          if ( byte_B162EC ) /*0x6af9e4*/
          {
            v36 = v11[0x25]; /*0x6af9f8*/
            if ( *GameSetting_GetSafeFloatPointer((float *)&fMediumWeaponSpeedMax_Audio) >= (double)v36 ) /*0x6afa0e*/
            {
              if ( *GameSetting_GetSafeFloatPointer((float *)&fMediumWeaponSpeedMax_Audio) <= (double)v36 /*0x6afa44*/
                || *GameSetting_GetSafeFloatPointer((float *)&fLargeWeaponSpeedMax_Audio) >= (double)v36 )
              {
LABEL_19:
                v19 = SoundMap_ResolveAnimSoundNote("WPNSwishLarge"); /*0x6afa46*/
LABEL_26:
                if ( !v19 ) /*0x6afacd*/
                  return; /*0x6afacd*/
                v20 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v19 + 0xC), 0x4102, 1); /*0x6afae4*/
                goto LABEL_28; /*0x6afae4*/
              }
LABEL_23:
              v19 = SoundMap_ResolveAnimSoundNote("WPNSwishMedium"); /*0x6afa9f*/
              goto LABEL_26; /*0x6afaa4*/
            }
          }
          else
          {
            v37 = v11[0x1F]; /*0x6afa55*/
            if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B162CC) <= (double)v37 ) /*0x6afa6b*/
            {
              if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B162CC) >= (double)v37 /*0x6afa9d*/
                || *GameSetting_GetSafeFloatPointer((float *)&fLargeWeaponWeightMin_Audio) <= (double)v37 )
              {
                goto LABEL_19; /*0x6afa9d*/
              }
              goto LABEL_23; /*0x6afa9d*/
            }
          }
          v19 = SoundMap_ResolveAnimSoundNote("WPNSwishSmall"); /*0x6afac6*/
          goto LABEL_26; /*0x6afac6*/
        }
        v22 = a6->vtbl->GetPos(a6); /*0x6afb56*/
        v51 = v22[2]; /*0x6afb60*/
        v47 = *v22; /*0x6afb6a*/
        v49 = v22[1]; /*0x6afb6e*/
        if ( a8 >= 0 ) /*0x6afb72*/
        {
          if ( a8 ) /*0x6afb7a*/
            v23 = SoundMap_ResolveAnimSoundNote("PHYArmorHitHeavy"); /*0x6afb81*/
          else
            v23 = SoundMap_ResolveAnimSoundNote("PHYArmorHitLight"); /*0x6afb88*/
          goto LABEL_40; /*0x6afb81*/
        }
        if ( a9 >= 0 ) /*0x6afb90*/
        {
          if ( !a9 ) /*0x6afb95*/
          {
            v32 = "WPNBlockShieldLight"; /*0x6afba3*/
            goto LABEL_39; /*0x6afba3*/
          }
          if ( a9 == 1 ) /*0x6afb9a*/
          {
            v32 = "WPNBlockShieldHeavy"; /*0x6afb9c*/
LABEL_39:
            v34 = 1; /*0x6afba8*/
            v23 = SoundMap_ResolveAnimSoundNote(v32); /*0x6afbb3*/
LABEL_40:
            if ( v23 ) /*0x6afbba*/
              v13 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v23 + 0xC), 0x4102, 1); /*0x6afbd2*/
          }
        }
        v33 = 0; /*0x6afbd4*/
        if ( !a10 ) /*0x6afbde*/
        {
          if ( Actor_IsCreature((Actor *)a6) && a6[2].member.baseExtraList.members.m_presenceBitfield[8] == 2 ) /*0x6afbf2*/
          {
            v24 = SoundMap_ResolveAnimSoundNote("PHYDamageBone"); /*0x6afbf9*/
          }
          else
          {
            v33 = 1; /*0x6afc04*/
            if ( Actor_IsCreature((Actor *)a6) ) /*0x6afbfd*/
              v24 = SoundMap_ResolveAnimSoundNote("PHYDamageFur"); /*0x6afc10*/
            else
              v24 = SoundMap_ResolveAnimSoundNote("PHYDamageFlesh"); /*0x6afc1d*/
          }
          if ( v24 ) /*0x6afc24*/
            v35 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v24 + 0xC), 0x4102, 1); /*0x6afc3c*/
        }
        v25 = 0; /*0x6afc44*/
        if ( a7 < 0 && Actor_IsCreature((Actor *)a3) ) /*0x6afc4e*/
        {
          v26 = (void *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a3->vtbl->GetBaseForm)( /*0x6afc63*/
                          a3,
                          a2,
                          a1);
          v27 = OblivionDynamicCast( /*0x6afc74*/
                  v26,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESCreature `RTTI Type Descriptor',
                  0);
          v28 = TESCreature_SelectSoundForAnimEnum(v27, 9u); /*0x6afc80*/
          if ( v28 ) /*0x6afc87*/
          {
            if ( unk_B3C0F0 ) /*0x6afc89*/
            {
              v12 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v28 + 0xC), 0x4102, 1); /*0x6afca3*/
              if ( v12 ) /*0x6afca7*/
                goto LABEL_73; /*0x6afca7*/
            }
          }
        }
        switch ( a7 ) /*0x6afcb2*/
        {
          case 0: /*0x6afcb2*/
          case 1: /*0x6afcb2*/
            v25 = 1; /*0x6afcbe*/
            if ( a11 ) /*0x6afcc0*/
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBladeFleshEnchanted"); /*0x6afcc7*/
            }
            else if ( !v33 || v34 ) /*0x6afcd5*/
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBlade"); /*0x6afce3*/
            }
            else
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBladeFlesh"); /*0x6afcdc*/
            }
            break; /*0x6afcc7*/
          case 2: /*0x6afcb2*/
          case 3: /*0x6afcb2*/
            v25 = 1; /*0x6afcea*/
            if ( a11 ) /*0x6afcec*/
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBluntFleshEnchanted"); /*0x6afcf3*/
            }
            else if ( !v33 || v34 ) /*0x6afd01*/
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBlunt"); /*0x6afd0f*/
            }
            else
            {
              v29 = SoundMap_ResolveAnimSoundNote("WPNHitBluntFlesh"); /*0x6afd08*/
            }
            break; /*0x6afcf3*/
          case 5: /*0x6afcb2*/
            v29 = SoundMap_ResolveAnimSoundNote("WPNHitArrow"); /*0x6afd16*/
            break; /*0x6afd16*/
          default:
            v29 = SoundMap_ResolveAnimSoundNote("WPNHitHand"); /*0x6afd23*/
            break; /*0x6afd23*/
        }
        if ( v29 && (v12 = OSGLobals_PlaySound((int *)unk_B3C0F0, *(void **)(v29 + 0xC), 0x4102, 1)) != 0 ) /*0x6afd4a*/
        {
LABEL_73:
          sub_6B7360(v12, v47, v49, v51); /*0x6afd6c*/
          if ( a3[1].vtbl ) /*0x6afd75*/
          {
            if ( v38 ) /*0x6afd80*/
            {
              v52 = dbl_A68610 - Rand5(kFaceEarNormalMatchRadius) + dbl_A2F928; /*0x6afd9f*/
              sub_6B7310(v12, v52); /*0x6afdaa*/
            }
          }
          v53 = sub_517DD0() * dbl_A77428; /*0x6afdbd*/
          sub_6B7280(v12, v53); /*0x6afdc8*/
          v30 = (int *)a6; /*0x6afdcd*/
          sub_6AC3E0((_DWORD **)unk_B3C0F0, *v12, (LONG)a6); /*0x6afddb*/
        }
        else
        {
          v30 = (int *)a6; /*0x6afde2*/
        }
        if ( v25 && v33 ) /*0x6afdef*/
        {
          v31 = v35; /*0x6afdf1*/
          if ( v35 ) /*0x6afdf7*/
          {
            sub_6B73C0(v35); /*0x6afdff*/
            sub_6B73E0(v35); /*0x6afe06*/
            FormHeapFree((unsigned int)v35); /*0x6afe0c*/
            v31 = 0; /*0x6afe14*/
          }
        }
        else
        {
          v31 = v35; /*0x6afe1b*/
          if ( v35 ) /*0x6afe21*/
          {
            if ( a4 > 0.0 ) /*0x6afe36*/
            {
              v54 = a4 / (double)Actor_GetBaseCalcAVi(v30, (int)v35, (int)v12, (int)v30, 8); /*0x6afe55*/
              if ( v54 > 1.0 ) /*0x6afe64*/
                v54 = 1.0; /*0x6afe66*/
              sub_517DF0(); /*0x6afe6e*/
              v43 = a4 * dbl_A77428; /*0x6afe7c*/
              sub_6B7280(v35, v43); /*0x6afe87*/
              sub_6B7360(v35, v47, v49, v51); /*0x6afea8*/
              v55 = 1.0 - v54 / dbl_A3F3E8 - dbl_A68610; /*0x6afec4*/
              sub_6B7310(v35, v55); /*0x6afecf*/
              sub_6AC3E0((_DWORD **)unk_B3C0F0, *v35, (LONG)v30); /*0x6afede*/
            }
          }
        }
        if ( v13 ) /*0x6afee9*/
        {
          sub_6B7360(v13, v47, v49, v51); /*0x6aff0b*/
          v56 = (double)(Game_RandomIntBelow(4) - 2) / fConst_200 + dbl_A2F928; /*0x6aff30*/
          sub_6B7310(v13, v56); /*0x6aff3b*/
          sub_6AC3E0((_DWORD **)unk_B3C0F0, *v13, (LONG)v30); /*0x6aff4b*/
          v57 = sub_517DE0() * dbl_A77428; /*0x6aff5e*/
          sub_6B7280(v13, v57); /*0x6aff69*/
          sub_6B71C0(v13, 0); /*0x6aff72*/
        }
        if ( v31 ) /*0x6aff79*/
          sub_6B71C0(v31, 0); /*0x6aff7f*/
        if ( v12 ) /*0x6aff86*/
        {
          sub_6B71C0(v12, 0); /*0x6aff8c*/
          sub_6B73E0(v12); /*0x6aff93*/
          FormHeapFree((unsigned int)v12); /*0x6aff99*/
        }
        if ( v31 ) /*0x6affa3*/
        {
          sub_6B73E0(v31); /*0x6affa7*/
          FormHeapFree((unsigned int)v31); /*0x6affad*/
        }
        if ( v13 ) /*0x6affb7*/
        {
          sub_6B73E0(v13); /*0x6affbb*/
          FormHeapFree((unsigned int)v13); /*0x6affc1*/
        }
      }
    }
  }
}
