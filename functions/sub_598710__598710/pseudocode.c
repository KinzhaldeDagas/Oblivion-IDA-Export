void __usercall sub_598710(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>)
{
  bool v6; // zf
  OSGlobals *v7; // eax

  v6 = InputGlobals::QueryControlState(OSGlobals->input, 5, 1) == 0;
  v7 = OSGlobals;
  if ( (!v6 && v7->input->KeyboardInputControls[5] != 0x1C
     || InputGlobals::QueryControlState(v7->input, 0xF, 1) && OSGlobals->input->KeyboardInputControls[0xF] != 0x1C)
    && InterfaceManager_MenuModeHasFocus(0x3F0)
    && !sub_579BC0() )
  {
    sub_5982A0(a3, a4, a2);
  }
  if ( *(_BYTE *)(a1 + 0x61) && *(_BYTE *)(a1 + 0x64) )
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFC7, fConstant_2);
  else
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFC7, 1.0);
}
