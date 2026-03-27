void __usercall sub_5BDCD0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESWorldSpace *CurrentWorldspace; // eax
  char *v5; // ecx
  DWORD (__stdcall *v6)(); // esi
  DWORD v7; // edi
  Tile *OpenMenuTile; // eax
  Tile *v9; // esi
  _DWORD *ParentMenu; // edi

  if ( sub_5DDCD0() )
  {
    if ( TES::GetCurrentWorldspace(TES) )
    {
      if ( !TES->currentInteriorCell
        && (CurrentWorldspace = TES::GetCurrentWorldspace(TES), sub_4EF2D0(CurrentWorldspace, 4))
        && byte_B02D70 )
      {
        ShowUIMessageBox(v5, a1, a2, a3, a4, (const char *)dword_B38C00, 0, 0, 0, 0);
        v6 = GetTickCount;
        v7 = GetTickCount() + 0x3E8;
        while ( v6() < v7 )
        {
          sub_5791A0(a1, a2, a3);
          sub_579220(a1, a2, a3, a4);
          sub_40D4D0((InputGlobal *)OSGlobals, a2, a3, a4);
        }
        sub_4EBAE0(a3, a4, a2, 1);
        sub_578DA0();
      }
      else
      {
        sub_4EBAE0(a3, a4, a2, 0);
      }
    }
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F5);
  v9 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
      {
        Tile_SetFloat(v9, (_DWORD *)0x1772, fConstant_2);
        sub_584740(ParentMenu, a2, a3);
      }
    }
  }
}
