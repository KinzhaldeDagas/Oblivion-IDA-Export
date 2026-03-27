bool __usercall sub_5BE870@<al>(int a1@<edi>, int a2@<esi>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v6; // esi
  int v7; // edi
  unsigned __int16 Level; // ax
  unsigned __int16 v9; // ax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // [esp+14h] [ebp-30h]
  float v16; // [esp+18h] [ebp-2Ch]
  PlayerCharacter *v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h]
  int v19; // [esp+28h] [ebp-1Ch]
  float v20; // [esp+2Ch] [ebp-18h]
  float v23; // [esp+38h] [ebp-Ch]
  int v24; // [esp+3Ch] [ebp-8h]
  float v25; // [esp+40h] [ebp-4h]
  int v26; // [esp+40h] [ebp-4h]
  int retaddr; // [esp+44h] [ebp+0h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40A);
  if ( !OpenMenuTile )
    return 0;
  ParentMenu = Tile_GetParentMenu(OpenMenuTile);
  v6 = ParentMenu;
  if ( !ParentMenu
    || (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(ParentMenu + 0xD8) + 0x224))(
         *(_DWORD *)(ParentMenu + 0xD8),
         TESDataHandler_g_PlayerRef) >= 0x64 )
  {
    return 0;
  }
  v23 = fBribeCostCurve;
  *(float *)&v24 = fBribeNPCLevelMult;
  v7 = iBribeAmountMax;
  v25 = fBribeScale;
  v20 = COERCE_FLOAT((*(int (__stdcall **)(int, float))(**(_DWORD **)(v6 + 0xD8) + 0x284))(0x20, flt_B38E88));
  v18 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
  Level = Actor_GetLevel(*(Actor **)(v6 + 0xD8), v24);
  v9 = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, Level);
  sub_547B00(v25, v9, v15, v16, v7, v23, v18, 0x20, v20);
  v11 = v10;
  v26 = v10;
  if ( Actor_GetSkillMasteryLevel(0x20) == 4 )
    v11 = Double_To_SInt32((double)v26 * dbl_A2FAA0);
  if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v11 )
    return 0;
  v12 = *(_DWORD *)(v6 + 0xD8);
  v13 = (*(int (__stdcall **)(int, int, int, float))(*(_DWORD *)v12 + 0x284))(0x20, a1, a2, COERCE_FLOAT(LODWORD(v23)));
  ((void (__thiscall *)(PlayerCharacter *, int, int))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(
    TESDataHandler_g_PlayerRef,
    0x20,
    v13);
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x284))(v12);
  v17 = TESDataHandler_g_PlayerRef;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x224))(v12);
  return sub_547B40(v14, *(float *)&v17, retaddr, v19, 0x24) != 0;
}
