void __usercall DialogMenu::~DialogMenu(DialogMenu *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  OSGlobals *v5; // eax
  InterfaceManager *Singleton; // eax
  signed int a2; // [esp+0h] [ebp-20h]

  *(_DWORD *)this = &DialogMenu::`vftable'; /*0x59e5a8*/
  v5 = MEMORY[0xB33398]; /*0x59e5ae*/
  if ( MEMORY[0xB33398] ) /*0x59e5ae*/
  {
    if ( !v5->quitGame && !v5->exitToMainMenu ) /*0x59e5c4*/
    {
      SetCameraFOV_0((SceneGraph *)g_WorldSceneReceiverRoot, g_DefaulFOV, 0.0); /*0x59e5dc*/
      if ( reference ) /*0x59e5e1*/
        TogglePOV(reference, *((_BYTE *)this + 0x7C) == 0); /*0x59e5f3*/
    }
  }
  if ( *((_DWORD *)this + 5) ) /*0x59e5f8*/
  {
    a2 = *((_DWORD *)this + 5); /*0x59e601*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59e606*/
    sub_57CFE0((int)Singleton, st5_0, a3, a4, a2, 0); /*0x59e610*/
  }
  FormHeapFree(*((_DWORD *)this + 0x23)); /*0x59e61c*/
  *((_DWORD *)this + 0x23) = 0; /*0x59e626*/
  *((_WORD *)this + 0x49) = 0; /*0x59e630*/
  *((_WORD *)this + 0x48) = 0; /*0x59e639*/
  Menu::~Menu((Menu *)this, st5_0, a3, a4); /*0x59e64a*/
}
