void __usercall sub_5DD340(double a1@<st2>, double a2@<st1>)
{
  int v3; // esi
  TESTopic *v4; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v6; // ebx
  char **v7; // edi
  Tile *OpenMenuTile; // eax
  Tile *v9; // esi
  _DWORD *ParentMenu; // edi
  double v11; // st7
  Tile *v12; // eax
  Tile *v13; // esi
  int v14; // edi
  float v15; // [esp+0h] [ebp-1Ch]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x404);
  v9 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v11 = fConstant_2;
      Tile_SetFloat(v9, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      v12 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      v13 = v12;
      if ( v12 )
      {
        v14 = Tile_GetParentMenu(v12);
        sub_58FBA0((int)v13, a1, a2, v11, 0);
        Tile_SetFloat(v13, (_DWORD *)0xFA1, fConstant_2);
        *(_BYTE *)(v14 + 0x96) = 1;
        v3 = v14;
        v4 = (TESTopic *)TESTopic::GEtTopic(5, 0xD);
        DialogueInfo = TESTopic::CreateDialogueInfo(
                         v4,
                         *(Actor **)(v14 + 0x60),
                         (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                         0,
                         0);
        v6 = DialogueInfo;
        if ( DialogueInfo )
        {
          if ( sub_6B7BA0(DialogueInfo) )
          {
            v7 = (char **)sub_6B7C20(v6);
            (*(void (__cdecl **)(_DWORD, char **))(**(_DWORD **)(v3 + 0x60) + 0x304))(0.0, v7);
            *(float *)(v3 + 0x84) = fConstant_2;
            *(_DWORD *)(v3 + 0x80) = 2;
            v15 = (float)((byte_B13200 != 0) + 1);
            Tile_SetFloat(*(Tile **)(v3 + 0x2C), (_DWORD *)0xFA1, v15);
            Tile_SetString(*(_DWORD **)(v3 + 0x2C), (_DWORD *)0xFDE, *v7);
            Tile_SetFloat(*(Tile **)(v3 + 0x3C), (_DWORD *)0xFA1, 1.0);
          }
          sub_6B81D0(v6->unk00);
          FormHeapFree((unsigned int)v6);
        }
      }
    }
  }
}
