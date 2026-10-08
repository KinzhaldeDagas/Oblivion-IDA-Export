MainMenu *__thiscall MainMenu::MainMenu(MainMenu *this)
{
  bool v2; // al
  OSGlobals *v3; // ecx
  _DWORD *sound; // edi
  int v5; // eax

  Menu::Menu((Menu *)this); /*0x5b5f4a*/
  *(_DWORD *)this = &MainMenu::`vftable'; /*0x5b5f51*/
  unk_B3B40C = (int)this; /*0x5b5f57*/
  *((_DWORD *)this + 0xA) = 0; /*0x5b5f5d*/
  *((_DWORD *)this + 0xC) = 0; /*0x5b5f60*/
  *((_DWORD *)this + 0xD) = 0; /*0x5b5f63*/
  *((_DWORD *)this + 0xE) = 0; /*0x5b5f66*/
  *((_DWORD *)this + 0xF) = 0; /*0x5b5f69*/
  *((_DWORD *)this + 0x10) = 0; /*0x5b5f6c*/
  *((_DWORD *)this + 0x11) = 0; /*0x5b5f6f*/
  *((_BYTE *)this + 0x4D) = 0; /*0x5b5f72*/
  *((_BYTE *)this + 0x4C) = 0; /*0x5b5f75*/
  if ( MEMORY[0xB33428] ) /*0x5b5f78*/
  {
    v2 = *(_DWORD *)(MEMORY[0xB33428] + 0x20) != 0; /*0x5b5f8c*/
    unk_B3B408 = v2; /*0x5b5f91*/
    if ( v2 ) /*0x5b5f96*/
      goto LABEL_4; /*0x5b5f96*/
  }
  else
  {
    unk_B3B408 = 0; /*0x5b600c*/
  }
  unk_B3B408 = sub_410C40(off_B03094[0], 1);    // MenuPlease: patched call to sub_410C40 so MainMenu constructor does not start sMainMenuMovie / Map loop.bik. /*0x5b5fa8*/
LABEL_4:
  v3 = MEMORY[0xB33398]; /*0x5b5fad*/
  LOBYTE(qword_B3BB2C[0x170]) = 1; /*0x5b5fb3*/
  sound = v3->sound; /*0x5b5fba*/
  sub_6AC330(sound, 3); /*0x5b5fc1*/
  if ( sound ) /*0x5b5fc8*/
  {
    if ( !MEMORY[0xB33428] || (v5 = *(_DWORD *)(MEMORY[0xB33428] + 0x20)) == 0 || v5 == 2 ) /*0x5b5fe2*/
    {
      sub_6A8D50(sound); /*0x5b5fe6*/
      sub_5B5AC0(); /*0x5b5feb*/
    }
  }
  unk_B3B409 = 1; /*0x5b5ff0*/
  return this; /*0x5b5ff9*/
}
