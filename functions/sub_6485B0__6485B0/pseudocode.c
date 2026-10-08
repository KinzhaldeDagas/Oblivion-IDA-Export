void __userpurge sub_6485B0(int a1@<ebx>, Actor *a2, float a3)
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
  SInt32 v12; // eax
  int v13; // eax
  void **v14; // eax
  double v15; // st7
  float v16; // ebx
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  float v25; // esi
  int v26; // ebx
  int SchoolAV; // eax
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  int v29; // [esp+20h] [ebp-40h]
  float FatigueFraction; // [esp+24h] [ebp-3Ch]
  char v31; // [esp+28h] [ebp-38h]
  float v32; // [esp+2Ch] [ebp-34h]
  float v33; // [esp+2Ch] [ebp-34h]
  int v34; // [esp+30h] [ebp-30h]
  int v35; // [esp+34h] [ebp-2Ch]
  int v36; // [esp+38h] [ebp-28h]
  int v37; // [esp+3Ch] [ebp-24h]
  _DWORD *v38; // [esp+40h] [ebp-20h]
  float v39; // [esp+44h] [ebp-1Ch]
  float v40; // [esp+48h] [ebp-18h]
  _DWORD *v41; // [esp+4Ch] [ebp-14h]
  int v42; // [esp+50h] [ebp-10h] BYREF
  float v43; // [esp+54h] [ebp-Ch]
  double v44; // [esp+58h] [ebp-8h]

  v3 = a2; /*0x6485b6*/
  sub_5E2E00(a2); /*0x6485ca*/
  v5 = (PlayerCharacter *)OblivionDynamicCast( /*0x6485d5*/
                            v4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  if ( !v5 || v5->vtbl->super.super.super.IsDead((TESObjectREFR *)v5, 0) )
  {
    sub_5EAE70(v3, a1, (int)v3, v35); /*0x6489ce*/
  }
  else if ( v5 != reference )
  {
    *(float *)&v42 = COERCE_FLOAT(v5->vtbl->super.GetActorValue((Actor *)v5, kActorVal_ResistNormalWeapons)); /*0x648613*/
    Unk_D2 = v5->vtbl->super.Unk_D2; /*0x64861e*/
    v44 = (double)v42; /*0x648626*/
    v7 = ((double (__thiscall *)(PlayerCharacter *))Unk_D2)(v5); /*0x64862a*/
    GetActorValue = v5->vtbl->super.GetActorValue; /*0x648635*/
    v43 = v7 / fCostant_100 * v44; /*0x648643*/
    *(float *)&v42 = COERCE_FLOAT(GetActorValue((Actor *)v5, kActorVal_Willpower)); /*0x648649*/
    v9 = v5->vtbl->super.GetActorValue; /*0x648654*/
    v44 = (double)v42 * dbl_A70398; /*0x648664*/
    v10 = v9((Actor *)v5, kActorVal_ResistMagic); /*0x648668*/
    process = v3->members.super.process; /*0x64866a*/
    *(float *)&v44 = (double)v10 + v44; /*0x64867b*/
    *(float *)&a2 = 0.0; /*0x648681*/
    if ( process->GetEquippedWeaponData(process, 1) ) /*0x64868d*/
    {
      v13 = (int)v3->members.super.process->GetEquippedWeaponData(v3->members.super.process, 1); /*0x6486f3*/
      if ( v13 ) /*0x6486f7*/
      {
        if ( OblivionDynamicCast( /*0x648709*/
               *(void **)(v13 + 8),
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectWEAP `RTTI Type Descriptor',
               0) )
        {
          *(float *)&a2 = ((double (__thiscall *)(LowProcess *))v3->members.super.process->GetUnk0F8)(v3->members.super.process); /*0x648722*/
          if ( *(float *)&a2 <= 0.0 ) /*0x648731*/
          {
            v14 = (void **)v3->members.super.process->GetEquippedWeaponData(v3->members.super.process, 1); /*0x648740*/
            *(float *)&a2 = sub_612A90(v3, v14); /*0x648749*/
            ((void (__thiscall *)(LowProcess *, Actor *))v3->members.super.process->SetUnk0F8)( /*0x648763*/
              v3->members.super.process,
              a2);
          }
        }
      }
    }
    else
    {
      *(float *)&v42 = 0.0; /*0x64869a*/
      FatigueFraction = Actor_GetFatigueFraction(v3, a1, (int)v3); /*0x6486b5*/
      v31 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD, int))v3->vtbl->GetActorValue)( /*0x6486bf*/
              v3,
              0,
              LODWORD(FatigueFraction),
              1);
      v29 = ((int (__thiscall *)(Actor *))v3->vtbl->GetActorValue)(v3); /*0x6486ce*/
      v12 = ((int (__thiscall *)(Actor *))v3->vtbl->GetActorValue)(v3); /*0x6486d9*/
      Calc_HandToHandDamage(v12, 0x11, v29, COERCE_FLOAT(7), v31, (float *)&a2, (float *)&v42); /*0x6486dc*/
    }
    v34 = a1; /*0x648769*/
    v39 = *(float *)&a2 / fCostant_100; /*0x648774*/
    v15 = 0.0; /*0x64877d*/
    v16 = COERCE_FLOAT(sub_5E8ED0(v3, 1)); /*0x64877f*/
    v40 = 0.0; /*0x648781*/
    *(float *)&v42 = v16; /*0x648787*/
    v41 = 0; /*0x64878b*/
    v38 = 0; /*0x64878f*/
    if ( v16 != 0.0 )
    {
      while ( 1 ) /*0x6487a0*/
      {
        v17 = *(_DWORD **)LODWORD(v16); /*0x6487a0*/
        if ( !*(_DWORD *)LODWORD(v16) ) /*0x6487a4*/
          goto LABEL_41; /*0x6487a4*/
        v16 = *(float *)(LODWORD(v16) + 4); /*0x6487aa*/
        v18 = *(_DWORD *)(EffectItemList_GetStrongestItem(v17 + 9, 3, 0, v34, v35, v36, v37, (char)v38) + 0x10); /*0x6487b9*/
        if ( v18 != 2 ) /*0x6487bf*/
          break; /*0x6487bf*/
        if ( v17 ) /*0x6487c3*/
          v19 = (int)(v17 + 6); /*0x6487c5*/
        else
          v19 = 0; /*0x6487ca*/
        sub_5E0970(v3, v19); /*0x6487cf*/
        v32 = v15; /*0x6487d5*/
        v15 = sub_546CA0(v32); /*0x6487d8*/
        if ( v15 <= *(float *)&SrcStr ) /*0x6487eb*/
          goto LABEL_40; /*0x6487eb*/
        v20 = v38; /*0x6487f1*/
        if ( v38 ) /*0x6487f7*/
          goto LABEL_36; /*0x6487f7*/
        v21 = (_DWORD *)FormHeapAlloc(8u); /*0x6487ff*/
        if ( v21 ) /*0x648809*/
        {
          if ( v17 ) /*0x64880d*/
            *v21 = v17 + 6; /*0x648812*/
          else
            *v21 = 0; /*0x648826*/
          v21[1] = 0; /*0x648814*/
          v38 = v21; /*0x64881b*/
        }
        else
        {
          v38 = 0; /*0x648836*/
        }
LABEL_40:
        if ( v16 == 0.0 ) /*0x6488bd*/
          goto LABEL_41; /*0x6488bd*/
      }
      if ( v18 != 1 ) /*0x64883f*/
        goto LABEL_40; /*0x64883f*/
      v22 = v17 ? (int)(v17 + 6) : 0;
      sub_5E0970(v3, v22); /*0x64884f*/
      v33 = v15; /*0x648855*/
      v15 = sub_546CA0(v33); /*0x648858*/
      if ( v15 <= *(float *)&SrcStr ) /*0x64886b*/
        goto LABEL_40; /*0x64886b*/
      v20 = v41; /*0x64886d*/
      if ( !v41 ) /*0x648873*/
      {
        v23 = (_DWORD *)FormHeapAlloc(8u); /*0x648877*/
        if ( v23 ) /*0x648881*/
        {
          if ( v17 ) /*0x648885*/
            *v23 = v17 + 6; /*0x64888a*/
          else
            *v23 = 0; /*0x64889b*/
          v23[1] = 0; /*0x64888c*/
          v41 = v23; /*0x648893*/
        }
        else
        {
          v41 = 0; /*0x6488a8*/
        }
        goto LABEL_40; /*0x648897*/
      }
LABEL_36:
      if ( v17 ) /*0x6488b0*/
        v24 = v17 + 6; /*0x6488b2*/
      else
        v24 = 0; /*0x6488b7*/
      *v20 = v24; /*0x6488b9*/
      goto LABEL_40; /*0x6488b9*/
    }
LABEL_41:
    v25 = a3; /*0x6488c3*/
    v26 = v34; /*0x6488c9*/
    if ( a3 == 0.0 ) /*0x6488ca*/
    {
LABEL_52:
      if ( *(float *)&v42 != 0.0 ) /*0x6489af*/
      {
        BSSimpleList_Clear((_DWORD *)v42); /*0x6489b1*/
        FormHeapFree(v42); /*0x6489bb*/
      }
    }
    else
    {
      while ( v3->vtbl->IsInCombat(v3, 1) ) /*0x6488e0*/
      {
        if ( v41 || v38 ) /*0x6488f4*/
        {
          SchoolAV = EffectItemList_GetSchoolAV(); /*0x6488fb*/
          a3 = COERCE_FLOAT(v3->vtbl->GetActorValue(v3, (AVCode)SchoolAV)); /*0x64890d*/
          v40 = (double)SLODWORD(a3) * dbl_A2FC68 / fCostant_100; /*0x648921*/
        }
        v39 = v39 - v43; /*0x648934*/
        v40 = v40 - *(float *)&v44; /*0x648940*/
        DamageAV_F = v5->vtbl->super.DamageAV_F; /*0x648953*/
        if ( v40 >= (double)v39 ) /*0x648959*/
          a3 = 0.0 * dbl_A3D360; /*0x648977*/
        else
          a3 = *(float *)&a2 * dbl_A3D360; /*0x648965*/
        ((void (__stdcall *)(int, _DWORD, Actor *))DamageAV_F)(8, LODWORD(a3), v3); /*0x648984*/
        if ( v5->vtbl->super.super.super.IsDead((TESObjectREFR *)v5, 0) ) /*0x648993*/
          sub_5EAE70(v3, v26, (int)v3, v35); /*0x64899b*/
        --LODWORD(v25); /*0x6489a0*/
        if ( v25 == 0.0 ) /*0x6489a3*/
          goto LABEL_52; /*0x6489a3*/
      }
    }
  }
}
