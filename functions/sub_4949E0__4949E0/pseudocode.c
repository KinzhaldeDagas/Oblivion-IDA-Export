int __userpurge sub_4949E0@<eax>(
        char bp0@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int a5@<ebx>,
        int a6@<esi>,
        const char *a7,
        int a8,
        int a9)
{
  int result; // eax
  char v10; // bl
  OSGlobals *v11; // eax
  UInt32 mainThreadID; // esi
  int v13; // ecx
  const char *v14; // eax
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
  int v42; // [esp+8h] [ebp-20h]
  struct tagMSG Msg; // [esp+Ch] [ebp-1Ch] BYREF
  int v44; // [esp+30h] [ebp+8h]

  if ( bBlockMessageBoxes_MESSAGES )
  {
    LOBYTE(result) = 6;
    if ( (a9 & 0xF) == 2 )
      LOBYTE(result) = 5;
    return (char)result;
  }
  OsGlobalsTime::UpdatetimeInfo(&TimeInfo);
  v10 = a9 & 0xF;
  if ( !byte_B06B16
    || (v11 = OSGlobals) == 0
    || !v11->input
    || (mainThreadID = v11->mainThreadID, ((int (__cdecl *)(int, int))GetCurrentThreadId)(a6, a5) != mainThreadID) )
  {
    JUMPOUT(0x494E0B);
  }
  LOBYTE(v13) = 0;
  v42 = v10;
  byte_B06B16 = 0;
  LOBYTE(a9) = 0xFF;
  v44 = 0;
  if ( v10 == 2 )
  {
    v14 = (const char *)dword_B34DB4;
    v13 = dword_B34DBC;
    v44 = 3;
  }
  else if ( v10 == 3 || v10 == 4 )
  {
    v14 = (const char *)dword_B34D9C;
    v13 = sNoText;
  }
  else
  {
    v14 = (const char *)dword_B34DCC;
  }
  if ( !ShowUIMessageBox((int)a7, bp0, st5_0, st6_0, a4, a7, 0, v44, v14, v13) )
    JUMPOUT(0x494E02);
  input = OSGlobals->input;
  LOBYTE(a7) = sub_572DF0(2);
  sub_579930(bp0, st5_0, st6_0, a4);
  sub_572EC0(st5_0, st6_0, a4, bp0, 2, 1);
  v16 = PeekMessageA;
  v17 = (void (__stdcall *)(const MSG *))TranslateMessage;
  do
  {
    memset(&Msg, 0, sizeof(Msg));
    while ( v16((LPMSG)&Msg, 0, 0, 0, 1u) )
    {
      v17((const MSG *)&Msg);
      DispatchMessageA((const MSG *)&Msg);
    }
    window = OSGlobals->window;
    if ( GetActiveWindow() == window )
    {
      InputGlobals::PollAndUpdateInputState(input);
      switch ( v42 )
      {
        case 2:
          LOBYTE(v33) = InputGlobals::QueryKeyboardState(input, 0x1E, 1);
          if ( v33 || (LOBYTE(v34) = InputGlobals::QueryKeyboardState(input, 0x1E, 0), v34) )
          {
            LOBYTE(a9) = v44;
          }
          else
          {
            LOBYTE(v35) = InputGlobals::QueryKeyboardState(input, 0x13, 1);
            if ( v35 || (LOBYTE(v36) = InputGlobals::QueryKeyboardState(input, 0x13, 0), v36) )
            {
              LOBYTE(a9) = v44 + 1;
            }
            else
            {
              LOBYTE(v37) = InputGlobals::QueryKeyboardState(input, 0x17, 1);
              if ( v37 || (LOBYTE(v38) = InputGlobals::QueryKeyboardState(input, 0x17, 0), v38) )
                LOBYTE(a9) = v44 + 2;
            }
          }
          goto LABEL_49;
        case 3:
          LOBYTE(v23) = InputGlobals::QueryKeyboardState(input, 1, 1);
          if ( v23 || (LOBYTE(v24) = InputGlobals::QueryKeyboardState(input, 1, 0), v24) )
            LOBYTE(a9) = 2;
          break;
        case 4:
          break;
        default:
          LOBYTE(v19) = InputGlobals::QueryKeyboardState(input, 0x1C, 1);
          if ( !v19 )
          {
            LOBYTE(v20) = InputGlobals::QueryKeyboardState(input, 0x1C, 0);
            if ( !v20 )
            {
              LOBYTE(v21) = InputGlobals::QueryKeyboardState(input, 0x9C, 1);
              if ( !v21 )
              {
                LOBYTE(v22) = InputGlobals::QueryKeyboardState(input, 0x9C, 0);
                if ( !v22 )
                  goto LABEL_49;
              }
            }
          }
          goto LABEL_27;
      }
      LOBYTE(v25) = InputGlobals::QueryKeyboardState(input, 0x1C, 1);
      if ( !v25 )
      {
        LOBYTE(v26) = InputGlobals::QueryKeyboardState(input, 0x1C, 0);
        if ( !v26 )
        {
          LOBYTE(v27) = InputGlobals::QueryKeyboardState(input, 0x15, 1);
          if ( !v27 )
          {
            LOBYTE(v28) = InputGlobals::QueryKeyboardState(input, 0x15, 0);
            if ( !v28 )
            {
              LOBYTE(v29) = InputGlobals::QueryKeyboardState(input, 0x9C, 1);
              if ( !v29 )
              {
                LOBYTE(v30) = InputGlobals::QueryKeyboardState(input, 0x9C, 0);
                if ( !v30 )
                {
                  LOBYTE(v31) = InputGlobals::QueryKeyboardState(input, 0x31, 1);
                  if ( v31 || (LOBYTE(v32) = InputGlobals::QueryKeyboardState(input, 0x31, 0), v32) )
                    LOBYTE(a9) = 1;
                  goto LABEL_49;
                }
              }
            }
          }
        }
      }
LABEL_27:
      LOBYTE(a9) = 0;
LABEL_49:
      sub_5791A0((char)v17, st5_0, st6_0, a4);
      if ( (_BYTE)a9 == 0xFF )
      {
        sub_579970(st5_0, st6_0, a4);
        LOBYTE(a9) = sub_578D70((char)v17, st5_0, st6_0, a4);
      }
      else if ( (_BYTE)a9 != 2 || !InterfaceManager_GetSingleton(0, 1)->unk054[3] )
      {
        OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3E9);
        if ( OpenMenuTile )
          (**OpenMenuTile)(OpenMenuTile, 1);
        InputGlobals::FlushKeyboardBuffer(input);
      }
      sub_579220((char)v17, st5_0, st6_0, a4);
    }
    sub_579260(st5_0, st6_0, 0);
    sub_5792B0((char)v17, st5_0, st6_0, a4);
  }
  while ( (_BYTE)a9 == 0xFF );
  switch ( (char)a9 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      result = def_494D89(a7, v44, a9);
      break;
    default:
      JUMPOUT(0x494DCA);
  }
  return result;
}
