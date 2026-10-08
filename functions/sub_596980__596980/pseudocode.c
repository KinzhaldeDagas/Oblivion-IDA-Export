char __thiscall ClassMenu_HandleKeyboardShortcut(void *this, int a2, int a3)
{
  int v4; // edi
  InterfaceManager *Singleton; // eax

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x34))(this); /*0x59698b*/
  if ( sub_578FE0() == v4 ) /*0x596994*/
  {
    switch ( a2 ) /*0x59699d*/
    {
      case 9: /*0x59699d*/
        Singleton = InterfaceManager_GetSingleton(0, 0); /*0x5969d5*/
        (*(void (__thiscall **)(void *, int, Tile *))(*(_DWORD *)this + 0xC))(this, 0x63, Singleton->altActiveTile); /*0x5969ed*/
        return 1; /*0x5969f3*/
      case 0xA: /*0x59699d*/
        (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0xC))(this, 4, 0); /*0x5969c8*/
        return 1; /*0x5969ce*/
      case 0xB: /*0x59699d*/
        (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 0xC))(this, 5, 0);// Keyboard shortcut 0xB dispatches ClassMenu button 5, sharing the native overall-cancel/close path. /*0x5969b4*/
        return 1; /*0x5969ba*/
    }
  }
  return 0; /*0x5969b6*/
}
