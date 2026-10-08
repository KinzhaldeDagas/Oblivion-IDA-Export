// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Activate 5 or Journal 15 trigger focused-menu shortcuts.
void __usercall Menu_UpdateActivateJournalShortcut(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  bool v5; // zf
  OSGlobals *v6; // eax

  v5 = InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 5, 1) == 0; /*0x598724*/
  v6 = MEMORY[0xB33398]; /*0x598726*/
  if ( (!v5 && v6->input->KeyboardInputControls[5] != 0x1C /*0x59876c*/
     || InputGlobals::QueryControlState(v6->input, 0xF, 1)
     && MEMORY[0xB33398]->input->KeyboardInputControls[0xF] != 0x1C)
    && InterfaceManager_MenuModeHasFocus(0x3F0)
    && !sub_579BC0() )
  {
    sub_5982A0(a2, a3); /*0x598775*/
  }
  if ( *(_BYTE *)(a1 + 0x61) && *(_BYTE *)(a1 + 0x64) ) /*0x598780*/
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFC7u, fConstant_2); /*0x598798*/
  else
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFC7u, 1.0); /*0x5987ad*/
}
