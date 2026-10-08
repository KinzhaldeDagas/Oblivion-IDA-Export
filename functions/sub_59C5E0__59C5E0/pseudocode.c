// [Controller decode 2026-07-09] Controls menu action handler. Saves settings when dirty; action 7 toggles bInvertYValues, action 8 swaps joystick movement/look axis selector settings.
void __userpurge ControlsMenu::HandleAction(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        signed int a9,
        Tile *a10)
{
  double v11; // st4
  double Float; // st4
  OSGlobals *v13; // ecx
  unsigned __int8 **v14; // eax
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  unsigned __int8 v17; // al
  bool AvailableScheme; // al
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  char v23; // al
  float a2; // [esp+0h] [ebp-40h]
  BSStringT v25; // [esp+18h] [ebp-28h] BYREF
  unsigned __int8 v26[16]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v27; // [esp+3Ch] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0xD8) ) /*0x59c61a*/
  {
    switch ( a9 ) /*0x59c63d*/
    {
      case 1: /*0x59c63d*/
        if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE) == fConstant_2 ) /*0x59c65c*/
        {
          v11 = 1.0; /*0x59c65e*/
          goto LABEL_19; /*0x59c661*/
        }
        Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFB5); /*0x59c66e*/
        v13 = MEMORY[0xB33398]; /*0x59c679*/
        flt_B14EE8 = Float / fCostant_100 * dbl_A6B760 + dbl_A59B38; /*0x59c68b*/
        InputGlobals::SaveControlSettingsToINI((DIDEVCAPS *)v13->input); /*0x59c694*/
        goto LABEL_6; /*0x59c694*/
      case 7: /*0x59c63d*/
        sub_57DE50(3); /*0x59c7f6*/
        bInvertYValues = bInvertYValues == 0; /*0x59c80c*/
        v23 = sub_404E10(&bInvertYValues); /*0x59c812*/
        ControlsMenu::SetInvertYButtonLabel(a10, v23); /*0x59c81b*/
        break; /*0x59c81b*/
      case 8: /*0x59c63d*/
        sub_57DE50(3); /*0x59c7ab*/
        v19 = iJoystickMoveFrontBack; /*0x59c7bd*/
        iJoystickMoveFrontBack = iJoystickLookUpDown; /*0x59c7c1*/
        v20 = iJoystickMoveLeftRight; /*0x59c7c6*/
        iJoystickLookUpDown = v19; /*0x59c7cb*/
        v21 = v20; /*0x59c7d9*/
        v22 = iJoystickLookLeftRight; /*0x59c7de*/
        iJoystickLookLeftRight = v21; /*0x59c7e0*/
        iJoystickMoveLeftRight = v22; /*0x59c7e6*/
        *(_BYTE *)(a1 + 0xD4) = 1; /*0x59c7eb*/
        break; /*0x59c7f2*/
      case 9: /*0x59c63d*/
        sub_57DE50(1); /*0x59c78c*/
        v11 = fConstant_2; /*0x59c791*/
LABEL_19:
        a2 = v11; /*0x59c797*/
        Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAEu, a2); /*0x59c7a2*/
        break; /*0x59c7a7*/
      case 0xA: /*0x59c63d*/
        sub_57DE50(1); /*0x59c6aa*/
        v25.m_data = 0; /*0x59c6b2*/
        v25.m_dataLen = 0; /*0x59c6b6*/
        v25.m_bufLen = 0; /*0x59c6bb*/
        v14 = *(unsigned __int8 ***)(4 * *(_DWORD *)(a1 + 0x5C) + 0xB39548); /*0x59c6c3*/
        v27 = 0; /*0x59c6cc*/
        if ( v14 ) /*0x59c6d0*/
          v15 = *v14; /*0x59c6d2*/
        else
          v15 = 0; /*0x59c6d6*/
        v16 = v26; /*0x59c6d8*/
        do /*0x59c6ec*/
        {
          v17 = *v15; /*0x59c6e0*/
          *v16++ = *v15++; /*0x59c6e2*/
        }
        while ( v17 ); /*0x59c6ec*/
        _mbslwr(v26); /*0x59c6f3*/
        BSStringT_Static_Format(&v25, "%s %s %s?", stru_B38EF0.value, (const char *)v26, stru_B38EF8.value); /*0x59c714*/
        ShowUIMessageBox( /*0x59c733*/
          v25.m_data,
          st5_0,
          a3,
          a4,
          v25.m_data,
          (int)ControlsMenu::ConfirmResetDefaultsCallback,
          1,
          (char *)MEMORY[0xB38D00].value,
          (char)MEMORY[0xB38CF8].value);
        v27 = 0xFFFFFFFF; /*0x59c73f*/
        BSStringT_Clear((unsigned int *)&v25); /*0x59c747*/
        break; /*0x59c74c*/
      case 0xC: /*0x59c63d*/
      case 0xD: /*0x59c63d*/
        sub_57DE50(1); /*0x59c753*/
        if ( sub_587500(a9) == 0xB ) /*0x59c768*/
          AvailableScheme = ControlsMenu::SelectPreviousAvailableScheme((_DWORD *)a1); /*0x59c76a*/
        else
          AvailableScheme = ControlsMenu::SelectNextAvailableScheme((_DWORD *)a1); /*0x59c771*/
        if ( AvailableScheme ) /*0x59c778*/
        {
          *(_BYTE *)(a1 + 0xD4) = 1; /*0x59c77e*/
        }
        else
        {
LABEL_6:
          ControlsMenu_CloseOpenMenu(st5_0, a5, a6, a7, a8); /*0x59c699*/
          sub_5BD610(); /*0x59c69e*/
        }
        break; /*0x59c785*/
      default:
        break;
    }
    if ( a9 > 0xD && !*(_BYTE *)(a1 + 0xE4) ) /*0x59c825*/
      ControlsMenu::StartControlRebind((float *)a1, a10); /*0x59c830*/
  }
}
