signed int __usercall sub_621B40@<eax>(
        SInt32 a1@<edi>,
        double a2@<st1>,
        double a3@<st0>,
        Actor *a4,
        float a5,
        TESObjectREFR *a6,
        float *a7,
        char a8,
        char a9)
{
  double v10; // st5
  int *v12; // eax
  int v13; // eax
  TESObjectREFR *v14; // edi
  int v15; // edi
  _DWORD *v16; // eax
  TESObjectREFRVtbl *process; // ecx
  char v18; // al
  int v19; // ebx
  _DWORD *v20; // ebp
  int v21; // eax
  double (__thiscall ***v22)(_DWORD, _DWORD); // edi
  int v23; // edi
  bool v24; // bl
  unsigned __int16 AnimGroup; // ax
  int v26; // edi
  ActorAnimData *v27; // eax
  int WeaponSkillAV; // ebx
  void **v29; // eax
  char v30; // al
  int v32; // ebp
  int *v33; // ecx
  double v34; // st7
  int *v35; // ecx
  bool v36; // dl
  int v37; // eax
  TESObjectREFRVtbl *p_super; // edx
  int *v39; // eax
  TESObjectREFR *v40; // edi
  int *v41; // eax
  int v42; // eax
  float v43; // [esp+24h] [ebp-3Ch]
  float v44; // [esp+28h] [ebp-38h]
  int v45; // [esp+2Ch] [ebp-34h]
  int v46; // [esp+30h] [ebp-30h]
  int v47; // [esp+30h] [ebp-30h]
  char v49; // [esp+44h] [ebp-1Ch]
  bool IsSwimming; // [esp+45h] [ebp-1Bh]
  char v51; // [esp+46h] [ebp-1Ah]
  char v52; // [esp+47h] [ebp-19h]
  float v53; // [esp+48h] [ebp-18h]
  int v54; // [esp+4Ch] [ebp-14h]
  float v55; // [esp+50h] [ebp-10h]
  double v56; // [esp+58h] [ebp-8h] BYREF
  char v57; // [esp+64h] [ebp+4h]

  v10 = flt_A30634;
  v53 = flt_A30634;
  v54 = 0xD;
  v12 = sub_5E0F50(a4);
  v51 = (*(int (__usercall **)@<eax>(int *@<ecx>, int, double@<st0>, double@<st1>))(*v12 + 0x16C))(v12, 0x40, a3, a2);
  IsSwimming = Actor_IsSwimming(a4);
  v13 = (int)a4->vtbl->GetCombatController(a4);
  v14 = a6;
  if ( v13 )
  {
    v15 = (int)a4->vtbl->GetCombatController(a4);
    if ( !sub_6135F0(v15)
      || (v16 = (_DWORD *)sub_6135F0(v15), !Actor_IsSwimming(v16))
      || Actor_IsSwimming(*(_DWORD **)(v15 + 0x3C))
      || Actor_CanFightInWater(*(void **)(v15 + 0x3C)) )
    {
      v57 = *(_BYTE *)(v15 + 0x174);
    }
    else
    {
      v57 = 0;
    }
  }
  else
  {
    process = (TESObjectREFRVtbl *)a4->members.super.process;
    if ( process )
      v18 = (*((int (__thiscall **)(TESObjectREFRVtbl *, Actor *, TESObjectREFR *))process->super.super.InitializeComponent
             + 0x71))(
              process,
              a4,
              a6);
    else
      v18 = sub_5F2820(a4, a3, 0, a6, 1, 0, 0);
    v57 = sub_617590((TESObjectREFR *)a4, v14, v18);
  }
  v19 = LODWORD(a5);
  if ( a5 == 0.0 )
  {
    v19 = (int)a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1);
    v55 = *(float *)&v19;
  }
  else
  {
    v55 = a5;
  }
  if ( !v19 )
  {
    v20 = 0;
    goto LABEL_17;
  }
  v20 = OblivionDynamicCast(
          *(void **)(v19 + 8),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESObjectWEAP `RTTI Type Descriptor',
          0);
  if ( !v20 )
  {
LABEL_17:
    if ( !a4->vtbl->GetCombatController(a4) )
      goto LABEL_23;
    v19 = 0;
    v55 = 0.0;
    v20 = *((_DWORD **)a4->vtbl->GetCombatController(a4) + 0x2A);
    if ( !v20 )
      goto LABEL_23;
  }
  if ( *((_BYTE *)v20 + 0x90) == 4 )
  {
    v21 = v20[0x19];
    if ( v21 )
    {
      v22 = (double (__thiscall ***)(_DWORD, _DWORD))(v21 + 0x24);
      v56 = sub_4849C0((void **)v19);
      a3 = (**v22)(v22, 0);
      if ( a3 > v56 )
      {
        v19 = 0;
        v55 = 0.0;
        v20 = 0;
      }
    }
  }
LABEL_23:
  v23 = (int)a4->vtbl->GetCombatController(a4);
  v52 = sub_612A30((TESObjectREFR *)a4, v19);
  if ( v23 )
  {
    v49 = *(_BYTE *)(v23 + 0x1BC);
  }
  else
  {
    v24 = 0;
    AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)a4, 0x11, 0, 1);
    v26 = AnimGroup;
    if ( AnimGroup )
    {
      v27 = a4->vtbl->super.super.GetAnimData(a4);
      if ( v27 )
        v24 = sub_470960((_DWORD *)v27->animsMap, v26, &v56) != 0;
    }
    v23 = 0;
    v49 = v24;
  }
  WeaponSkillAV = 0xFFFFFFFF;
  if ( sub_5E1CF0(a4) )
  {
    if ( v20 )
    {
      if ( v52 )
      {
        if ( a5 == 0.0 )
        {
          if ( v55 == 0.0 )
          {
            a3 = sub_612560(a4, (char *)v20, 1.0, 0);
          }
          else if ( a4->vtbl->GetCombatController(a4)
                 && a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1) )
          {
            v29 = (void **)a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1);
            a3 = sub_612A90(a4, v29);
          }
          else
          {
            a3 = ((double (__thiscall *)(LowProcess *))a4->members.super.process->GetUnk0F8)(a4->members.super.process);
          }
        }
        else
        {
          a3 = sub_612A90(a4, (void **)LODWORD(a5));
        }
        v30 = *((_BYTE *)v20 + 0x90);
        v53 = a3;
        if ( v30 == 5 || v30 == 4 )
        {
          v54 = 2;
          if ( IsSwimming )
          {
            a3 = 0.0;
            v54 = 0xD;
            v53 = 0.0;
          }
        }
        else
        {
          v54 = 1;
        }
        WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)v20);
      }
    }
  }
  if ( !v23 )
    goto LABEL_54;
  sub_621270(v23, v10, a2, a3);
  if ( *(_DWORD *)(v23 + 0x70) == 0xC )
    return 0xC;
  if ( *(_DWORD *)(v23 + 0x6C) == 0xB )
  {
LABEL_54:
    v32 = v54;
    if ( !v57 )
      goto LABEL_55;
LABEL_56:
    a5 = 0.0;
    if ( v23 )
    {
      v33 = sub_616980((_DWORD *)v23, 0.0, &a5, 3, *(unsigned __int8 *)(v23 + 0x17C));
      v34 = a5;
      *(_DWORD *)(v23 + 0x7C) = v33;
      if ( v53 < v34 && v34 > 0.0 )
      {
        if ( v33 )
        {
          if ( v55 == 0.0 )
          {
            v53 = v34;
            v32 = 3;
            WeaponSkillAV = EffectItemList_GetSchoolAV();
          }
        }
      }
    }
    a5 = COERCE_FLOAT(((int (__thiscall *)(Actor *))a4->vtbl->Unk_D3)(a4));
    v44 = (float)SLODWORD(a5);
    a5 = sub_546C60(v44, 0, COERCE_FLOAT(1));
    if ( v53 < (double)a5 )
    {
      if ( v49 )
      {
        if ( WeaponSkillAV == 0xFFFFFFFF
          || (WeaponSkillAV = a4->vtbl->GetActorValue(a4, (AVCode)WeaponSkillAV),
              a4->vtbl->GetActorValue(a4, kActorVal_HandToHand) > WeaponSkillAV) )
        {
          v32 = 0;
          v53 = a5;
        }
      }
    }
    goto LABEL_67;
  }
  v32 = v54;
  if ( v57 )
    goto LABEL_56;
  if ( v54 == 1 )
    v53 = 0.0;
LABEL_55:
  if ( Actor_IsCreature(a4) )
    goto LABEL_56;
LABEL_67:
  if ( v23 )
  {
    if ( !IsSwimming )
    {
      v46 = *(unsigned __int8 *)(v23 + 0x17C);
      a5 = 0.0;
      v35 = sub_616980((_DWORD *)v23, 0.0, &a5, 4, v46);
      *(_DWORD *)(v23 + 0x80) = v35;
      if ( v51 )
        v36 = 1;
      else
        v36 = LODWORD(v55) == 0;
      if ( v53 < (double)a5 )
      {
        if ( v35 )
        {
          if ( v36 )
          {
            v53 = a5;
            v32 = 4;
            EffectItemList_GetSchoolAV();
          }
        }
      }
    }
  }
  if ( v51 )
  {
    if ( (v32 == 2 || !a4->vtbl->GetCombatController(a4) || *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20))
      && v32 == 3 )
    {
      v32 = 4;
      if ( v23 )
        EffectItemList_GetSchoolAV();
    }
  }
  if ( !a8 )
  {
    v47 = a4->vtbl->GetActorValue(a4, kActorVal_Confidence);
    *(float *)&v37 = COERCE_FLOAT(Actor_GetBaseCalcAVi((int *)a4, WeaponSkillAV, v23, (int)a4, 8));
    p_super = &a4->vtbl->super.super;
    a5 = *(float *)&v37;
    *(float *)&v45 = (float)v37;
    v43 = ((double (__thiscall *)(Actor *))p_super[1].Unk_38)(a4);
    sub_546CC0(v43, COERCE_FLOAT(8), v45);
    if ( ((unsigned __int8 (__thiscall *)(Actor *, int))a4->vtbl->Unk_97)(a4, v47) )
      a5 = 0.0;
    if ( v53 < (double)a5 && flt_B37038 < (double)a5 )
    {
      v39 = sub_5E0F50(a4);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v39 + 0x16C))(v39, 0x20) )
      {
        v32 = 7;
        v53 = a5;
      }
    }
    if ( a9 )
    {
      v40 = a6;
      if ( a6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        v41 = sub_5E0F50(a4);
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v41 + 0x16C))(v41, 8) )
        {
          a4->vtbl->GetDisposition(a4, (Actor *)v40, a1);
          v42 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4);
          a5 = sub_546D10(a5, v42, 0x21);
          if ( v53 < (double)a5 )
          {
            if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, Actor *))v40->vtbl[2].super.Unk_08)(v40, a4) )
            {
              v32 = 5;
              v53 = a5;
            }
          }
        }
      }
    }
  }
  if ( a7 )
    *a7 = v53;
  return v32;
}
