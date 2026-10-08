char __usercall sub_579CF0@<al>(
        char a1@<bpl>,
        double Float@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st3_0@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        char *a10,
        char a11,
        char *a12,
        char a13)
{
  InterfaceManager *Singleton; // eax
  char v14; // al
  char result; // al
  void (__stdcall *v16)(const MSG *); // ebx
  BOOL (__stdcall *v17)(LPMSG, HWND, UINT, UINT, UINT); // esi
  BOOL (__stdcall *v18)(const MSG *); // edi
  InterfaceManager *v19; // eax
  InterfaceManager *v20; // eax
  InterfaceManager *v21; // eax
  void *v22; // ecx
  int *v23; // eax
  void *v24; // ecx
  char *v25; // [esp+0h] [ebp-20h] BYREF
  struct tagMSG Msg; // [esp+4h] [ebp-1Ch] BYREF

  byte_B131FC = 0xFF; /*0x579cfd*/
  sub_572EC0(st5_0, st6_0, Float, a1, 2, 1); /*0x579d04*/
  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x579d0d*/
    return 0; /*0x579d0d*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579d29*/
    return 0; /*0x579d29*/
  v25 = &a13; /*0x579d3b*/
  if ( InterfaceManager_GetSingleton(0, 1) /*0x579d95*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1),
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE),
        Float == fConstant_2) )
  {
    v14 = sub_5BC8B0(st5_0, st6_0, Float, a10, (int)MissingContentCallback, a11, a12, &v25); /*0x579daf*/
  }
  else
  {
    v14 = sub_5BCC00(st5_0, st6_0, Float, a10, (int)MissingContentCallback, a11, a12, &v25); /*0x579dce*/
  }
  if ( !v14 ) /*0x579dd8*/
    return 0; /*0x579f79*/
  result = byte_B131FC; /*0x579dde*/
  if ( byte_B131FC == (char)0xFF ) /*0x579de5*/
  {
    v16 = (void (__stdcall *)(const MSG *))DispatchMessageA; /*0x579dec*/
    v17 = PeekMessageA; /*0x579df3*/
    v18 = TranslateMessage; /*0x579dfa*/
    do /*0x579f6c*/
    {
      memset(&Msg, 0, sizeof(Msg)); /*0x579e07*/
      while ( v17((LPMSG)&Msg, 0, 0, 0, 1u) ) /*0x579e28*/
      {
        v18((const MSG *)&Msg); /*0x579e35*/
        v16((const MSG *)&Msg); /*0x579e3c*/
      }
      InputGlobals::PollAndUpdateInputState(MEMORY[0xB33398]->input); /*0x579e5a*/
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579e63*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579e7b*/
        {
          v19 = InterfaceManager_GetSingleton(0, 1); /*0x579e85*/
          sub_583E60(v19, a1, st5_0, st6_0, st4_0); /*0x579e8f*/
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579e98*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579eb0*/
        {
          v20 = InterfaceManager_GetSingleton(0, 1); /*0x579eba*/
          InterfaceManager_ProcessGlobalHotkeys(v20, Float, st4_0, st5_0, st6_0, st3_0, a7, a8, a9); /*0x579ec4*/
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579ecd*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579ee5*/
        {
          v21 = InterfaceManager_GetSingleton(0, 1); /*0x579eef*/
          InterfaceManager::UpdateMenuFades(v21, a1, st5_0, st6_0, Float); /*0x579ef9*/
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579f02*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579f1a*/
        {
          if ( !sub_40FDA0(v22) ) /*0x579f20*/
          {
            v23 = (int *)InterfaceManager_GetSingleton(0, 1); /*0x579f2f*/
            MiscPass(v23, st5_0, st6_0, 0); /*0x579f39*/
          }
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579f42*/
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579f5a*/
          sub_40FDA0(v24); /*0x579f60*/
      }
      result = byte_B131FC; /*0x579f65*/
    }
    while ( byte_B131FC == (char)0xFF ); /*0x579f6c*/
  }
  return result; /*0x579f75*/
}
