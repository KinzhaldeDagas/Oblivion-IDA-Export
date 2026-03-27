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
  NiCamera *camera; // [esp+2Ch] [ebp-3Ch]
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

  if ( !sub_5E6C10((MobileObject *)a1) || ((unsigned __int8)a4 & 0x3F) != 0 )
  {
    if ( a1->members.super.process )
    {
      v8 = 0;
      if ( a1->members.super.process->CreatePath(a1->members.super.process) )
      {
        v9 = a1->members.super.process->CreatePath(a1->members.super.process);
        if ( (*(int (__thiscall **)(PathLow *))(*(_DWORD *)v9 + 4))(v9) == 2 )
          v8 = a1->members.super.process->CreatePath(a1->members.super.process);
      }
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
      if ( CharProxy )
      {
        if ( v8 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(PathLow *))(*(_DWORD *)v8 + 0xC))(v8) && sub_5E1550(CharProxy) )
          {
            sub_68B3F0((int)v8);
            v39 = v11[1];
            v38 = *v11;
            v40 = v11[2];
            v12 = a1->vtbl->super.super.GetPos(a1);
            v36 = v12[1];
            v37 = v12[2];
            v41[0] = *v12 - v38;
            v41[1] = v36 - v39;
            v42 = v37 - v40;
            sub_43F350(v41);
            a2_4a = v42 * dbl_A6E740;
            sub_65A650((TESObjectREFR *)a1, a2_4a);
          }
        }
        if ( sub_88D370((_DWORD *)CharProxy + 0x78) == 5 )
        {
          if ( ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) )
          {
            if ( *(float *)(LODWORD(a3) + 4) <= 0.0 )
              v13 = flt_A6E734;
            else
              v13 = flt_A6E738;
            v33 = v13;
            sub_65A650((TESObjectREFR *)a1, v33);
          }
        }
        v14 = *((_DWORD *)CharProxy + 0xDA);
        if ( v14 )
        {
          a2_4 = 0.0;
          v15 = a1->vtbl->super.super.GetPos(a1);
          v35 = sub_4D7E30((float *)TESDataHandler_g_PlayerRef, v15);
          camera = g_worldScenegraph->camera;
          v16 = (float *)a1->vtbl->super.super.GetNiNode(a1);
          v17 = sub_47F7B0(v16, (int)camera);
          v18 = dbl_A2FC70;
          if ( !v17 )
            v35 = v35 + v18;
          v19 = v35 < v18;
          v20 = v35 == v18;
          v21 = v35;
          if ( !v19 && !v20 )
          {
            if ( flt_A3765C <= v21 )
            {
              if ( v21 >= flt_A6E730 )
                a2_4 = flt_A3D8F0;
              else
                a2_4 = flt_A379CC;
            }
            else
            {
              a2_4 = flt_A31C80;
            }
          }
          *(float *)(v14 + 0x60) = a2_4 * hkFactor;
        }
      }
    }
    v22 = sub_65AF30((float *)a1, a2, SLODWORD(a3), (int)a4);
    if ( v22 )
    {
      if ( (v22[0x1F].m128_i32[1] & 0x80) != 0 )
      {
        v22[0x1F].m128_i32[1] &= ~0x80u;
        a3a = v22[0x32].m128_f32[0];
        v22[0x32].m128_f32[0] = 0.0;
        v23 = flt_B37478;
        if ( v23 <= a3a )
        {
          v24 = (bhkCharacterProxy *)v22;
          a2a = a3a * flt_B37468 + flt_B37460;
          v25 = (MobileObject *)((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1);
          v26 = v25;
          if ( v25 )
          {
            if ( MobileObject_GetCharProxy(v25) )
              v24 = MobileObject_GetCharProxy(v26);
          }
          v27 = *((float *)v24 + 0xC4) * flt_B37488;
          CanFly = 0;
          a3c = v27 + flt_B37480;
          a3b = a3c * a2a;
          v29 = a1->vtbl->super.super.GetBaseForm(a1);
          if ( (!v29
             || !a1->vtbl->super.super.IsActor((TESObjectREFR *)a1)
             || (CanFly = TESActorBase_CanFly((TESActorBase *)v29)) == 0)
            && !a1->vtbl->GetMountedHorse(a1) )
          {
            if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) )
              CanFly = 1;
          }
          if ( !a1->vtbl->GetMountedHorse(a1) && !CanFly )
          {
            ((void (__thiscall *)(Actor *, int, int, _DWORD))a1->vtbl->ModExperience)(a1, 0x1A, 1, 0.0);
            v30 = ((double (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))a1->vtbl->ApplyDamage)(
                    a1,
                    LODWORD(a3b),
                    0.0,
                    0);
            Actor_PlayPainFX((TESObjectREFR *)a1, v5, v30, v23, (int *)1, 1);
            if ( v26 )
            {
              if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fJumpFallRiderMult) > 0.0 )
              {
                ((void (__thiscall *)(MobileObject *, int, int, _DWORD))v26->vtbl[1].super.IsDead)(v26, 0x1A, 1, 0.0);
                vtbl = v26->vtbl;
                a3d = a3b * *(float *)GameSetting_GetSafeFloatPointer((int *)&fJumpFallRiderMult);
                v32 = ((double (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD))vtbl[1].super.super.LoadForm)(
                        v26,
                        LODWORD(a3d),
                        0.0,
                        0);
                Actor_PlayPainFX((TESObjectREFR *)v26, v5, v32, v23, (int *)1, 1);
              }
            }
          }
        }
      }
    }
  }
}
