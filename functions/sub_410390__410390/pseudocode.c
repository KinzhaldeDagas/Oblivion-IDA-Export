// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Activate control 5 and Escape control 29 during load/message pumping.
char __cdecl Input_CheckLoadPumpControls(char a1)
{
  InputGlobal *input; // esi
  DWORD ExitCode; // [esp+4h] [ebp-20h] BYREF
  struct tagMSG Msg; // [esp+8h] [ebp-1Ch] BYREF

  while ( PeekMessageA((LPMSG)&Msg, 0, 0, 0, 1u) ) /*0x4103a7*/
  {
    TranslateMessage((const MSG *)&Msg); /*0x4103c5*/
    DispatchMessageA((const MSG *)&Msg); /*0x4103cc*/
  }
  if ( (int)renderer->member.device->lpVtbl->TestCooperativeLevel(renderer->member.device) >= 0 /*0x410430*/
    && !unk_B33426
    && (!InterfaceManager_GetSingleton(0, 1)
     || !MEMORY[0xB33428]
     || *(_DWORD *)(MEMORY[0xB33428] + 0x20) == 2
     || !Menu_GetOpenMenuTile(0x3E9)) )
  {
    if ( !a1 && !unk_B33425 ) /*0x41044a*/
      return 1; /*0x41044a*/
    input = MEMORY[0xB33398]->input; /*0x410452*/
    InputGlobals::PollAndUpdateInputState(input); /*0x410457*/
    if ( !InputGlobals::QueryControlState(input, 5, 1) && !InputGlobals::QueryControlState(input, 0x1D, 1) ) /*0x410471*/
      return 1; /*0x410480*/
    if ( MEMORY[0xB33434] ) /*0x410488*/
    {
      GetExitCodeThread(MEMORY[0xB33434], &ExitCode); /*0x410490*/
      if ( ExitCode == 0x103 ) /*0x4104a3*/
        unk_B33426 = 1; /*0x4104a5*/
    }
    InputGlobals::PollAndUpdateInputState(input); /*0x4104ae*/
  }
  return 0; /*0x41047c*/
}
