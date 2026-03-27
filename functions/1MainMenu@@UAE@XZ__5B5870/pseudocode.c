void __usercall MainMenu::~MainMenu(Menu *this@<ecx>, int a2@<edx>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  OSGlobals *v7; // eax
  char *sound; // esi
  int v9; // eax

  this->__vftable = (MenuVtbl *)&MainMenu::`vftable';
  v7 = OSGlobals;
  dword_B3B40C = 0;
  IsAtMainMenu = 0;
  sound = (char *)v7->sound;
  if ( sound )
  {
    sub_6A8D50(sound);
    if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0) )
      SoundManager_PlayMusic((int)sound, (int)this);
    if ( ObjectPtr )
    {
      v9 = *(_DWORD *)(ObjectPtr + 0x20);
      if ( v9 )
      {
        if ( v9 != 2 )
        {
          sub_6A9B40((int)sound);
          sub_6A8D00(sound);
        }
      }
    }
  }
  sub_459400(SaveLoad_CurrentSavegame, a2);
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk094) = 1;
  Menu::~Menu(this, a3, a4, a5);
}
