int __userpurge sub_5D7CA0@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4, _DWORD *a5)
{
  char *v8; // eax
  const char *RenderTargetsNum; // eax
  int v10; // esi
  char *v11; // eax
  const char *v12; // eax
  int v13; // edi
  int v14; // ebx
  double Float; // st7
  int i; // eax
  _DWORD *v17; // edi
  const unsigned __int8 *v18; // ecx
  const unsigned __int8 *v19; // eax
  int v20; // eax
  double v21; // st7
  signed int v22; // ebx
  _DWORD *StrongestItem; // edi
  double v24; // st7
  int v25; // eax
  int MasterySkill; // ebp
  int School; // eax
  int SkillAVFromSchool; // eax
  float *ContainerChanges; // eax
  int v30; // ecx
  TESObjectREFR *v32; // [esp-10h] [ebp-40h]
  float v33; // [esp+0h] [ebp-30h]
  PlayerCharacterVtbl *vtbl; // [esp+30h] [ebp+0h]

  if ( sub_57D2F0(*(void **)(a1 + 0x70)) )
  {
    sub_57DD90(*(void **)(a1 + 0x70), 0);
    v8 = sub_580120(*(char **)(a1 + 0x70));
    Tile_SetString(*(_DWORD **)(a1 + 0x54), (_DWORD *)0xFDE, v8);
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70));
    BSStringT_Set((BSStringT *)(*(_DWORD *)(a1 + 0x74) + 0x1C), RenderTargetsNum, 0);
  }
  else if ( a4 == 2 )
  {
    sub_5D7590(a1);
    v11 = sub_580120(*(char **)(a1 + 0x70));
    Tile_SetString(*(_DWORD **)(a1 + 0x54), (_DWORD *)0xFDE, v11);
    v12 = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70));
    BSStringT_Set((BSStringT *)(*(_DWORD *)(a1 + 0x74) + 0x1C), v12, 0);
    goto LABEL_9;
  }
  if ( a4 == 0xF )
  {
    v10 = *(_DWORD *)(a1 + 0x74);
    if ( v10 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x10))(v10, 1);
    sub_5D76A0(a2, a3);
    goto LABEL_30;
  }
  if ( a4 != 0xE )
  {
LABEL_9:
    if ( Tile_GetFloat(a5, 0xFB4) != flt_A31C80 )
      JUMPOUT(0x5D809C);
    v13 = *(_DWORD *)(a1 + 0x58);
    v14 = 0;
    Float = Tile_GetFloat(a5, 0xFAE);
    for ( i = Double_To_SInt32(Float); v13; ++v14 )
    {
      if ( v14 == i )
        JUMPOUT(0x5D7FD7);
      v13 = *(_DWORD *)(v13 + 4);
    }
LABEL_30:
    JUMPOUT(0x5D811A);
  }
  if ( !NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70)) )
    JUMPOUT(0x5D7FC2);
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x2C) && !*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x28) )
    JUMPOUT(0x5D7FAE);
  v17 = (_DWORD *)(TESDataHandler + 0x2C);
  while ( v17 && *v17 )
  {
    v18 = *(const unsigned __int8 **)(*v17 + 0x1C);
    if ( !v18 )
      v18 = (const unsigned __int8 *)EmptyString;
    v19 = *(const unsigned __int8 **)(*(_DWORD *)(a1 + 0x74) + 0x1C);
    if ( !v19 )
      v19 = (const unsigned __int8 *)EmptyString;
    v20 = _mbscmp(v19, v18);
    v17 = (_DWORD *)v17[1];
    if ( !v20 )
      JUMPOUT(0x5D7F7E);
  }
  v21 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(*(_DWORD *)(a1 + 0x74) + 0x24))(
          *(_DWORD *)(a1 + 0x74) + 0x24,
          TESDataHandler_g_PlayerRef);
  v22 = Double_To_SInt32(v21 * fSpellmakingGoldMult);
  if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v22 )
    JUMPOUT(0x5D7F9B);
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 0);
  v24 = EffectItem_MagickaCostForCaster((int)StrongestItem, v22, 0);
  v33 = v24;
  v25 = Calc_MagickaMasteryLevel(v33);
  MasterySkill = ActorValue_GetMasterySkill(v25);
  vtbl = TESDataHandler_g_PlayerRef->vtbl;
  School = EffectItem_GetSchool(StrongestItem);
  SkillAVFromSchool = Magic_GetSkillAVFromSchool(School);
  if ( vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, (AVCode)SkillAVFromSchool) < MasterySkill )
    JUMPOUT(0x5D7F6B);
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B7)(
    TESDataHandler_g_PlayerRef,
    *(_DWORD *)(a1 + 0x74));
  v32 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  sub_491700(ContainerChanges, a2, a3, v24, v32, v22, 0);
  TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a2, a3, v24, *(unsigned __int8 **)(a1 + 0x74));
  return sub_5D7F2E(v30, *(_DWORD *)(a1 + 0x74), a4, (int)a5);
}
