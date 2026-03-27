void __usercall SleepWaitMenu::~SleepWaitMenu(
        SleepWaitMenu *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  this->__ftable = (MenuVtbl *)&SleepWaitMenu::`vftable';
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    if ( byte_B3B72C )
      sub_679A70((int)&ActorProcessManager_ptr, a3, a4, a5);
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)ModelLoaderPtr + 2) + 0x38))(*((_DWORD *)ModelLoaderPtr + 2)) )
      byte_B3B72A = 1;
  }
  sub_572EC0(a3, a4, a5, a2, 1, 0);
  byte_B3B72B = 0;
  byte_B3B72C = 0;
  Menu::~Menu((Menu *)this, a3, a4, a5);
}
