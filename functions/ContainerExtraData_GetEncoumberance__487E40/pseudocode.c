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
  int v28; // [esp+Ch] [ebp-Ch]
  int v29; // [esp+10h] [ebp-8h]
  int v30; // [esp+10h] [ebp-8h]
  float v31; // [esp+10h] [ebp-8h]

  v1 = this;
  v28 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x190))(*(this + 1)) )
    v28 = v1[1];
  if ( flt_A30634 == *((float *)v1 + 2) )
  {
    v2 = (TESObjectREFR *)v1[1];
    v27 = 0.0;
    if ( v2 )
      Container = TESObjectREFR_GetContainer(v2);
    else
      Container = 0;
    p_list = &Container->list;
    if ( Container != (TESContainer *)0xFFFFFFF8 )
    {
      do
      {
        if ( !p_list->next && !p_list->data )
          break;
        type = (int)p_list->data->type;
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)type + 0x78))(type) )
        {
          WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast(type);
          v6 = WeightForForm_Fast;
          if ( WeightForForm_Fast == flt_A30634 )
            v6 = (float)0.0;
          v7 = (_DWORD *)*v1;
          v8 = 1;
          if ( !*v1 )
            goto LABEL_23;
          while ( v8 )
          {
            if ( *v7 && *(_DWORD *)(*v7 + 8) == type )
              v8 = 0;
            else
              v7 = (_DWORD *)v7[1];
            if ( !v7 )
            {
              v27 = v6 * (double)p_list->data->count + v27;
              goto LABEL_26;
            }
          }
          if ( v7 && (v9 = *v7) != 0 )
          {
            v29 = p_list->data->count + *(_DWORD *)(v9 + 4);
            if ( v29 )
              v27 = v6 * (double)v29 + v27;
          }
          else
          {
LABEL_23:
            v27 = v6 * (double)p_list->data->count + v27;
          }
        }
LABEL_26:
        p_list = p_list->next;
      }
      while ( p_list );
    }
    v10 = *v1;
    if ( *v1 )
    {
      while ( 1 )
      {
        v11 = *(EntryData **)v10;
        if ( !*(_DWORD *)v10 )
          goto LABEL_58;
        v12 = (int)v11->type;
        if ( v12 )
        {
          v13 = (TESObjectREFR *)v1[1];
          if ( !v13
            || !TESObjectREFR_GetContainer(v13)
            || ((v14 = (TESObjectREFR *)v1[1]) == 0 ? (v15 = 0) : (v15 = TESObjectREFR_GetContainer(v14)),
                !TESContainer_HasForm(v15, (TESForm *)v12)) )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 0x78))(v12) )
              break;
          }
        }
LABEL_57:
        v10 = *(_DWORD *)(v10 + 4);
        if ( !v10 )
          goto LABEL_58;
      }
      v26 = TESWeightForm_GetWeightForForm_Fast(v12);
      v16 = 0;
      if ( *(_BYTE *)(v12 + 4) == 0x14 )
        v16 = (_BYTE *)v12;
      countDelta = v11->countDelta;
      v30 = countDelta;
      if ( !v28 || !v16 || !(unsigned __int8)ContainerEntryExtraData_HasWorn(v11, 0) )
        goto LABEL_54;
      v31 = v26;
      if ( TESObjectARMO_ISHeavyArmor(v16) == 1 )
      {
        if ( Actor_GetSkillMasteryLevel(0x12) != 3 )
        {
          if ( Actor_GetSkillMasteryLevel(0x12) != 4 )
          {
LABEL_52:
            if ( countDelta <= 0 )
            {
LABEL_56:
              v1 = this;
              goto LABEL_57;
            }
            --countDelta;
            v20 = v31 + v27;
            v30 = countDelta;
            v27 = v20;
LABEL_54:
            if ( countDelta > 0 )
              v27 = (double)v30 * v26 + v27;
            goto LABEL_56;
          }
          v19 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkHeavyArmorMasterSpeedMult) * v26;
LABEL_51:
          v31 = v19;
          goto LABEL_52;
        }
        v18 = &fPerkHeavyArmorExpertSpeedMult;
      }
      else
      {
        if ( TESObjectARMO_ISHeavyArmor(v16) || (int)Actor_GetSkillMasteryLevel(0x1B) < 3 )
          goto LABEL_52;
        v18 = &fPerkLightArmorExpertSpeedMult;
      }
      v19 = v26 * *(float *)GameSetting_GetSafeFloatPointer((int *)v18);
      goto LABEL_51;
    }
LABEL_58:
    v21 = v1[1];
    *((float *)v1 + 2) = v27;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x190))(v21) )
    {
      v22 = v1[1];
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 0x58);
        if ( v23 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x290))(v23);
      }
    }
  }
  return *((float *)v1 + 2);
}
