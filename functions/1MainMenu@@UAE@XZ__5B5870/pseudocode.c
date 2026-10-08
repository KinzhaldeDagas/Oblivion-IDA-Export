void __usercall MainMenu::~MainMenu(Menu *this@<ecx>, int a2@<edx>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  OSGlobals *v6; // eax
  char *sound; // esi
  int v8; // eax

  this->__vftable = (MenuVtbl *)&MainMenu::`vftable'; /*0x5b5899*/
  v6 = MEMORY[0xB33398]; /*0x5b589f*/
  unk_B3B40C = 0; /*0x5b58a4*/
  MEMORY[0xB3C0EC] = 0; /*0x5b58ae*/
  sound = (char *)v6->sound; /*0x5b58b5*/
  if ( sound ) /*0x5b58c2*/
  {
    sub_6A8D50(sound); /*0x5b58c6*/
    if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0) ) /*0x5b58d6*/
      SoundManager_PlayMusic((int)sound, (int)this); /*0x5b58e1*/
    if ( MEMORY[0xB33428] ) /*0x5b58e6*/
    {
      v8 = *(_DWORD *)(MEMORY[0xB33428] + 0x20); /*0x5b58ef*/
      if ( v8 ) /*0x5b58f9*/
      {
        if ( v8 != 2 ) /*0x5b58fe*/
        {
          sub_6A9B40((int)sound); /*0x5b5902*/
          sub_6A8D00(sound); /*0x5b5909*/
        }
      }
    }
  }
  sub_459400(g_TESSaveLoadGame, a2); /*0x5b5914*/
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk094) = 1; /*0x5b5927*/
  Menu::~Menu(this, a3, a4, a5); /*0x5b5936*/
}
