void __usercall sub_5A82D0(double a1@<st0>)
{
  double v6; // st4
  double Float; // st4
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  double BaseCalcAVf; // st4
  int v12; // eax
  double v13; // st4
  double v14; // st3
  double v15; // st4
  double v16; // st3
  double v17; // st4
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+10h] [ebp-24h]
  float v22; // [esp+10h] [ebp-24h]
  float v23; // [esp+10h] [ebp-24h]
  float v24; // [esp+10h] [ebp-24h]
  float v25; // [esp+14h] [ebp-20h]
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+14h] [ebp-20h]
  float v29; // [esp+18h] [ebp-1Ch]
  float v30; // [esp+18h] [ebp-1Ch]
  float v31; // [esp+18h] [ebp-1Ch]
  float v32; // [esp+18h] [ebp-1Ch]
  float v33; // [esp+18h] [ebp-1Ch]
  float v34; // [esp+18h] [ebp-1Ch]
  float v35; // [esp+18h] [ebp-1Ch]
  char v36; // [esp+23h] [ebp-11h]
  float v37; // [esp+24h] [ebp-10h]
  float v38; // [esp+24h] [ebp-10h]
  float v39; // [esp+24h] [ebp-10h]
  float v40; // [esp+28h] [ebp-Ch]
  float v41; // [esp+28h] [ebp-Ch]
  float v42; // [esp+28h] [ebp-Ch]
  float v43; // [esp+2Ch] [ebp-8h]
  float v44; // [esp+30h] [ebp-4h]
  float v45; // [esp+30h] [ebp-4h]

  if ( dword_B3B350 )
  {
    if ( dword_B3B354 )
    {
      if ( !Actor_IsSneaking(TESDataHandler_g_PlayerRef) || InterfaceManager_IsMenuMode() )
      {
        if ( byte_B3B361 )
        {
          v31 = flt_B140C4;
          Tile_GetFloat((_DWORD *)dword_B3B354, 0xFB6);
          v20 = a1;
          sub_589980((_DWORD *)dword_B3B354, 0xFB6, v20, 0.0, v31);
          byte_B3B361 = 0;
        }
      }
      else
      {
        v29 = flt_B140BC;
        if ( TESDataHandler_g_PlayerRef->isThirdPerson )
          v6 = 0.0;
        else
          v6 = flt_A40098;
        v25 = v6;
        Tile_GetFloat((_DWORD *)dword_B3B350, 0xFB0);
        v18 = a1;
        sub_589980((_DWORD *)dword_B3B350, 0xFB0, v18, v25, v29);
        v30 = flt_B140C4;
        v26 = flt_B140B8;
        Tile_GetFloat((_DWORD *)dword_B3B354, 0xFB6);
        v19 = a1;
        sub_589980((_DWORD *)dword_B3B354, 0xFB6, v19, v26, v30);
        byte_B3B361 = 1;
        sub_5A80D0();
      }
    }
  }
  if ( Player_HUDHealthBarTile_ && !bHealthBarShowing_Gameplay )
  {
    v36 = 0;
    if ( !InterfaceManager_IsMenuMode() )
    {
      v37 = *((float *)Player_HUDHealthBarTile_ + 0x16);
      Float = 0.0;
      if ( v37 < 0.0 )
        v37 = 0.0;
      if ( Player_HUDHealthBarTarget_ )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)Player_HUDHealthBarTarget_ + 0x198))(
               Player_HUDHealthBarTarget_,
               0) )
        {
          v32 = flt_B140C0;
          Float = Tile_GetFloat(Player_HUDHealthBarTile_, 0xFB6);
          v21 = a1;
          sub_589980(Player_HUDHealthBarTile_, 0xFB6, v21, 0.0, v32);
          byte_B3B362 = 0;
        }
        v8 = Player_HUDHealthBarTarget_;
        if ( Player_HUDHealthBarTarget_ )
        {
LABEL_22:
          v10 = *(_DWORD *)(v8 + 0x58);
          if ( v10 )
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v10 + 0x468))(*(_DWORD *)(v8 + 0x58), 8);
          else
            Float = 0.0;
          v40 = Float;
          BaseCalcAVf = Actor_GetBaseCalcAVf(8);
          a1 = a1 + v40;
          v43 = a1;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)Player_HUDHealthBarTarget_ + 0x288))(
            Player_HUDHealthBarTarget_,
            8);
          v41 = BaseCalcAVf;
          if ( v43 <= (double)v41 )
            goto LABEL_41;
          v12 = *((_DWORD *)OblivionDynamicCast(
                              Player_HUDHealthBarTile_,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                              &Tile3D `RTTI Type Descriptor',
                              0)
                + 0x11);
          if ( !v12 )
            return;
          v44 = *(float *)(v12 + 0x30) * dbl_A6C040;
          v13 = v44;
          v14 = v44;
          v45 = v41 / v43;
          v42 = v14 - v45 * v14;
          if ( v42 > v13 )
            v42 = v13;
          v15 = v42;
          if ( byte_B3B360 )
          {
            byte_B3B360 = 0;
            v17 = (float)0.0;
            goto LABEL_38;
          }
          v16 = v37;
          if ( v37 >= v15 )
          {
            if ( v16 > v15 )
            {
              v39 = v16 - flt_B33E9C;
              v16 = v39;
              if ( v39 < v15 )
              {
                v17 = v42;
                goto LABEL_38;
              }
            }
          }
          else
          {
            v38 = v16 + flt_B33E9C;
            v16 = v38;
            if ( v38 > v15 )
            {
              v17 = v42;
LABEL_38:
              *((float *)Player_HUDHealthBarTile_ + 0x16) = v17;
              Player_HUDHealthBarTime_ = Player_HUDHealthBarTime_ - flt_B33E9C;
              if ( Player_HUDHealthBarTime_ <= 0.0
                || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)Player_HUDHealthBarTarget_ + 0x198))(
                     Player_HUDHealthBarTarget_,
                     0) )
              {
                v36 = 0;
              }
              else
              {
                v34 = flt_B140C0;
                v36 = 1;
                v28 = flt_A40098;
                Tile_GetFloat(Player_HUDHealthBarTile_, 0xFB6);
                v23 = a1;
                sub_589980(Player_HUDHealthBarTile_, 0xFB6, v23, v28, v34);
                byte_B3B362 = 1;
              }
              goto LABEL_41;
            }
          }
          v17 = v16;
          goto LABEL_38;
        }
        Float = 0.0;
      }
      v33 = flt_B140C0;
      v27 = Float;
      Float = Tile_GetFloat(Player_HUDHealthBarTile_, 0xFB6);
      v22 = a1;
      sub_589980(Player_HUDHealthBarTile_, 0xFB6, v22, v27, v33);
      v8 = Player_HUDHealthBarTarget_;
      v9 = Player_HUDHealthBarTarget_ == 0;
      byte_B3B362 = 0;
      if ( !v9 )
        goto LABEL_22;
    }
LABEL_41:
    if ( (InterfaceManager_IsMenuMode() || !v36) && !bHealthBarShowing_Gameplay )
    {
      v35 = flt_B140C0;
      Tile_GetFloat(Player_HUDHealthBarTile_, 0xFB6);
      v24 = a1;
      sub_589980(Player_HUDHealthBarTile_, 0xFB6, v24, 0.0, v35);
      byte_B3B362 = 0;
    }
  }
}
