void __usercall sub_5C28F0(
        int a1@<ebx>,
        unsigned __int16 *a2@<ebp>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v12; // esi
  int ParentMenu; // edi
  double v14; // st7
  _BYTE *v15; // eax
  TESForm *v16; // ebp
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  double v21; // st7
  void *v22; // ecx
  float BaseCalcAVi; // [esp+34h] [ebp-8h]
  int v24; // [esp+38h] [ebp-4h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40C);
  v12 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v24 = ParentMenu;
    if ( ParentMenu )
    {
      v14 = fConstant_2;
      Tile_SetFloat(v12, (_DWORD *)0x1772, fConstant_2);
      sub_584740((_DWORD *)ParentMenu, a8, a9);
      v15 = *(_BYTE **)(ParentMenu + 0x864);
      if ( v15 )
        Actor_EquipItem((int)TESDataHandler_g_PlayerRef, a2, a8, a9, a6, v14, a3, a7, a5, a4, v15, 1, 0, 1, 0);
      byte_B3B5D8 = 1;
    }
    v16 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
    if ( iClassCharactergenClass == *(_DWORD *)(Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef) + 0xC) )
    {
      sub_5222D0(v16, 1);
    }
    else
    {
      v17 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef);
      v18 = v17;
      if ( v17 )
      {
        v19 = (_DWORD *)(v17 + 0x3C);
        if ( v17 != 0xFFFFFFC4 )
        {
          do
          {
            if ( !*v19 )
              break;
            ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B8)(
              TESDataHandler_g_PlayerRef,
              *v19);
            v19 = (_DWORD *)v19[1];
          }
          while ( v19 );
        }
      }
      MagicTarget_ProcessEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, COERCE_INT(0.0));
      sub_5222D0(v16, 1);
      TESDataHandler_g_PlayerRef->majorSkillAdvances = 0;
      TESDataHandler_g_PlayerRef->bCanLevelUp = 0;
      sub_65FBB0(TESDataHandler_g_PlayerRef);
      sub_65D610((int)TESDataHandler_g_PlayerRef);
      if ( v18 )
      {
        v20 = (_DWORD *)(v18 + 0x3C);
        if ( v18 != 0xFFFFFFC4 )
        {
          do
          {
            if ( !*v20 )
              break;
            ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B7)(
              TESDataHandler_g_PlayerRef,
              *v20);
            v20 = (_DWORD *)v20[1];
          }
          while ( v20 );
        }
      }
      sub_66C200(TESDataHandler_g_PlayerRef);
      sub_57A7D0();
      ((void (__stdcall *)(_DWORD))sub_5F2530)(fConstant_2);
      BaseCalcAVi = (float)(int)Actor_GetBaseCalcAVi(9);
      sub_5F25F0((int)TESDataHandler_g_PlayerRef, a1, v18, BaseCalcAVi, COERCE_FLOAT(1));
      sub_6645C0(TESDataHandler_g_PlayerRef);
      sub_5B3760(a8, BaseCalcAVi, a9);
      sub_5DCB70((char)v16, v18, a8, BaseCalcAVi, a9);
      ParentMenu = v24;
    }
    sub_57A7D0();
    sub_522760(v16);
    sub_6626E0(TESDataHandler_g_PlayerRef);
    ((void (__stdcall *)(_DWORD))sub_5F2530)(fConstant_2);
    v21 = flt_A57EF8;
    sub_5F25F0((int)TESDataHandler_g_PlayerRef, a1, ParentMenu, flt_A57EF8, COERCE_FLOAT(1));
    TESTexture::ClearComponentReferences(v22);
    PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, (char)v16, a8, a9, v21, 0);
    sub_6670C0((int *)TESDataHandler_g_PlayerRef);
    TogglePOV(TESDataHandler_g_PlayerRef, *(_BYTE *)(ParentMenu + 0x894) == 0);
  }
}
