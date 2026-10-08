void __usercall SleepWaitMenu::~SleepWaitMenu(
        SleepWaitMenu *this@<ecx>,
        TESObjectREFR *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6@<ebx>,
        MobileObject *a7@<edi>)
{
  this->__ftable = (MenuVtbl *)&SleepWaitMenu::`vftable'; /*0x5d6988*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5d699c*/
  {
    if ( unk_B3B72C ) /*0x5d69a5*/
      sub_679A70((ActorProcessManager *)&qword_B3BB2C[0x75], a3, a4, a5, a6, a2, a7); /*0x5d69b2*/
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 2) + 0x38))(*((_DWORD *)MEMORY[0xB33A1C] + 2)) ) /*0x5d69c4*/
      unk_B3B72A = 1; /*0x5d69ca*/
  }
  sub_572EC0(a3, a4, a5, 1, 0); /*0x5d69db*/
  unk_B3B72B = 0; /*0x5d69e2*/
  unk_B3B72C = 0; /*0x5d69e9*/
  Menu::~Menu((Menu *)this, a3, a4, a5); /*0x5d69f8*/
}
