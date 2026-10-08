// TES4 authoritative fall-impact damage path. Consumes proxy flag 0x80 and fall timer +0x320 after MobileObject::Move returns; this is the final Slowfall safety interception point.
void __thiscall Actor_FallImpact(Actor *a1, float a2, float a3, Actor *a4, int a5)
{
  double v5; // st5
  PathLow *v8; // edi
  PathLow *v9; // eax
  bhkCharacterProxy *CharProxy; // ebp
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  int v14; // edi
  float *v15; // eax
  float *v16; // eax
  char v17; // al
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  double v21; // st7
  __m128 *v22; // eax
  double v23; // st6
  bhkCharacterProxy *v24; // ebx
  MobileObject *v25; // eax
  MobileObject *v26; // edi
  double v27; // st7
  char CanFly; // bl
  TESForm *v29; // ebp
  double v30; // st7
  MobileObjectVtbl *vtbl; // esi
  double v32; // st7
  float v33; // [esp+2Ch] [ebp-3Ch]
  int v34; // [esp+2Ch] [ebp-3Ch]
  float v35; // [esp+40h] [ebp-28h]
  float v36; // [esp+48h] [ebp-20h]
  float v37; // [esp+4Ch] [ebp-1Ch]
  float v38; // [esp+50h] [ebp-18h]
  float v39; // [esp+54h] [ebp-14h]
  float v40; // [esp+58h] [ebp-10h]
  float v41[2]; // [esp+5Ch] [ebp-Ch] BYREF
  float v42; // [esp+64h] [ebp-4h]
  float a2a; // [esp+6Ch] [ebp+4h]
  float a2_4a; // [esp+70h] [ebp+8h]
  float a2_4; // [esp+70h] [ebp+8h]
  float a3a; // [esp+74h] [ebp+Ch]
  float a3c; // [esp+74h] [ebp+Ch]
  float a3b; // [esp+74h] [ebp+Ch]
  float a3d; // [esp+74h] [ebp+Ch]

  if ( !sub_5E6C10((MobileObject *)a1) || ((unsigned __int8)a4 & 0x3F) != 0 ) /*0x5efaf4*/
  {
    if ( a1->members.super.process ) /*0x5efaff*/
    {
      v8 = 0; /*0x5efb1b*/
      if ( a1->members.super.process->CreatePath(a1->members.super.process) ) /*0x5efb1d*/
      {
        v9 = a1->members.super.process->CreatePath(a1->members.super.process); /*0x5efb2e*/
        if ( (*(int (__thiscall **)(PathLow *))(*(_DWORD *)v9 + 4))(v9) == 2 ) /*0x5efb3c*/
          v8 = a1->members.super.process->CreatePath(a1->members.super.process); /*0x5efb4b*/
      }
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x5efb54*/
      if ( CharProxy ) /*0x5efb58*/
      {
        if ( v8 ) /*0x5efb60*/
        {
          if ( !(*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)v8 + 0xC))(v8) && sub_5E1550(CharProxy) ) /*0x5efb79*/
          {
            sub_68B3F0((int)v8); /*0x5efb88*/
            v39 = v11[1]; /*0x5efb95*/
            v38 = *v11; /*0x5efb9b*/
            v40 = v11[2]; /*0x5efb9f*/
            v12 = a1->vtbl->super.super.GetPos(a1); /*0x5efbab*/
            v36 = v12[1]; /*0x5efbc1*/
            v37 = v12[2]; /*0x5efbc5*/
            v41[0] = *v12 - v38; /*0x5efbcd*/
            v41[1] = v36 - v39; /*0x5efbd9*/
            v42 = v37 - v40; /*0x5efbe5*/
            Vector3_NormalizeInPlace(v41); /*0x5efbe9*/
            a2_4a = v42 * dbl_A6E740; /*0x5efbfd*/
            sub_65A650((TESObjectREFR *)a1, a2_4a); /*0x5efc08*/
          }
        }
        if ( hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) == 5 ) /*0x5efc1b*/
        {
          if ( ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) ) /*0x5efc27*/
          {
            if ( *(float *)(LODWORD(a3) + 4) <= 0.0 ) /*0x5efc3a*/
              v13 = flt_A6E734; /*0x5efc44*/
            else
              v13 = flt_A6E738; /*0x5efc3c*/
            v33 = v13; /*0x5efc4a*/
            sub_65A650((TESObjectREFR *)a1, v33); /*0x5efc4d*/
          }
        }
        v14 = *((_DWORD *)CharProxy + 0xDA); /*0x5efc52*/
        if ( v14 ) /*0x5efc5a*/
        {
          a2_4 = 0.0; /*0x5efc6a*/
          v15 = a1->vtbl->super.super.GetPos(a1); /*0x5efc70*/
          v35 = TESObjectREFR::GetDistanceToPoint((float *)reference, v15); /*0x5efc7e*/
          v34 = *((_DWORD *)g_WorldSceneReceiverRoot + 0x37); /*0x5efc90*/
          v16 = (float *)a1->vtbl->super.super.GetNiNode(a1); /*0x5efc99*/
          v17 = sub_47F7B0(v16, v34); /*0x5efc9c*/
          v18 = dbl_A2FC70; /*0x5efca1*/
          if ( !v17 ) /*0x5efcac*/
            v35 = v35 + v18; /*0x5efcb4*/
          v19 = v35 < v18; /*0x5efcbc*/
          v20 = v35 == v18; /*0x5efcbc*/
          v21 = v35; /*0x5efcc0*/
          if ( !v19 && !v20 ) /*0x5efcc2*/
          {
            if ( flt_A3765C <= v21 ) /*0x5efcd4*/
            {
              if ( v21 >= flt_A6E730 ) /*0x5efcef*/
                a2_4 = flt_A3D8F0; /*0x5efd03*/
              else
                a2_4 = flt_A379CC; /*0x5efcf7*/
            }
            else
            {
              a2_4 = flt_A31C80; /*0x5efcde*/
            }
          }
          *(float *)(v14 + 0x60) = a2_4 * hkFactor; /*0x5efd15*/
        }
      }
    }
    v22 = MobileObject_Move((MobileObject *)a1, a2, (NiPoint3 *)LODWORD(a3), (int)a4); /*0x5efd28*/
    if ( v22 ) /*0x5efd35*/
    {
      if ( (v22[0x1F].m128_i32[1] & 0x80) != 0 ) /*0x5efd47*/
      {
        v22[0x1F].m128_i32[1] &= ~0x80u; /*0x5efd4d*/
        a3a = v22[0x32].m128_f32[0]; /*0x5efd5d*/
        v22[0x32].m128_f32[0] = 0.0; /*0x5efd63*/
        v23 = unk_B37478; /*0x5efd6d*/
        if ( v23 <= a3a ) /*0x5efd7a*/
        {
          v24 = (bhkCharacterProxy *)v22; /*0x5efd8e*/
          a2a = a3a * unk_B37468 + unk_B37460; /*0x5efd98*/
          v25 = (MobileObject *)((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1); /*0x5efd9c*/
          v26 = v25; /*0x5efd9e*/
          if ( v25 ) /*0x5efda2*/
          {
            if ( MobileObject_GetCharProxy(v25) ) /*0x5efda6*/
              v24 = MobileObject_GetCharProxy(v26); /*0x5efdb6*/
          }
          v27 = *((float *)v24 + 0xC4) * unk_B37488; /*0x5efdc0*/
          CanFly = 0; /*0x5efdce*/
          a3c = v27 + unk_B37480; /*0x5efdd6*/
          a3b = a3c * a2a; /*0x5efde2*/
          v29 = a1->vtbl->super.super.GetBaseForm(a1); /*0x5efde8*/
          if ( (!v29 /*0x5efe15*/
             || !a1->vtbl->super.super.IsActor((TESObjectREFR *)a1)
             || (CanFly = TESActorBase_CanFly((TESActorBase *)v29)) == 0)
            && !a1->vtbl->GetMountedHorse(a1) )
          {
            if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) ) /*0x5efe25*/
              CanFly = 1; /*0x5efe2b*/
          }
          if ( !a1->vtbl->GetMountedHorse(a1) && !CanFly ) /*0x5efe43*/
          {
            ((void (__thiscall *)(Actor *, int, int, _DWORD))a1->vtbl->ModExperience)(a1, 0x1A, 1, 0.0);// Qualifying fall impact: Acrobatics (0x1A), useValue1, identity scale (0.0). /*0x5efe5d*/
            v30 = ((double (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))a1->vtbl->ApplyDamage)( /*0x5efe7b*/
                    a1,
                    LODWORD(a3b),
                    0.0,
                    0);
            Actor_PlayPainFX((TESObjectREFR *)a1, v5, v30, v23, (int *)1, 1); /*0x5efe83*/
            if ( v26 ) /*0x5efe8a*/
            {
              if ( *(float *)GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37490]) > 0.0 ) /*0x5efe9f*/
              {
                ((void (__thiscall *)(MobileObject *, int, int, _DWORD))v26->vtbl[1].super.IsDead)(v26, 0x1A, 1, 0.0);// Secondary qualifying fall-impact actor: Acrobatics (0x1A), useValue1, identity scale (0.0). /*0x5efeb3*/
                vtbl = v26->vtbl; /*0x5efeb5*/
                a3d = a3b * *(float *)GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37490]); /*0x5efeda*/
                v32 = ((double (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD))vtbl[1].super.super.LoadForm)( /*0x5efee5*/
                        v26,
                        LODWORD(a3d),
                        0.0,
                        0);
                Actor_PlayPainFX((TESObjectREFR *)v26, v5, v32, v23, (int *)1, 1); /*0x5efeed*/
              }
            }
          }
        }
      }
    }
  }
}
