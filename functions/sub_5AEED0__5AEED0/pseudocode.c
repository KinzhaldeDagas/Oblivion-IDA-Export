void __userpurge sub_5AEED0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        signed int a6,
        _DWORD *a7)
{
  Tile *v8; // ecx
  double v9; // st6
  _DWORD *v10; // eax
  char v11; // al
  _DWORD *OpenMenuTile; // eax
  int v13; // edx
  int *v14; // esi
  double Float; // st5
  int v16; // eax
  int v17; // ecx
  int v18; // esi

  if ( !*(_BYTE *)(a1 + 0x64) )
  {
    if ( a6 == 1 )
    {
      v8 = *(Tile **)(a1 + 0x40);
      if ( v8 )
      {
        a3 = 1.0;
        Tile_SetFloat(v8, (_DWORD *)0xFA1, 1.0);
      }
      v9 = sub_5AE080(a2, a3);
      sub_5BDA20(a2, a3, v9);
      v11 = 0;
      if ( SaveLoad_CurrentSavegame )
      {
        v10 = (_DWORD *)SaveLoad_CurrentSavegame[1].unk01C[0];
        if ( v10 )
        {
          if ( *v10 )
            v11 = 1;
        }
      }
      sub_5B5B70(a2, a3, v11);
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
      if ( !OpenMenuTile || !Tile_GetParentMenu(OpenMenuTile) )
        sub_459400(SaveLoad_CurrentSavegame, v13);
    }
    else if ( a6 >= 0x65 )
    {
      v14 = *(int **)(a1 + 0x54);
      Float = Tile_GetFloat(a7, 0xFAE);
      v16 = Double_To_SInt32(a5);
      v17 = 0;
      if ( v14 )
      {
        while ( *v14 )
        {
          if ( v16 == v17 )
          {
            v18 = *v14;
            if ( v18 )
            {
              *(_DWORD *)(a1 + 0x4C) = v18;
              if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 )
              {
                *(_DWORD *)(a1 + 0x58) = a7;
                ShowUIMessageBox(
                  (char *)MessageButtonTextYes,
                  a2,
                  Float,
                  a4,
                  a5,
                  (const char *)dword_B38760,
                  (int)sub_5AECA0,
                  1,
                  (const char *)MessageButtonTextNo,
                  MessageButtonTextYes);
                *(_BYTE *)(a1 + 0x64) = 1;
              }
              else
              {
                if ( TESDataHandler_g_PlayerRef
                  && TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef)
                  && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead(
                        (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                        0) )
                {
                  ShowUIMessageBox(
                    (char *)MessageButtonTextYes,
                    a2,
                    Float,
                    a4,
                    a5,
                    (const char *)dword_B38780,
                    (int)LoadGameCallback,
                    2,
                    (const char *)MessageButtonTextNo,
                    MessageButtonTextYes);
                }
                else
                {
                  ShowUIMessageBox(
                    (char *)MessageButtonTextNo,
                    a2,
                    Float,
                    a4,
                    a5,
                    (const char *)dword_B38768,
                    (int)LoadGameCallback,
                    1,
                    (const char *)MessageButtonTextYes,
                    MessageButtonTextNo);
                }
                *(_BYTE *)(a1 + 0x64) = 1;
              }
            }
            return;
          }
          v14 = (int *)v14[1];
          ++v17;
          if ( !v14 )
            return;
        }
      }
    }
  }
}
