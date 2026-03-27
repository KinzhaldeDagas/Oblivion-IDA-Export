void __cdecl Player_UpdateHUDHealthBarTarget_(Actor *a1)
{
  TESForm *ActorBaseForm; // eax
  int *v2; // esi
  int v3; // eax
  CHAR *v4; // eax
  float *v5; // ecx
  float Float; // [esp+Ch] [ebp-20h]
  float v7; // [esp+10h] [ebp-1Ch]
  float v8; // [esp+14h] [ebp-18h]
  float v9; // [esp+1Ch] [ebp-10h]
  float v10; // [esp+1Ch] [ebp-10h]
  float v11; // [esp+20h] [ebp-Ch]
  float v12; // [esp+24h] [ebp-8h]
  float v13; // [esp+28h] [ebp-4h]

  if ( !bHealthBarShowing_Gameplay && (!a1 || !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0)) )
  {
    if ( (Actor *)Player_HUDHealthBarTarget_ == a1 )
      goto LABEL_13;
    Player_HUDHealthBarTarget_ = (int)a1;
    if ( !a1 )
      goto LABEL_13;
    ActorBaseForm = Actor_GetActorBaseForm(a1, 0);
    v11 = (float)(int)ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, 8);
    v12 = (float)(*(int (__thiscall **)(int, int))(*(_DWORD *)Player_HUDHealthBarTarget_ + 0x284))(
                   Player_HUDHealthBarTarget_,
                   8);
    v2 = (int *)OblivionDynamicCast(
                  Player_HUDHealthBarTile_,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                  &Tile3D `RTTI Type Descriptor',
                  0);
    v3 = v2[0x11];
    if ( v3 || (v4 = sub_588C10(Player_HUDHealthBarTile_, 0xFEC), sub_590740(v2, v4), (v3 = v2[0x11]) != 0) )
    {
      v13 = *(float *)(v3 + 0x30);
      v9 = 0.0;
      if ( v11 > 0.0 )
        v9 = v12 / v11;
      v10 = v13 - v9 * v13;
      if ( v10 > (double)v13 )
        v10 = v13;
      v5 = (float *)Player_HUDHealthBarTile_;
      v5[0x16] = v10;
      v8 = flt_B140C0;
      v7 = flt_A40098;
      Float = Tile_GetFloat(v5, 0xFB6);
      sub_589980(Player_HUDHealthBarTile_, 0xFB6, Float, v7, v8);
      byte_B3B362 = 1;
LABEL_13:
      Player_HUDHealthBarTime_ = fEnemyHealthBarTimer;
    }
  }
}
