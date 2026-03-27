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
        const char *a10,
        char a11,
        const char *a12,
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

  byte_B131FC = 0xFF;
  sub_572EC0(st5_0, st6_0, Float, a1, 2, 1);
  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  v25 = &a13;
  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1),
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE),
        Float == fConstant_2) )
  {
    v14 = sub_5BC8B0(a1, st5_0, st6_0, Float, a10, (int)MissingContentCallback, a11, a12, &v25);
  }
  else
  {
    v14 = sub_5BCC00(a1, st5_0, st6_0, Float, a10, (int)MissingContentCallback, a11, a12, &v25);
  }
  if ( !v14 )
    return 0;
  result = byte_B131FC;
  if ( byte_B131FC == (char)0xFF )
  {
    v16 = (void (__stdcall *)(const MSG *))DispatchMessageA;
    v17 = PeekMessageA;
    v18 = TranslateMessage;
    do
    {
      memset(&Msg, 0, sizeof(Msg));
      while ( v17((LPMSG)&Msg, 0, 0, 0, 1u) )
      {
        v18((const MSG *)&Msg);
        v16((const MSG *)&Msg);
      }
      InputGlobals::PollAndUpdateInputState(OSGlobals->input);
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
        {
          v19 = InterfaceManager_GetSingleton(0, 1);
          sub_583E60(v19, a1, st5_0, st6_0);
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
        {
          v20 = InterfaceManager_GetSingleton(0, 1);
          sub_5821F0(v20, Float, st4_0, st5_0, st6_0, st3_0, a7, a8, a9);
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
        {
          v21 = InterfaceManager_GetSingleton(0, 1);
          sub_583F40(v21, a1, st5_0, st6_0, Float);
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
        {
          if ( !sub_40FDA0(v22) )
          {
            v23 = (int *)InterfaceManager_GetSingleton(0, 1);
            MiscPass(v23, st5_0, st6_0, 0);
          }
        }
      }
      if ( InterfaceManager_GetSingleton(0, 1) )
      {
        if ( InterfaceManager_GetSingleton(0, 1)->cursor )
          sub_40FDA0(v24);
      }
      result = byte_B131FC;
    }
    while ( byte_B131FC == (char)0xFF );
  }
  return result;
}
