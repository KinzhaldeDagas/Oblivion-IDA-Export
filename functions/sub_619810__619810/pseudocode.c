double __usercall sub_619810@<st0>(int a1@<ecx>, double result@<st0>)
{
  ActorAnimData *v3; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  bool v5; // al
  int *v6; // ecx
  double v7; // st6
  double v8; // st5
  int v9; // eax
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 9 ) /*0x61981a*/
  {
    v3 = (ActorAnimData *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x61982d*/
                            *(_DWORD *)(a1 + 0x3C),
                            result);
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v3, 1); /*0x619831*/
    v5 = AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x619837*/
    v6 = *(int **)(a1 + 0x84); /*0x61983c*/
    if ( v6 ) /*0x619849*/
    {
      v7 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104); /*0x619852*/
      v8 = *(float *)(a1 + 0x108); /*0x619858*/
      if ( v8 < v7 && !v5 ) /*0x61986d*/
      {
        if ( CombatController_TryUseMagicItem(a1, v8, v7, result, v6, 0) ) /*0x619878*/
        {
          v10 = *(float *)(a1 + 0x44); /*0x61988d*/
          v11 = *GameSetting_GetSafeFloatPointer(unk_B372E8); /*0x619898*/
          *(float *)(a1 + 0x104) = v10; /*0x6198a0*/
          *(float *)(a1 + 0x108) = v11; /*0x6198aa*/
          *(float *)(a1 + 0x10C) = kTerrainLODQuadRayDirectionZ; /*0x6198b6*/
          v9 = *(_DWORD *)(a1 + 0x88); /*0x6198bc*/
          if ( v9 ) /*0x6198c4*/
          {
            if ( v9 == *(_DWORD *)(a1 + 0x84) ) /*0x6198cc*/
              *(_DWORD *)(a1 + 0x88) = 0; /*0x6198ce*/
          }
          *(_DWORD *)(a1 + 0x84) = 0; /*0x6198d8*/
        }
      }
    }
    else if ( !v5 /*0x6198f6*/
           && !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C) )
    {
      if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x619904*/
        *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61990c*/
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x619912*/
    }
  }
  return result; /*0x6198e2*/
}
