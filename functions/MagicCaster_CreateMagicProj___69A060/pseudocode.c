void __usercall MagicCaster_CreateMagicProj__(TESObjectCELL **a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  float *v4; // edi
  int v5; // eax
  Actor *v6; // ebx
  int v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // eax
  TESObjectCELL *v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int y_low; // ebp
  float *v19; // eax
  int v20; // ebx
  double v21; // st7
  float *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  MagicCaster *p_magicCaster; // eax
  double projSpeed; // st7
  int v28; // eax
  int v29; // eax
  float *v30; // eax
  int v31; // ecx
  int v32; // edx
  TESForm::ModReferenceList *v33; // eax
  unsigned int v34; // edi
  double v35; // [esp+Ch] [ebp-74h]
  int v36; // [esp+Ch] [ebp-74h]
  int v37; // [esp+14h] [ebp-6Ch]
  int v38; // [esp+18h] [ebp-68h]
  int v39; // [esp+18h] [ebp-68h]
  int v40; // [esp+1Ch] [ebp-64h]
  double v41; // [esp+1Ch] [ebp-64h]
  int v42; // [esp+20h] [ebp-60h]
  int v43; // [esp+24h] [ebp-5Ch]
  float v44; // [esp+24h] [ebp-5Ch]
  char v45; // [esp+28h] [ebp-58h]
  float v46; // [esp+28h] [ebp-58h]
  int v47; // [esp+2Ch] [ebp-54h]
  _DWORD *v48; // [esp+30h] [ebp-50h]
  EffectSetting *FXEffect; // [esp+34h] [ebp-4Ch]
  double v50; // [esp+38h] [ebp-48h]
  int v51; // [esp+38h] [ebp-48h]
  float v52; // [esp+38h] [ebp-48h]
  _DWORD *StrongestItem; // [esp+40h] [ebp-40h]
  int v54; // [esp+44h] [ebp-3Ch]
  float v55; // [esp+44h] [ebp-3Ch]
  float v56; // [esp+48h] [ebp-38h]
  int v57; // [esp+48h] [ebp-38h]
  float v58; // [esp+4Ch] [ebp-34h]
  float v59; // [esp+4Ch] [ebp-34h]
  float v60; // [esp+4Ch] [ebp-34h]
  float AimPitch; // [esp+50h] [ebp-30h]
  float v62; // [esp+54h] [ebp-2Ch]
  float v63; // [esp+58h] [ebp-28h]
  float x; // [esp+5Ch] [ebp-24h]
  float y; // [esp+60h] [ebp-20h]
  float v66; // [esp+64h] [ebp-1Ch]
  float v67[3]; // [esp+68h] [ebp-18h] BYREF
  int v68[3]; // [esp+74h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1) ) /*0x69a06e*/
  {
    v4 = (float *)(*(int (__thiscall **)(TESObjectCELL **))&(*a1)->members.fullName.name.m_dataLen)(a1); /*0x69a081*/
    v5 = (*(int (__thiscall **)(TESObjectCELL **))&(*a1)->members.fullName.name.m_dataLen)(a1); /*0x69a08a*/
    if ( v5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x190))(v5) ) /*0x69a09c*/
    {
      v6 = (Actor *)(a1 + 0xFFFFFFE9); /*0x69a0a2*/
      v47 = (int)(a1 + 0xFFFFFFE9); /*0x69a0a5*/
    }
    else
    {
      v47 = 0; /*0x69a0ab*/
      v6 = 0; /*0x69a0af*/
    }
    if ( (*(int (__thiscall **)(TESObjectCELL **))&(*a1)->members.extraData.members.m_presenceBitfield[8])(a1) ) /*0x69a0b8*/
    {
      v7 = (*(int (__thiscall **)(TESObjectCELL **))&(*a1)->members.extraData.members.m_presenceBitfield[8])(a1); /*0x69a0c5*/
      v48 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7); /*0x69a0d0*/
    }
    else
    {
      v48 = 0; /*0x69a0d6*/
    }
    v8 = (*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1); /*0x69a0e4*/
    StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem((_DWORD *)(v8 + 0xC), 2, 0, v38, v40, v42, v43, v45); /*0x69a0fb*/
    v9 = (void *)(*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1); /*0x69a0ff*/
    FXEffect = MagicItem_GetFXEffect(v9, 0); /*0x69a10a*/
    if ( StrongestItem ) /*0x69a10e*/
    {
      if ( v4 ) /*0x69a116*/
      {
        HIBYTE(v46) = 1; /*0x69a12a*/
        v10 = (*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1); /*0x69a12f*/
        if ( EffectItemList_HasEffect((_DWORD *)(v10 + 0xC), 0x454C4554, 0x48) ) /*0x69a136*/
        {
          HIBYTE(v46) = 0; /*0x69a146*/
          v11 = (*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1); /*0x69a14b*/
          if ( v11 ) /*0x69a14f*/
          {
            v12 = v11 + 0xC; /*0x69a151*/
            if ( v11 != 0xFFFFFFF4 ) /*0x69a156*/
            {
              do /*0x69a196*/
              {
                v13 = *(_DWORD **)(v12 + 4); /*0x69a158*/
                if ( v13 ) /*0x69a15d*/
                {
                  if ( *v13 == 0x454C4554 ) /*0x69a165*/
                  {
                    v14 = *a1; /*0x69a167*/
                    v15 = (*(int (__thiscall **)(TESObjectCELL **, _DWORD *, _DWORD))(*a1)->members.extraData.members.m_presenceBitfield)( /*0x69a171*/
                            a1,
                            v13,
                            0);
                    v16 = ((int (__thiscall *)(TESObjectCELL **, int))v14->members.land)(a1, v15); /*0x69a179*/
                    ((void (__thiscall *)(TESObjectCELL **, int))(*a1)->members.extraData.vtbl)(a1, v16); /*0x69a183*/
                  }
                  else
                  {
                    HIBYTE(v46) = 1; /*0x69a187*/
                  }
                }
                v17 = *(_DWORD *)(v12 + 8); /*0x69a18c*/
                if ( !v17 ) /*0x69a191*/
                  break; /*0x69a191*/
                v12 = v17 - 4; /*0x69a193*/
              }
              while ( v12 ); /*0x69a196*/
            }
            v6 = (Actor *)v47; /*0x69a198*/
          }
        }
        y_low = LODWORD(g_zeroNiPoint3.y); /*0x69a1a9*/
        x = g_zeroNiPoint3.x; /*0x69a1af*/
        y = g_zeroNiPoint3.y; /*0x69a1b3*/
        if ( v6 ) /*0x69a1c3*/
        {
          v63 = v6->vtbl->super.GetZRotation((MobileObject *)v6); /*0x69a1d5*/
          AimPitch = Actor_GetAimPitch(v6); /*0x69a1e0*/
          v19 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x174))(v4); /*0x69a1ee*/
          v56 = v19[1]; /*0x69a1f8*/
          v58 = v19[2]; /*0x69a204*/
          v55 = *v19; /*0x69a20c*/
          v50 = *(float *)((*(int (__thiscall **)(float *, float *))(*(_DWORD *)v4 + 0x15C))(v4, v67) + 8); /*0x69a21a*/
          *(float *)&v50 = v50 /*0x69a234*/
                         - *(float *)((*(int (__thiscall **)(float *, int *))(*(_DWORD *)v4 + 0x158))(v4, v68) + 8);
          v66 = *(float *)&v50 * dbl_A56E18; /*0x69a242*/
          *(float *)&v54 = x + v55; /*0x69a24e*/
          v20 = v54; /*0x69a252*/
          *(float *)&v57 = v56 + y; /*0x69a25e*/
          v21 = v58 + v66; /*0x69a266*/
        }
        else
        {
          *(float *)&v51 = FXEffect->projSpeed * flt_B37ED0[6]; /*0x69a289*/
          v22 = (float *)sub_619B10((int)v68, (int)v4, *(float *)&v48, v51, 0.0, 2); /*0x69a29d*/
          x = *v22 + v4[8]; /*0x69a2ac*/
          y = v22[1] + v4[9]; /*0x69a2b6*/
          y_low = LODWORD(y); /*0x69a2ba*/
          AimPitch = x; /*0x69a2c8*/
          v66 = v22[2] + v4[0xA]; /*0x69a2d2*/
          v63 = v66; /*0x69a2da*/
          v23 = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x174))(v4); /*0x69a2e0*/
          v20 = *(_DWORD *)v23; /*0x69a2e8*/
          v57 = *(int *)(v23 + 4); /*0x69a2ec*/
          v59 = *(float *)(v23 + 8); /*0x69a2f4*/
          v50 = *(float *)((*(int (__thiscall **)(float *, int *))(*(_DWORD *)v4 + 0x15C))(v4, v68) + 8); /*0x69a308*/
          v21 = (v50 - *(float *)((*(int (__thiscall **)(float *, float *))(*(_DWORD *)v4 + 0x158))(v4, v67) + 8)) /*0x69a328*/
              * dbl_A2FAA0
              + v59;
        }
        v60 = v21; /*0x69a32e*/
        v24 = (*(int (__thiscall **)(TESObjectCELL **))&(*a1)->members.flags0)(a1); /*0x69a337*/
        if ( v24 ) /*0x69a33b*/
        {
          v20 = *(_DWORD *)(v24 + 0x88); /*0x69a343*/
          v25 = *(int *)(v24 + 0x90); /*0x69a349*/
          v57 = *(int *)(v24 + 0x8C); /*0x69a34f*/
        }
        else
        {
          *(float *)&v25 = v21; /*0x69a355*/
        }
        if ( reference ) /*0x69a359*/
          p_magicCaster = &reference->super.super.magicCaster; /*0x69a362*/
        else
          p_magicCaster = 0; /*0x69a367*/
        if ( a1 != (TESObjectCELL **)p_magicCaster && v47 && v48 ) /*0x69a381*/
        {
          if ( FXEffect ) /*0x69a38d*/
            projSpeed = FXEffect->projSpeed; /*0x69a38f*/
          else
            projSpeed = 1.0; /*0x69a394*/
          v52 = projSpeed; /*0x69a39b*/
          *(float *)&v50 = v52 * *GameSetting_GetSafeFloatPointer(&flt_B37ED0[6]); /*0x69a3b6*/
          v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 0x330))(v47); /*0x69a3ba*/
          if ( v28 ) /*0x69a3be*/
            v29 = *(_DWORD *)(v28 + 0x180); /*0x69a3c0*/
          else
            v29 = 1; /*0x69a3c8*/
          *((float *)&v35 + 1) = 0.0; /*0x69a3db*/
          *(float *)&v35 = *(float *)&v50; /*0x69a3e3*/
          v30 = Combat_PredictAimPoint_Setup( /*0x69a3f9*/
                  (int)v68,
                  v20,
                  *(float *)&v57,
                  *(float *)&v25,
                  v48,
                  v35,
                  *(float *)&v29,
                  v39,
                  v41,
                  v44,
                  v46,
                  v47,
                  (int)v48,
                  (int)FXEffect,
                  SLODWORD(v50),
                  SHIDWORD(v50),
                  (int)StrongestItem,
                  v54,
                  *(float *)&v57,
                  v60,
                  AimPitch,
                  v62,
                  v63,
                  x,
                  y,
                  v66,
                  v67[0],
                  v67[1],
                  v67[2]);
          v31 = *(_DWORD *)v30; /*0x69a3fe*/
          y_low = *((_DWORD *)v30 + 1); /*0x69a400*/
          v32 = *((_DWORD *)v30 + 2); /*0x69a403*/
        }
        else
        {
          v31 = LODWORD(AimPitch); /*0x69a40b*/
          v32 = LODWORD(v63); /*0x69a40f*/
        }
        if ( HIBYTE(v46) ) /*0x69a418*/
        {
          v36 = v31; /*0x69a41f*/
          v37 = v32; /*0x69a428*/
          v33 = (TESForm::ModReferenceList *)(*(int (__thiscall **)(TESObjectCELL **))(*a1)->members.extraData.members.m_presenceBitfield)(a1); /*0x69a449*/
          sub_69F490(a2, a3, a1, 0, a1[1], v33, StrongestItem, &FXEffect->super, v20, v57, v25, v36, y_low, v37); /*0x69a453*/
          a1[1] = 0; /*0x69a45b*/
        }
        v34 = (unsigned int)a1[1]; /*0x69a462*/
        if ( v34 ) /*0x69a467*/
        {
          MagicCaster_CastingVFX_destr(a1[1]); /*0x69a46b*/
          FormHeapFree(v34); /*0x69a471*/
        }
        a1[1] = 0; /*0x69a479*/
      }
    }
  }
}
