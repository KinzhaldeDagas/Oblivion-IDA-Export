void __usercall DialogMenu::~DialogMenu(DialogMenu *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  OSGlobals *v6; // eax
  InterfaceManager *Singleton; // eax
  signed int a2; // [esp+0h] [ebp-20h]

  *(_DWORD *)this = &DialogMenu::`vftable';
  v6 = OSGlobals;
  if ( OSGlobals )
  {
    if ( !v6->quitGame && !v6->exitToMainMenu )
    {
      SetCameraFOV_0(g_worldScenegraph, g_DefaulFOV, 0.0);
      if ( TESDataHandler_g_PlayerRef )
        TogglePOV(TESDataHandler_g_PlayerRef, *((_BYTE *)this + 0x7C) == 0);
    }
  }
  if ( *((_DWORD *)this + 5) )
  {
    a2 = *((_DWORD *)this + 5);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_57CFE0((int)Singleton, st5_0, a3, a4, a2, 0);
  }
  FormHeapFree(*((_DWORD *)this + 0x23));
  *((_DWORD *)this + 0x23) = 0;
  *((_WORD *)this + 0x49) = 0;
  *((_WORD *)this + 0x48) = 0;
  Menu::~Menu((Menu *)this, st5_0, a3, a4);
}
