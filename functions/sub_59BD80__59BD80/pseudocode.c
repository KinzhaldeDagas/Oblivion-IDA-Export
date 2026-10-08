// [Controller decode 2026-07-09] Controls menu update/rebind capture. Displays current bindings, scans joystick 0 physical buttons before POV/D-pad virtual buttons, and writes joystick bindings through scheme 2.
//
// [Controller decode 2026-07-09] Central decoded PC controller/joystick/IsXBox summary is stored in IDB netnode "$ ControllerStuff"; full external doc is C:\src\OblivionIDA\ControllerStuff.md.
//
// [Controller decode 2026-07-09] Controller decode completion estimate stored in IDB netnode "$ ControllerStuff" sup 200. Current overall decoded PC Controller/IsXBox/Joystick knowledge is about 92%.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1065; metadata at sup 999; completion estimate at sup 200.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1067; metadata at sup 999; completion estimate at sup 200.
void __usercall ControlsMenu::UpdateBindingsAndCaptureRebind(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  char **v4; // eax
  char *v5; // eax
  _DWORD *i; // ebp
  Tile *v7; // edi
  int v8; // eax
  InputGlobal *input; // ecx
  int v10; // edx
  unsigned __int8 v11; // bl
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  char *m_data; // ebx
  _DWORD *v15; // ecx
  int v16; // eax
  Tile *v17; // ecx
  double Float; // st5
  char v19; // bp
  int v20; // eax
  UInt8 v21; // bp
  int v22; // eax
  int j; // edi
  int k; // ebx
  int JoystickPOVVirtualButton; // edi
  bool v26; // al
  int m; // edi
  int v28; // eax
  int v29; // edi
  int v30; // eax
  bool v31; // al
  char *v32; // ecx
  BSStringT v33; // [esp+20h] [ebp-18h] BYREF
  unsigned int v34; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 0xD4) ) /*0x59bdaf*/
  {
    v4 = *(char ***)(4 * *(_DWORD *)(a1 + 0x5C) + 0xB39548); /*0x59bdbf*/
    if ( v4 ) /*0x59bdc8*/
      v5 = *v4; /*0x59bdca*/
    else
      v5 = 0; /*0x59bdce*/
    Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB3, v5); /*0x59bdd9*/
    for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 0x34) + 0x34); i; v33.m_dataLen = 0 ) /*0x59bde6*/
    {
      v7 = (Tile *)i[2]; /*0x59bdf0*/
      i = (_DWORD *)*i; /*0x59bdf6*/
      Tile_GetFloat(v7, 0xFA8); /*0x59be00*/
      v8 = Double_To_SInt32(a3); /*0x59be05*/
      input = MEMORY[0xB33398]->input; /*0x59be10*/
      v10 = *(_DWORD *)(a1 + 0x5C); /*0x59be13*/
      v11 = *((_BYTE *)&input->mouseButtonPressTimestamps[6] + 0x1D * v10 + v8); /*0x59be20*/
      v33.m_data = 0; /*0x59be29*/
      v33.m_dataLen = 0; /*0x59be2d*/
      v33.m_bufLen = 0; /*0x59be32*/
      v34 = 0; /*0x59be3a*/
      if ( v11 != 0xFF ) /*0x59be3e*/
      {
        if ( !v10 && v11 < 0xEEu && (v12 = *(_DWORD **)(4 * v11 + 0xB39578)) != 0 /*0x59be90*/
          || v10 == 1 && v11 < 9u && (v12 = *(_DWORD **)(4 * v11 + 0xB39554)) != 0 )
        {
          BSStringT_Static_Format(&v33, "%s", *v12); /*0x59be73*/
          goto LABEL_23; /*0x59be73*/
        }
        if ( v10 != 2 ) /*0x59bea1*/
        {
          BSStringT_Static_Format(&v33, "%d", v11); /*0x59bf18*/
          goto LABEL_23; /*0x59bf18*/
        }
        if ( v11 < InputGlobals::GetJoystickButtonCount(input, 0) ) /*0x59beb6*/
        {
          BSStringT_Static_Format(&v33, "%s %d", stru_B38EB0.value, v11 + 1); /*0x59becc*/
          goto LABEL_23; /*0x59bed4*/
        }
        if ( (unsigned __int8)(v11 - 0x20) <= 7u ) /*0x59bedc*/
        {
          v13 = *(_DWORD **)(4 * v11 + 0xB398B0); /*0x59bede*/
          if ( v13 ) /*0x59bee7*/
          {
            BSStringT_Static_Format(&v33, "%s", *v13); /*0x59bef6*/
            goto LABEL_23; /*0x59bef6*/
          }
        }
      }
      BSStringT_Set(&v33, "--", 0); /*0x59be4a*/
LABEL_23:
      m_data = v33.m_data; /*0x59bf20*/
      Tile_SetString(v7, (_DWORD *)0xFB1, v33.m_data); /*0x59bf2c*/
      Tile_SetFloat(v7, 0xFC9u, fConstant_2); /*0x59bf42*/
      Tile_SetFloat(v7, 0xFCCu, flt_A6B1A0); /*0x59bf58*/
      Tile_SetFloat(v7, 0xFCDu, flt_A6B19C); /*0x59bf6e*/
      Tile_SetFloat(v7, 0xFCEu, flt_A6B198); /*0x59bf84*/
      v34 = 0xFFFFFFFF; /*0x59bf8a*/
      FormHeapFree((unsigned int)m_data); /*0x59bf92*/
      v33.m_data = 0; /*0x59bf9e*/
      v33.m_bufLen = 0; /*0x59bfa2*/
    }
    v15 = *(_DWORD **)(a1 + 4); /*0x59bfb2*/
    if ( iJoystickMoveLeftRight == 1 ) /*0x59bfbc*/
    {
      Tile_SetString(v15, (_DWORD *)0xFB0, (char *)stru_B38EC0.value); /*0x59bfc9*/
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, (char *)stru_B38EB8.value); /*0x59bfd5*/
    }
    else
    {
      Tile_SetString(v15, (_DWORD *)0xFB0, (char *)stru_B38EB8.value); /*0x59bfe3*/
      Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFB1, (char *)stru_B38EC0.value); /*0x59bff6*/
    }
    if ( *(_DWORD *)(a1 + 0xD8) ) /*0x59bffb*/
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFC9u, fConstant_2); /*0x59c01a*/
      Tile_SetFloat(*(Tile **)(a1 + 0x58), 0xFC9u, fConstant_2); /*0x59c031*/
      Tile_SetFloat(*(Tile **)(a1 + 0xD8), 0xFDDu, 0.0); /*0x59c047*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB1u, *(float *)(a1 + 0xDC)); /*0x59c05e*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB2u, *(float *)(a1 + 0xE0)); /*0x59c075*/
      Tile_SetFloat(*(Tile **)(a1 + 4), 0xFB2u, fConstant_2); /*0x59c08c*/
      *(_DWORD *)(a1 + 0xD8) = 0; /*0x59c091*/
    }
    *(_BYTE *)(a1 + 0xD4) = 0; /*0x59c09b*/
  }
  else
  {
    LOBYTE(v16) = InputGlobals::QueryMouseKeyState(MEMORY[0xB33398]->input, 0, 2u); /*0x59c0b1*/
    if ( v16 ) /*0x59c0b8*/
      *(_BYTE *)(a1 + 0xE4) = 0; /*0x59c0ba*/
  }
  v17 = *(Tile **)(a1 + 0xD8); /*0x59c0c1*/
  if ( v17 ) /*0x59c0c9*/
  {
    Tile_SetFloat(v17, 0xFDDu, 1.0); /*0x59c0da*/
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xD8), 0xFA8); /*0x59c0ea*/
    v19 = Double_To_SInt32(a3); /*0x59c0f4*/
    v20 = *(_DWORD *)(a1 + 0x5C); /*0x59c0f6*/
    v21 = v19 - 0xE; /*0x59c0f9*/
    if ( v20 ) /*0x59c0ff*/
    {
      v22 = v20 - 1; /*0x59c105*/
      if ( v22 ) /*0x59c108*/
      {
        if ( v22 == 1 ) /*0x59c111*/
        {
          for ( j = 0; !*(_BYTE *)(a1 + 0xD4); ++j ) /*0x59c119*/
          {
            if ( j >= InputGlobals::GetJoystickButtonCount(MEMORY[0xB33398]->input, 0) ) /*0x59c134*/
              break; /*0x59c134*/
            if ( InputGlobals::QueryJoystickButtonState(MEMORY[0xB33398]->input, 0, j, 1) ) /*0x59c143*/
            {
              *(_BYTE *)(a1 + 0xD4) = InputGlobal::RebindControl(MEMORY[0xB33398]->input, v21, 2u, j); /*0x59c160*/
              sub_57DE50(0xB); /*0x59c166*/
            }
          }
          for ( k = 0; !*(_BYTE *)(a1 + 0xD4); ++k ) /*0x59c17c*/
          {
            if ( k >= (int)InputGlobals::GetJoystickPOVControlCount(MEMORY[0xB33398]->input, 0) ) /*0x59c1a2*/
              break; /*0x59c1a2*/
            JoystickPOVVirtualButton = InputGlobals::GetJoystickPOVVirtualButton( /*0x59c1b4*/
                                         (DIDEVCAPS *)MEMORY[0xB33398]->input,
                                         0,
                                         k);
            v26 = JoystickPOVVirtualButton != 0xFFFFFFFF /*0x59c1e6*/
               && GetTickCount() >= dword_B3B0B4[0x76]
               && InputGlobal::RebindControl(MEMORY[0xB33398]->input, v21, 2u, JoystickPOVVirtualButton);
            *(_BYTE *)(a1 + 0xD4) = v26; /*0x59c1ea*/
            sub_57DE50(0xB); /*0x59c1f0*/
            if ( *(_BYTE *)(a1 + 0xD4) ) /*0x59c1f8*/
              dword_B3B0B4[0x76] = GetTickCount() + 0x64; /*0x59c20a*/
          }
          if ( InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 0x1D, 1) ) /*0x59c22c*/
          {
            *(_BYTE *)(a1 + 0xD4) = 1; /*0x59c23e*/
            InputGlobals::RebindControlMinimalChecks(MEMORY[0xB33398]->input, v21, 2u, 0xFFu); /*0x59c250*/
            sub_57DE50(0xB); /*0x59c257*/
          }
        }
      }
      else
      {
        for ( m = 0; !*(_BYTE *)(a1 + 0xD4); ++m ) /*0x59c275*/
        {
          if ( m >= sub_4031D0(&MEMORY[0xB33398]->input->flags) ) /*0x59c290*/
            break; /*0x59c290*/
          LOBYTE(v28) = InputGlobals::QueryMouseKeyState(MEMORY[0xB33398]->input, m, 1u); /*0x59c29e*/
          if ( v28 ) /*0x59c2a5*/
          {
            sub_57DE50(0xB); /*0x59c2a9*/
            *(_BYTE *)(a1 + 0xD4) = InputGlobal::RebindControl(MEMORY[0xB33398]->input, v21, 1u, m); /*0x59c2c2*/
          }
        }
        if ( InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 0x1D, 1) ) /*0x59c2e1*/
        {
          *(_BYTE *)(a1 + 0xD4) = 1; /*0x59c2ef*/
          InputGlobals::RebindControlMinimalChecks(MEMORY[0xB33398]->input, v21, 1u, 0xFFu); /*0x59c302*/
          sub_57DE50(0xB); /*0x59c309*/
        }
        if ( *(_BYTE *)(a1 + 0xD4) ) /*0x59c311*/
        {
          if ( m == 1 ) /*0x59c321*/
            *(_BYTE *)(a1 + 0xE4) = 1; /*0x59c327*/
        }
      }
    }
    else
    {
      v29 = 0; /*0x59c342*/
      while ( 1 ) /*0x59c34f*/
      {
        LOBYTE(v30) = InputGlobals::QueryKeyboardState(MEMORY[0xB33398]->input, v29, 1); /*0x59c34f*/
        if ( v30 ) /*0x59c356*/
          break; /*0x59c356*/
        if ( (++v29 & 0x100) != 0 ) /*0x59c361*/
          return; /*0x59c361*/
      }
      v31 = InputGlobal::RebindControl(MEMORY[0xB33398]->input, v21, 0, v29) || v29 == 1; /*0x59c396*/
      *(_BYTE *)(a1 + 0xD4) = v31; /*0x59c39d*/
      sub_57DE50(0xB); /*0x59c3a3*/
      if ( !*(_BYTE *)(a1 + 0xD4) ) /*0x59c3ab*/
        ShowUIMessageBox(v32, Float, a2, a3, (char *)stru_B38ED0.value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x59c3c7*/
    }
  }
}
