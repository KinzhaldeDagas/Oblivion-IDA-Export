void __thiscall sub_5A93B0(int *this)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  double v6; // st7
  char v7; // al
  UInt32 *v8; // ecx
  int *v9; // esi
  int v10; // edi
  char *v11; // eax
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+14h] [ebp-4h]
  float v14; // [esp+14h] [ebp-4h]
  float v15; // [esp+14h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x5a93b9*/
  if ( OpenMenuTile ) /*0x5a93c3*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5a93d8*/
    if ( !InterfaceManager_IsMenuVisibleByID(0x3F5, 0) && !InterfaceManager_IsMenuVisibleByID(0x3EF, 0) && ParentMenu ) /*0x5a9403*/
    {
      v4 = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x5a940f*/
      v5 = v4; /*0x5a9414*/
      if ( v4 ) /*0x5a941b*/
        Tile_GetParentMenu(v4); /*0x5a941f*/
      if ( InterfaceManager_IsMenuMode() && (!v5 || Tile_GetFloat(v5, 0xFA1) == fConstant_2) /*0x5a945e*/
        || !reference
        || reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) )
      {
        v6 = 1.0; /*0x5a946c*/
      }
      else
      {
        v6 = fConstant_2; /*0x5a9464*/
      }
      v12 = v6; /*0x5a9472*/
      Tile_SetFloat((Tile *)*(this + 0xA), 0xFA1u, v12); /*0x5a947a*/
      v7 = *(_BYTE *)(ParentMenu + 0x38); /*0x5a9481*/
      switch ( v7 ) /*0x5a9486*/
      {
        case 2: /*0x5a9486*/
          v13 = *(float *)(ParentMenu + 0x3C) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a9491*/
          *(float *)(ParentMenu + 0x3C) = v13; /*0x5a9499*/
          if ( v13 <= 0.0 ) /*0x5a94a3*/
            *(_BYTE *)(ParentMenu + 0x38) = 3; /*0x5a94a5*/
          break;
        case 3: /*0x5a9486*/
          v8 = *(UInt32 **)(ParentMenu + 0x40); /*0x5a94af*/
          if ( !v8 || !SoundHandle::IsPlaying(v8) ) /*0x5a94b8*/
          {
            *(float *)(ParentMenu + 0x3C) = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0xC7]); /*0x5a94cd*/
            *(_BYTE *)(ParentMenu + 0x38) = 4; /*0x5a94d0*/
          }
          break;
        case 4: /*0x5a9486*/
          v14 = *(float *)(ParentMenu + 0x3C) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a94e3*/
          *(float *)(ParentMenu + 0x3C) = v14; /*0x5a94eb*/
          if ( v14 <= 0.0 ) /*0x5a94f5*/
          {
            *(_BYTE *)(ParentMenu + 0x38) = 1; /*0x5a94f9*/
            sub_5A8F30((float *)ParentMenu); /*0x5a94fd*/
          }
          break;
      }
      if ( InterfaceManager_IsMenuVisibleByID(0x40C, 0) ) /*0x5a950d*/
      {
        Tile_SetFloat((Tile *)*(this + 0xD), 0xFA1u, 1.0); /*0x5a95b1*/
      }
      else
      {
        v9 = this + 0xB; /*0x5a951d*/
        if ( BSSimpleList_Count(this + 0xB) ) /*0x5a9522*/
        {
          Tile_SetFloat((Tile *)*(this + 0xD), 0xFA1u, fConstant_2); /*0x5a9541*/
          if ( this != (int *)0xFFFFFFD4 ) /*0x5a9548*/
          {
            while ( 1 ) /*0x5a9553*/
            {
              v10 = *v9; /*0x5a9553*/
              v11 = sub_588C10((_DWORD *)*(this + 0xD), 0xFDE); /*0x5a955a*/
              if ( sub_5755D0((const char **)v10, v11) ) /*0x5a9562*/
              {
                v15 = *(float *)(v10 + 8) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5a9574*/
                *(float *)(v10 + 8) = v15; /*0x5a957c*/
                if ( v15 <= 0.0 ) /*0x5a9588*/
                  break; /*0x5a9588*/
              }
              v9 = (int *)v9[1]; /*0x5a958a*/
              if ( !v9 ) /*0x5a958f*/
                return; /*0x5a958f*/
            }
            sub_5A90E0((int)this); /*0x5a959e*/
          }
        }
      }
    }
  }
}
