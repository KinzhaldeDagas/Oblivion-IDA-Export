int __userpurge sub_5D7CA0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st0>,
        int a9,
        _DWORD *a10)
{
  char *v11; // eax
  const char *RenderTargetsNum; // eax
  int v13; // esi
  char *v14; // eax
  const char *v15; // eax
  int v16; // edi
  int v17; // ebx
  double Float; // st7
  int i; // eax
  OblivionTESFormListNode *p_spellList; // edi
  const unsigned __int8 *v21; // ecx
  const unsigned __int8 *v22; // eax
  int v23; // eax
  double v24; // st7
  signed int v25; // ebx
  _DWORD *StrongestItem; // edi
  double v27; // st7
  SkillMasteryLevel v28; // eax
  SInt32 MinimumSkillForMastery; // ebp
  int School; // eax
  AVCode v31; // eax
  float *ContainerChanges; // eax
  int v33; // ecx
  TESObjectREFR *v35; // [esp-10h] [ebp-40h]
  float v36; // [esp+0h] [ebp-30h]
  PlayerCharacter *v37; // [esp+4h] [ebp-2Ch]
  int v38; // [esp+8h] [ebp-28h]
  int v39; // [esp+Ch] [ebp-24h]
  int v40; // [esp+10h] [ebp-20h]
  char v41; // [esp+14h] [ebp-1Ch]
  PlayerCharacterVtbl *vtbl; // [esp+30h] [ebp+0h]

  if ( sub_57D2F0(*(void **)(a1 + 0x70)) ) /*0x5d7ccc*/
  {
    sub_57DD90(*(void **)(a1 + 0x70), 0); /*0x5d7cde*/
    v11 = sub_580120(*(char **)(a1 + 0x70)); /*0x5d7ce6*/
    Tile_SetString(*(_DWORD **)(a1 + 0x54), (_DWORD *)0xFDE, v11); /*0x5d7cf4*/
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70)); /*0x5d7cfc*/
    BSStringT_Set((BSStringT *)(*(_DWORD *)(a1 + 0x74) + 0x1C), RenderTargetsNum, 0); /*0x5d7d0d*/
  }
  else if ( a9 == 2 ) /*0x5d7d3a*/
  {
    sub_5D7590(a1); /*0x5d7d3e*/
    v14 = sub_580120(*(char **)(a1 + 0x70)); /*0x5d7d46*/
    Tile_SetString(*(_DWORD **)(a1 + 0x54), (_DWORD *)0xFDE, v14); /*0x5d7d54*/
    v15 = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70)); /*0x5d7d5c*/
    BSStringT_Set((BSStringT *)(*(_DWORD *)(a1 + 0x74) + 0x1C), v15, 0); /*0x5d7d6d*/
    goto LABEL_9; /*0x5d7d6d*/
  }
  if ( a9 == 0xF ) /*0x5d7d15*/
  {
    v13 = *(_DWORD *)(a1 + 0x74); /*0x5d7d1b*/
    if ( v13 ) /*0x5d7d20*/
      a8 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v13 + 0x10))(v13, 1); /*0x5d7d2b*/
    sub_5D76A0(a2, a4, a5, a6, a7, a8); /*0x5d7d2d*/
    goto LABEL_30; /*0x5d7d32*/
  }
  if ( a9 != 0xE ) /*0x5d7dcd*/
  {
LABEL_9:
    if ( Tile_GetFloat(a10, 0xFB4) != flt_A31C80 ) /*0x5d7d8d*/
      JUMPOUT(0x5D809C); /*0x5d809c*/
    v16 = *(_DWORD *)(a1 + 0x58); /*0x5d7d93*/
    v17 = 0; /*0x5d7d9d*/
    Float = Tile_GetFloat(a10, 0xFAE); /*0x5d7d9f*/
    for ( i = Double_To_SInt32(Float); v16; ++v17 ) /*0x5d7dad*/
    {
      if ( v17 == i ) /*0x5d7db5*/
        JUMPOUT(0x5D7FD7); /*0x5d7fd7*/
      v16 = *(_DWORD *)(v16 + 4); /*0x5d7dbb*/
    }
LABEL_30:
    JUMPOUT(0x5D811A); /*0x5d811a*/
  }
  if ( !NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x70)) ) /*0x5d7dd9*/
    JUMPOUT(0x5D7FC2); /*0x5d7fc2*/
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x2C) && !*(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x28) ) /*0x5d7dee*/
    JUMPOUT(0x5D7FAE); /*0x5d7fae*/
  p_spellList = &g_TESDataHandler->spellList; /*0x5d7dfc*/
  while ( p_spellList && p_spellList->item ) /*0x5d7e08*/
  {
    v21 = *(const unsigned __int8 **)&p_spellList->item[1].member.type; /*0x5d7e0a*/
    if ( !v21 ) /*0x5d7e0f*/
      v21 = (const unsigned __int8 *)EmptyString; /*0x5d7e11*/
    v22 = *(const unsigned __int8 **)(*(_DWORD *)(a1 + 0x74) + 0x1C); /*0x5d7e1c*/
    if ( !v22 ) /*0x5d7e21*/
      v22 = (const unsigned __int8 *)EmptyString; /*0x5d7e23*/
    v23 = _mbscmp(v22, v21); /*0x5d7e2a*/
    p_spellList = p_spellList->next; /*0x5d7e2f*/
    if ( !v23 ) /*0x5d7e3c*/
      JUMPOUT(0x5D7F7E); /*0x5d7f7e*/
  }
  v37 = reference; /*0x5d7e6c*/
  v24 = ((double (__thiscall *)(int))**(_DWORD **)(*(_DWORD *)(a1 + 0x74) + 0x24))(*(_DWORD *)(a1 + 0x74) + 0x24); /*0x5d7e6d*/
  v25 = Double_To_SInt32(v24 * flt_B37ED0[0x44]); /*0x5d7e80*/
  if ( sub_5E4420((Actor *)reference) < v25 ) /*0x5d7e8b*/
    JUMPOUT(0x5D7F9B); /*0x5d7f9b*/
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem( /*0x5d7e9e*/
                              (_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x24),
                              3,
                              0,
                              (int)v37,
                              v38,
                              v39,
                              v40,
                              v41);
  v27 = EffectItem_MagickaCostForCaster((int)StrongestItem, v25, 0); /*0x5d7ea4*/
  v36 = v27; /*0x5d7eaa*/
  v28 = Calc_MagickaMasteryLevel(v36); /*0x5d7ead*/
  MinimumSkillForMastery = ActorValue_GetMinimumSkillForMastery(v28); /*0x5d7ebe*/
  vtbl = reference->vtbl; /*0x5d7ec7*/
  School = EffectItem_GetSchool(StrongestItem); /*0x5d7ecb*/
  Magic_GetSkillAVFromSchool(School); /*0x5d7ed1*/
  if ( vtbl->super.GetActorValue((Actor *)reference, v31) < MinimumSkillForMastery ) /*0x5d7eee*/
    JUMPOUT(0x5D7F6B); /*0x5d7f6b*/
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_B7)(reference, *(_DWORD *)(a1 + 0x74)); /*0x5d7f02*/
  v35 = (TESObjectREFR *)reference; /*0x5d7f0f*/
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d7f10*/
  sub_491700(ContainerChanges, a2, a3, v27, v35, v25, 0); /*0x5d7f17*/
  TESDataHandler_AddForm(g_TESDataHandler, a2, a3, v27, *(TESForm **)(a1 + 0x74)); /*0x5d7f26*/
  return sub_5D7F2E(v33, *(_DWORD *)(a1 + 0x74), a9, (int)a10);
}
