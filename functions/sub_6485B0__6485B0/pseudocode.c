void __userpurge sub_6485B0(int a1@<ebx>, Actor *a2, int a3)
{
  Actor *v3; // edi
  void *v4; // eax
  PlayerCharacter *v5; // ebp
  void (__thiscall *Unk_D2)(Actor *); // edx
  double v7; // st7
  SInt32 (__thiscall *GetActorValue)(Actor *, AVCode); // edx
  SInt32 (__thiscall *v9)(Actor *, AVCode); // edx
  int v10; // eax
  LowProcess *process; // ecx
  int v12; // eax
  int v13; // eax
  void **v14; // eax
  double v15; // st7
  int *v16; // ebx
  int v17; // esi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // ebx
  int SchoolAV; // eax
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  int v29; // [esp+20h] [ebp-40h]
  float FatigueFraction; // [esp+24h] [ebp-3Ch]
  char v31; // [esp+28h] [ebp-38h]
  float v32; // [esp+2Ch] [ebp-34h]
  float v33; // [esp+2Ch] [ebp-34h]
  int v35; // [esp+34h] [ebp-2Ch]
  _DWORD *v36; // [esp+40h] [ebp-20h]
  float v37; // [esp+44h] [ebp-1Ch]
  float v38; // [esp+48h] [ebp-18h]
  _DWORD *v39; // [esp+4Ch] [ebp-14h]
  int v40; // [esp+50h] [ebp-10h] BYREF
  float v41; // [esp+54h] [ebp-Ch]
  double v42; // [esp+58h] [ebp-8h]

  v3 = a2;
  sub_5E2E00(a2);
  v5 = (PlayerCharacter *)OblivionDynamicCast(
                            v4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  if ( !v5 || v5->vtbl->super.super.super.IsDead((TESObjectREFR *)v5, 0) )
  {
    sub_5EAE70(v3, a1, (int)v3, v35);
  }
  else if ( v5 != TESDataHandler_g_PlayerRef )
  {
    *(float *)&v40 = COERCE_FLOAT(v5->vtbl->super.GetActorValue((Actor *)v5, kActorVal_ResistNormalWeapons));
    Unk_D2 = v5->vtbl->super.Unk_D2;
    v42 = (double)v40;
    v7 = ((double (__thiscall *)(PlayerCharacter *))Unk_D2)(v5);
    GetActorValue = v5->vtbl->super.GetActorValue;
    v41 = v7 / fCostant_100 * v42;
    *(float *)&v40 = COERCE_FLOAT(GetActorValue((Actor *)v5, kActorVal_Willpower));
    v9 = v5->vtbl->super.GetActorValue;
    v42 = (double)v40 * dbl_A70398;
    v10 = v9((Actor *)v5, kActorVal_ResistMagic);
    process = v3->members.super.process;
    *(float *)&v42 = (double)v10 + v42;
    *(float *)&a2 = 0.0;
    if ( process->GetEquippedWeaponData(process, 1) )
    {
      v13 = (int)v3->members.super.process->GetEquippedWeaponData(v3->members.super.process, 1);
      if ( v13 )
      {
        if ( OblivionDynamicCast(
               *(void **)(v13 + 8),
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectWEAP `RTTI Type Descriptor',
               0) )
        {
          *(float *)&a2 = ((double (__thiscall *)(LowProcess *))v3->members.super.process->GetUnk0F8)(v3->members.super.process);
          if ( *(float *)&a2 <= 0.0 )
          {
            v14 = (void **)v3->members.super.process->GetEquippedWeaponData(v3->members.super.process, 1);
            *(float *)&a2 = sub_612A90(v3, v14);
            ((void (__thiscall *)(LowProcess *, Actor *))v3->members.super.process->SetUnk0F8)(
              v3->members.super.process,
              a2);
          }
        }
      }
    }
    else
    {
      *(float *)&v40 = 0.0;
      FatigueFraction = Actor_GetFatigueFraction(v3, a1, (int)v3);
      v31 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD, int))v3->vtbl->GetActorValue)(
              v3,
              0,
              LODWORD(FatigueFraction),
              1);
      v29 = ((int (__thiscall *)(Actor *))v3->vtbl->GetActorValue)(v3);
      v12 = ((int (__thiscall *)(Actor *))v3->vtbl->GetActorValue)(v3);
      Calc_HandToHandDamage(v12, 0x11, v29, COERCE_FLOAT(7), v31, (float *)&a2, (float *)&v40);
    }
    v37 = *(float *)&a2 / fCostant_100;
    v15 = 0.0;
    v16 = sub_5E8ED0(v3, 1);
    v38 = 0.0;
    v40 = (int)v16;
    v39 = 0;
    v36 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          goto LABEL_41;
        v16 = (int *)v16[1];
        v18 = *(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x10);
        if ( v18 != 2 )
          break;
        if ( v17 )
          v19 = v17 + 0x18;
        else
          v19 = 0;
        sub_5E0970(v3, v19);
        v32 = v15;
        v15 = sub_546CA0(v32);
        if ( v15 <= *(float *)&SrcStr )
          goto LABEL_40;
        v20 = v36;
        if ( v36 )
          goto LABEL_36;
        v21 = (_DWORD *)FormHeapAlloc(8u);
        if ( v21 )
        {
          if ( v17 )
            *v21 = v17 + 0x18;
          else
            *v21 = 0;
          v21[1] = 0;
          v36 = v21;
        }
        else
        {
          v36 = 0;
        }
LABEL_40:
        if ( !v16 )
          goto LABEL_41;
      }
      if ( v18 != 1 )
        goto LABEL_40;
      v22 = v17 ? v17 + 0x18 : 0;
      sub_5E0970(v3, v22);
      v33 = v15;
      v15 = sub_546CA0(v33);
      if ( v15 <= *(float *)&SrcStr )
        goto LABEL_40;
      v20 = v39;
      if ( !v39 )
      {
        v23 = (_DWORD *)FormHeapAlloc(8u);
        if ( v23 )
        {
          if ( v17 )
            *v23 = v17 + 0x18;
          else
            *v23 = 0;
          v23[1] = 0;
          v39 = v23;
        }
        else
        {
          v39 = 0;
        }
        goto LABEL_40;
      }
LABEL_36:
      if ( v17 )
        v24 = v17 + 0x18;
      else
        v24 = 0;
      *v20 = v24;
      goto LABEL_40;
    }
LABEL_41:
    v25 = a3;
    v26 = a1;
    if ( *(float *)&a3 == 0.0 )
    {
LABEL_52:
      if ( *(float *)&v40 != 0.0 )
      {
        BSSimpleList_Clear((_DWORD *)v40);
        FormHeapFree(v40);
      }
    }
    else
    {
      while ( v3->vtbl->IsInCombat(v3, 1) )
      {
        if ( v39 || v36 )
        {
          SchoolAV = EffectItemList_GetSchoolAV();
          *(float *)&a3 = COERCE_FLOAT(v3->vtbl->GetActorValue(v3, (AVCode)SchoolAV));
          v38 = (double)a3 * dbl_A2FC68 / fCostant_100;
        }
        v37 = v37 - v41;
        v38 = v38 - *(float *)&v42;
        DamageAV_F = v5->vtbl->super.DamageAV_F;
        if ( v38 >= (double)v37 )
          *(float *)&a3 = 0.0 * dbl_A3D360;
        else
          *(float *)&a3 = *(float *)&a2 * dbl_A3D360;
        ((void (__stdcall *)(int, int, Actor *))DamageAV_F)(8, a3, v3);
        if ( v5->vtbl->super.super.super.IsDead((TESObjectREFR *)v5, 0) )
          sub_5EAE70(v3, v26, (int)v3, v35);
        if ( !--v25 )
          goto LABEL_52;
      }
    }
  }
}
