double __thiscall ContainerExtraData_GetEncoumberance(int *this)
{
  int *v1; // ebp
  TESObjectREFR *v2; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  int type; // edi
  double v6; // st7
  _DWORD *v7; // eax
  char v8; // dl
  int v9; // eax
  int v10; // ebx
  EntryData *v11; // edi
  int v12; // esi
  TESObjectREFR *v13; // ecx
  TESObjectREFR *v14; // ecx
  TESContainer *v15; // eax
  _BYTE *v16; // ebp
  int countDelta; // esi
  float *v18; // ecx
  double v19; // st7
  double v20; // st7
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  float WeightForForm_Fast; // [esp+4h] [ebp-14h]
  float v26; // [esp+4h] [ebp-14h]
  float v27; // [esp+8h] [ebp-10h]
  Actor *v28; // [esp+Ch] [ebp-Ch]
  int v29; // [esp+10h] [ebp-8h]
  int v30; // [esp+10h] [ebp-8h]
  float v31; // [esp+10h] [ebp-8h]

  v1 = this; /*0x487e44*/
  v28 = 0; /*0x487e55*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x190))(*(this + 1)) ) /*0x487e5d*/
    v28 = (Actor *)v1[1]; /*0x487e66*/
  if ( kTerrainLODQuadRayDirectionZ == *((float *)v1 + 2) )
  {
    v2 = (TESObjectREFR *)v1[1]; /*0x487e80*/
    v27 = 0.0; /*0x487e85*/
    if ( v2 ) /*0x487e89*/
      Container = TESObjectREFR_GetContainer(v2); /*0x487e8b*/
    else
      Container = 0; /*0x487e92*/
    p_list = &Container->list; /*0x487e96*/
    if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x487e9c*/
    {
      do /*0x487f62*/
      {
        if ( !p_list->next && !p_list->data ) /*0x487ea8*/
          break; /*0x487eab*/
        type = (int)p_list->data->type; /*0x487eb3*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)type + 0x78))(type) ) /*0x487ebd*/
        {
          WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast(type); /*0x487ecd*/
          v6 = WeightForForm_Fast; /*0x487ee2*/
          if ( WeightForForm_Fast == kTerrainLODQuadRayDirectionZ ) /*0x487ee7*/
            v6 = (float)0.0; /*0x487ef1*/
          v7 = (_DWORD *)*v1; /*0x487ef5*/
          v8 = 1; /*0x487efa*/
          if ( !*v1 ) /*0x487ef5*/
            goto LABEL_23; /*0x487ef5*/
          while ( v8 ) /*0x487f00*/
          {
            if ( *v7 && *(_DWORD *)(*v7 + 8) == type ) /*0x487f0b*/
              v8 = 0; /*0x487f0d*/
            else
              v7 = (_DWORD *)v7[1]; /*0x487f11*/
            if ( !v7 ) /*0x487f16*/
            {
              v27 = v6 * (double)p_list->data->count + v27; /*0x487f20*/
              goto LABEL_26; /*0x487f24*/
            }
          }
          if ( v7 && (v9 = *v7) != 0 ) /*0x487f2e*/
          {
            v29 = p_list->data->count + *(_DWORD *)(v9 + 4); /*0x487f47*/
            if ( v29 ) /*0x487f4b*/
              v27 = v6 * (double)v29 + v27; /*0x487f55*/
          }
          else
          {
LABEL_23:
            v27 = v6 * (double)p_list->data->count + v27; /*0x487f38*/
          }
        }
LABEL_26:
        p_list = p_list->next; /*0x487f5d*/
      }
      while ( p_list ); /*0x487f62*/
    }
    v10 = *v1; /*0x487f68*/
    if ( *v1 )
    {
      while ( 1 )
      {
        v11 = *(EntryData **)v10; /*0x487f73*/
        if ( !*(_DWORD *)v10 ) /*0x487f77*/
          goto LABEL_58; /*0x487f77*/
        v12 = (int)v11->type; /*0x487f7d*/
        if ( v12 )
        {
          v13 = (TESObjectREFR *)v1[1]; /*0x487f88*/
          if ( !v13
            || !TESObjectREFR_GetContainer(v13)
            || ((v14 = (TESObjectREFR *)v1[1]) == 0 ? (v15 = 0) : (v15 = TESObjectREFR_GetContainer(v14)),
                !TESContainer_HasForm(v15, (TESForm *)v12)) )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 0x78))(v12) ) /*0x487fbf*/
              break; /*0x487fbf*/
          }
        }
