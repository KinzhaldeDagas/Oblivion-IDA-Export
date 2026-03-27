void __thiscall sub_5A93B0(_DWORD *this)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  double v9; // st6
  char v10; // al
  int *v11; // ecx
  int *v12; // esi
  int v13; // edi
  char *v14; // eax
  float v15; // [esp+4h] [ebp-14h]
  float v16; // [esp+14h] [ebp-4h]
  float v17; // [esp+14h] [ebp-4h]
  float v18; // [esp+14h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( !sub_5790E0(0x3F5, 0) && !sub_5790E0(0x3EF, 0) && ParentMenu )
    {
      v7 = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
      v8 = v7;
      if ( v7 )
        Tile_GetParentMenu(v7);
      if ( InterfaceManager_IsMenuMode() && (!v8 || Tile_GetFloat(v8, 0xFA1) == fConstant_2)
        || !TESDataHandler_g_PlayerRef
        || TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
      {
        v9 = 1.0;
      }
      else
      {
        v9 = fConstant_2;
      }
      v15 = v9;
      Tile_SetFloat((Tile *)this[0xA], (_DWORD *)0xFA1, v15);
      v10 = *(_BYTE *)(ParentMenu + 0x38);
      switch ( v10 )
      {
        case 2:
          v16 = *(float *)(ParentMenu + 0x3C) - flt_B33E9C;
          *(float *)(ParentMenu + 0x3C) = v16;
          if ( v16 <= 0.0 )
            *(_BYTE *)(ParentMenu + 0x38) = 3;
          break;
        case 3:
          v11 = *(int **)(ParentMenu + 0x40);
          if ( !v11 || !sub_6B7260(v11) )
          {
            *(float *)(ParentMenu + 0x3C) = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3B3D0);
            *(_BYTE *)(ParentMenu + 0x38) = 4;
          }
          break;
        case 4:
          v17 = *(float *)(ParentMenu + 0x3C) - flt_B33E9C;
          *(float *)(ParentMenu + 0x3C) = v17;
          if ( v17 <= 0.0 )
          {
            *(_BYTE *)(ParentMenu + 0x38) = 1;
            sub_5A8F30((float *)ParentMenu);
          }
          break;
      }
      if ( sub_5790E0(0x40C, 0) )
      {
        Tile_SetFloat((Tile *)this[0xD], (_DWORD *)0xFA1, 1.0);
      }
      else
      {
        v12 = this + 0xB;
        if ( BSSimpleList_Count(this + 0xB) )
        {
          Tile_SetFloat((Tile *)this[0xD], (_DWORD *)0xFA1, fConstant_2);
          if ( this != (_DWORD *)0xFFFFFFD4 )
          {
            while ( 1 )
            {
              v13 = *v12;
              v14 = sub_588C10((_DWORD *)this[0xD], 0xFDE);
              if ( sub_5755D0((char **)v13, v14) )
              {
                v18 = *(float *)(v13 + 8) - flt_B33E9C;
                *(float *)(v13 + 8) = v18;
                if ( v18 <= 0.0 )
                  break;
              }
              v12 = (int *)v12[1];
              if ( !v12 )
                return;
            }
            sub_5A90E0((int)this);
          }
        }
      }
    }
  }
}
