double __usercall sub_5BDCD0@<st0>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double result@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        double a9@<st3>)
{
  TESWorldSpace *CurrentWorldspace; // eax
  char *v10; // ecx
  DWORD (__stdcall *v11)(); // esi
  DWORD v12; // edi
  Tile *OpenMenuTile; // eax
  Tile *v14; // esi
  _DWORD *ParentMenu; // edi

  if ( sub_5DDCD0() ) /*0x5bdcd2*/
  {
    if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x5bdce5*/
    {
      if ( !MEMORY[0xB333A0]->currentInteriorCell /*0x5bdd10*/
        && (CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]),
            TESWorldSpace_IsDistantLODModeEnabled(CurrentWorldspace, 4))
        && byte_B02D70 )
      {
        ShowUIMessageBox(v10, a2, a3, result, (char *)stru_B38C00, 0, 0, 0, 0); /*0x5bdd27*/
        v11 = GetTickCount; /*0x5bdd2c*/
        v12 = GetTickCount() + 0x3E8;           // ModernWindowsCompatible patch site: worldspace message delay records GetTickCount, then vanilla waits until absolute start+1000 target. /*0x5bdd37*/
        while ( v11() < v12 )                   // ModernWindowsCompatible decode: unsigned now >= target check skips the intended one-second pump when start+1000 wraps low. /*0x5bdd41*/
        {
          sub_5791A0(a1, a2, a3); /*0x5bdd43*/
          sub_579220(a1, a2, a3, result); /*0x5bdd48*/
          Input_CheckScreenshotHotkey((InputGlobal *)MEMORY[0xB33398], a2, a3, result, a5, a6, a7, a8, a9); /*0x5bdd53*/
        }
        sub_4EBAE0(a3, result, a2, 1);          // ModernWindowsCompatible continuation: after the delay loop, vanilla calls sub_4EBAE0(1) and sub_578DA0. /*0x5bdd60*/
        sub_578DA0(); /*0x5bdd68*/
      }
      else
      {
        sub_4EBAE0(a3, result, a2, 0); /*0x5bdd71*/
      }
    }
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F5); /*0x5bdd7e*/
  v14 = OpenMenuTile; /*0x5bdd83*/
  if ( OpenMenuTile ) /*0x5bdd8a*/
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5bdd93*/
    if ( ParentMenu ) /*0x5bdd97*/
    {
      if ( !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x5bdda9*/
      {
        result = fConstant_2; /*0x5bddaf*/
        Tile_SetFloat(v14, (_DWORD *)0x1772, fConstant_2); /*0x5bddc0*/
        Menu::StartFadeOut(ParentMenu, a3); /*0x5bddc9*/
      }
    }
  }
  return result; /*0x5bddc7*/
}
