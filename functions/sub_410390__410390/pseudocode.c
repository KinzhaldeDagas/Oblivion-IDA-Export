char __cdecl sub_410390(char a1)
{
  InputGlobal *input; // esi
  DWORD ExitCode; // [esp+4h] [ebp-20h] BYREF
  struct tagMSG Msg; // [esp+8h] [ebp-1Ch] BYREF

  while ( PeekMessageA((LPMSG)&Msg, 0, 0, 0, 1u) )
  {
    TranslateMessage((const MSG *)&Msg);
    DispatchMessageA((const MSG *)&Msg);
  }
  if ( (int)g_Renderer->member.device->lpVtbl->TestCooperativeLevel(g_Renderer->member.device) >= 0
    && !byte_B33426
    && (!InterfaceManager_GetSingleton(0, 1)
     || !ObjectPtr
     || *(_DWORD *)(ObjectPtr + 0x20) == 2
     || !Menu_GetOpenMenuTile(0x3E9)) )
  {
    if ( !a1 && !byte_B33425 )
      return 1;
    input = OSGlobals->input;
    InputGlobals::PollAndUpdateInputState(input);
    if ( !InputGlobals::QueryControlState(input, 5, 1) && !InputGlobals::QueryControlState(input, 0x1D, 1) )
      return 1;
    if ( hHandle )
    {
      GetExitCodeThread(hHandle, &ExitCode);
      if ( ExitCode == 0x103 )
        byte_B33426 = 1;
    }
    InputGlobals::PollAndUpdateInputState(input);
  }
  return 0;
}
