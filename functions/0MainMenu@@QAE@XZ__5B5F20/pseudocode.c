MainMenu *__thiscall MainMenu::MainMenu(MainMenu *this)
{
  bool v2; // al
  OSGlobals *v3; // ecx
  _DWORD *sound; // edi
  int v5; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &MainMenu::`vftable';
  dword_B3B40C = (int)this;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_BYTE *)this + 0x4D) = 0;
  *((_BYTE *)this + 0x4C) = 0;
  if ( ObjectPtr )
  {
    v2 = *(_DWORD *)(ObjectPtr + 0x20) != 0;
    byte_B3B408 = v2;
    if ( v2 )
      goto LABEL_4;
  }
  else
  {
    byte_B3B408 = 0;
  }
  byte_B3B408 = sub_410C40(off_B03094[0], 1);
LABEL_4:
  v3 = OSGlobals;
  IsAtMainMenu = 1;
  sound = v3->sound;
  sub_6AC330(sound, 3);
  if ( sound )
  {
    if ( !ObjectPtr || (v5 = *(_DWORD *)(ObjectPtr + 0x20)) == 0 || v5 == 2 )
    {
      sub_6A8D50(sound);
      sub_5B5AC0();
    }
  }
  byte_B3B409 = 1;
  return this;
}