LABEL_57:
        v10 = *(_DWORD *)(v10 + 4); /*0x4880b5*/
        if ( !v10 ) /*0x4880ba*/
          goto LABEL_58; /*0x4880ba*/
      }
      v26 = TESWeightForm_GetWeightForForm_Fast(v12); /*0x487fcf*/
      v16 = 0; /*0x487fd6*/
      if ( *(_BYTE *)(v12 + 4) == 0x14 ) /*0x487fdc*/
        v16 = (_BYTE *)v12; /*0x487fde*/
      countDelta = v11->countDelta; /*0x487fe5*/
      v30 = countDelta; /*0x487fe8*/
      if ( !v28 || !v16 || !ContainerEntryExtraData_HasWorn(v11, 0) ) /*0x487ffe*/
        goto LABEL_54; /*0x488005*/
      v31 = v26; /*0x488011*/
      if ( TESObjectARMO_ISHeavyArmor(v16) == 1 ) /*0x48801c*/
      {
        if ( Actor_GetSkillMasteryLevel(v28, kSkillAV_HeavyArmor) != kSkillMastery_Expert ) /*0x48802e*/
        {
          if ( Actor_GetSkillMasteryLevel(v28, kSkillAV_HeavyArmor) != kSkillMastery_Master ) /*0x488043*/
          {
LABEL_52:
            if ( countDelta <= 0 ) /*0x488088*/
            {
LABEL_56:
              v1 = this; /*0x4880b1*/
              goto LABEL_57; /*0x4880b1*/
            }
            --countDelta; /*0x48808e*/
            v20 = v31 + v27; /*0x488091*/
            v30 = countDelta; /*0x488095*/
            v27 = v20; /*0x488099*/
LABEL_54:
            if ( countDelta > 0 ) /*0x48809f*/
              v27 = (double)v30 * v26 + v27; /*0x4880ad*/
            goto LABEL_56; /*0x4880ad*/
          }
          v19 = *GameSetting_GetSafeFloatPointer(&MEMORY[0xB374E0]) * v26; /*0x488051*/
LABEL_51:
          v31 = v19; /*0x488082*/
          goto LABEL_52; /*0x488082*/
        }
        v18 = &MEMORY[0xB374D8]; /*0x488030*/
      }
      else
      {
        if ( TESObjectARMO_ISHeavyArmor(v16) /*0x488070*/
          || Actor_GetSkillMasteryLevel(v28, kSkillAV_LightArmor) < kSkillMastery_Expert )
        {
          goto LABEL_52; /*0x488070*/
        }
        v18 = &MEMORY[0xB374E8]; /*0x488072*/
      }
      v19 = v26 * *GameSetting_GetSafeFloatPointer(v18); /*0x488080*/
      goto LABEL_51; /*0x488080*/
    }
LABEL_58:
    v21 = v1[1]; /*0x4880c0*/
    *((float *)v1 + 2) = v27; /*0x4880c7*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x190))(v21) ) /*0x4880d2*/
    {
      v22 = v1[1]; /*0x4880db*/
      if ( v22 ) /*0x4880e0*/
      {
        v23 = *(_DWORD *)(v22 + 0x58); /*0x4880e2*/
        if ( v23 ) /*0x4880e7*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x290))(v23); /*0x4880f1*/
      }
    }
  }
  return *((float *)v1 + 2); /*0x4880f6*/
}
