int __userpurge sub_4949E0@<eax>(
        char bp0@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int a5@<ebx>,
        int a6@<esi>,
        char *a7,
        int a8,
        int a9)
{
  int result; // eax
  char v10; // bl
  OSGlobals *v11; // eax
  UInt32 mainThreadID; // esi
  int v13; // ecx
  char *v14; // eax
  InputGlobal *input; // esi
  BOOL (__stdcall *v16)(LPMSG, HWND, UINT, UINT, UINT); // ebx
  void (__stdcall *v17)(const MSG *); // ebp
  HWND window; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  int v43; // [esp+8h] [ebp-20h]
  struct tagMSG Msg; // [esp+Ch] [ebp-1Ch] BYREF
  char v45; // [esp+2Ch] [ebp+4h]
  int v46; // [esp+30h] [ebp+8h]

  if ( bBlockMessageBoxes_MESSAGES ) /*0x4949e3*/
  {
    LOBYTE(result) = 6; /*0x494a01*/
    if ( (a9 & 0xF) == 2 ) /*0x494a03*/
      LOBYTE(result) = 5; /*0x494a05*/
    return (char)result; /*0x494a0e*/
  }
  OsGlobalsTime::UpdatetimeInfo(MEMORY[0xB33E90]); /*0x494a18*/
  v10 = a9 & 0xF; /*0x494a21*/
  if ( !byte_B06B16 /*0x494a53*/
    || (v11 = MEMORY[0xB33398]) == 0
    || !v11->input
    || (mainThreadID = v11->mainThreadID, ((int (__cdecl *)(int, int))GetCurrentThreadId)(a6, a5) != mainThreadID) )
  {
    JUMPOUT(0x494E0B); /*0x494e0b*/
  }
  LOBYTE(v13) = 0; /*0x494a5c*/
  v43 = v10; /*0x494a60*/
  byte_B06B16 = 0; /*0x494a67*/
  LOBYTE(a9) = 0xFF; /*0x494a6e*/
  v46 = 0; /*0x494a73*/
  if ( v10 == 2 ) /*0x494a7b*/
  {
    v14 = *(char **)&MEMORY[0xB33E90][0xF24]; /*0x494aa1*/
    v13 = *(_DWORD *)&MEMORY[0xB33E90][0xF2C]; /*0x494aa6*/
    v46 = 3; /*0x494ab2*/
  }
  else if ( v10 == 3 || v10 == 4 ) /*0x494a85*/
  {
    v14 = *(char **)&MEMORY[0xB33E90][0xF0C]; /*0x494a94*/
    v13 = *(_DWORD *)&MEMORY[0xB33E90][0xF14]; /*0x494a99*/
  }
  else
  {
    v14 = *(char **)&MEMORY[0xB33E90][0xF3C]; /*0x494a87*/
  }
  if ( !ShowUIMessageBox(a7, st5_0, st6_0, a4, a7, 0, v46, v14, v13) ) /*0x494ad5*/
    JUMPOUT(0x494E02); /*0x494e02*/
  input = MEMORY[0xB33398]->input; /*0x494ae7*/
  v45 = sub_572DF0(2); /*0x494af2*/
  sub_579930(st5_0, st6_0, a4); /*0x494af6*/
  sub_572EC0(st5_0, st6_0, a4, bp0, 2, 1); /*0x494b05*/
  v16 = PeekMessageA; /*0x494b0a*/
  v17 = (void (__stdcall *)(const MSG *))TranslateMessage; /*0x494b10*/
  do /*0x494d78*/
  {
    memset(&Msg, 0, sizeof(Msg)); /*0x494b1d*/
    while ( v16((LPMSG)&Msg, 0, 0, 0, 1u) ) /*0x494b3e*/
    {
      v17((const MSG *)&Msg); /*0x494b49*/
      DispatchMessageA((const MSG *)&Msg); /*0x494b50*/
    }
    window = MEMORY[0xB33398]->window; /*0x494b6f*/
    if ( GetActiveWindow() == window ) /*0x494b7a*/
    {
      InputGlobals::PollAndUpdateInputState(input); /*0x494b82*/
      switch ( v43 ) /*0x494b8e*/
      {
        case 2: /*0x494b8e*/
          LOBYTE(v33) = InputGlobals::QueryKeyboardState(input, 0x1E, 1); /*0x494c99*/
          if ( v33 || (LOBYTE(v34) = InputGlobals::QueryKeyboardState(input, 0x1E, 0), v34) ) /*0x494cae*/
          {
            LOBYTE(a9) = v46; /*0x494d06*/
          }
          else
          {
            LOBYTE(v35) = InputGlobals::QueryKeyboardState(input, 0x13, 1); /*0x494cb6*/
            if ( v35 || (LOBYTE(v36) = InputGlobals::QueryKeyboardState(input, 0x13, 0), v36) ) /*0x494ccb*/
            {
              LOBYTE(a9) = v46 + 1; /*0x494cfc*/
            }
            else
            {
              LOBYTE(v37) = InputGlobals::QueryKeyboardState(input, 0x17, 1); /*0x494cd3*/
              if ( v37 || (LOBYTE(v38) = InputGlobals::QueryKeyboardState(input, 0x17, 0), v38) ) /*0x494ce8*/
                LOBYTE(a9) = v46 + 2; /*0x494cf0*/
            }
          }
          goto LABEL_49; /*0x494cf4*/
        case 3: /*0x494b8e*/
          LOBYTE(v23) = InputGlobals::QueryKeyboardState(input, 1, 1); /*0x494bf2*/
          if ( v23 || (LOBYTE(v24) = InputGlobals::QueryKeyboardState(input, 1, 0), v24) ) /*0x494c07*/
            LOBYTE(a9) = 2; /*0x494c09*/
          break;
        case 4: /*0x494b8e*/
          break;
        default:
          LOBYTE(v19) = InputGlobals::QueryKeyboardState(input, 0x1C, 1); /*0x494ba4*/
          if ( !v19 ) /*0x494bab*/
          {
            LOBYTE(v20) = InputGlobals::QueryKeyboardState(input, 0x1C, 0); /*0x494bb2*/
            if ( !v20 ) /*0x494bb9*/
            {
              LOBYTE(v21) = InputGlobals::QueryKeyboardState(input, 0x9C, 1); /*0x494bc4*/
              if ( !v21 ) /*0x494bcb*/
              {
                LOBYTE(v22) = InputGlobals::QueryKeyboardState(input, 0x9C, 0); /*0x494bd5*/
                if ( !v22 ) /*0x494bdc*/
                  goto LABEL_49; /*0x494bdc*/
              }
            }
          }
          goto LABEL_27; /*0x494bdc*/
      }
      LOBYTE(v25) = InputGlobals::QueryKeyboardState(input, 0x1C, 1); /*0x494c14*/
      if ( !v25 ) /*0x494c1b*/
      {
        LOBYTE(v26) = InputGlobals::QueryKeyboardState(input, 0x1C, 0); /*0x494c22*/
        if ( !v26 ) /*0x494c29*/
        {
          LOBYTE(v27) = InputGlobals::QueryKeyboardState(input, 0x15, 1); /*0x494c31*/
          if ( !v27 ) /*0x494c38*/
          {
            LOBYTE(v28) = InputGlobals::QueryKeyboardState(input, 0x15, 0); /*0x494c3f*/
            if ( !v28 ) /*0x494c46*/
            {
              LOBYTE(v29) = InputGlobals::QueryKeyboardState(input, 0x9C, 1); /*0x494c51*/
              if ( !v29 ) /*0x494c58*/
              {
                LOBYTE(v30) = InputGlobals::QueryKeyboardState(input, 0x9C, 0); /*0x494c62*/
                if ( !v30 ) /*0x494c69*/
                {
                  LOBYTE(v31) = InputGlobals::QueryKeyboardState(input, 0x31, 1); /*0x494c75*/
                  if ( v31 || (LOBYTE(v32) = InputGlobals::QueryKeyboardState(input, 0x31, 0), v32) ) /*0x494c8a*/
                    LOBYTE(a9) = 1; /*0x494c8c*/
                  goto LABEL_49; /*0x494c91*/
                }
              }
            }
          }
        }
      }
LABEL_27:
      LOBYTE(a9) = 0; /*0x494be2*/
LABEL_49:
      sub_5791A0((char)v17, st5_0, st6_0); /*0x494d0a*/
      if ( (_BYTE)a9 == 0xFF ) /*0x494d15*/
      {
        InterfaceManager_UpdateMessageMenuCursorClick(a4); /*0x494d17*/
        LOBYTE(a9) = sub_578D70(); /*0x494d21*/
      }
      else if ( (_BYTE)a9 != 2 || !InterfaceManager_GetSingleton(0, 1)->unk054[3] ) /*0x494d37*/
      {
        OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3E9); /*0x494d42*/
        if ( OpenMenuTile ) /*0x494d4c*/
          (**OpenMenuTile)(OpenMenuTile, 1); /*0x494d56*/
        InputGlobals::FlushKeyboardBuffer(input); /*0x494d5a*/
      }
      sub_579220((char)v17, st5_0, st6_0, a4); /*0x494d5f*/
    }
    sub_579260(st5_0, st6_0, 0); /*0x494d64*/
    sub_5792B0(); /*0x494d6e*/
  }
  while ( (_BYTE)a9 == 0xFF ); /*0x494d78*/
  switch ( (char)a9 ) /*0x494d89*/
  {
    case 0: /*0x494d89*/
    case 1: /*0x494d89*/
    case 2: /*0x494d89*/
    case 3: /*0x494d89*/
    case 4: /*0x494d89*/
    case 5: /*0x494d89*/
      result = def_494D89(bp0, st5_0, st6_0, a4, v45, v46, a9); /*0x494d98*/
      break; /*0x494d98*/
    default:
      JUMPOUT(0x494DCA); /*0x494dca*/
  }
  return result; /*0x494a0a*/
}
