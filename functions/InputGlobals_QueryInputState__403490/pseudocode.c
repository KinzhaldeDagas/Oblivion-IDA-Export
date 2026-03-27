bool __thiscall InputGlobals::QueryInputState(InputGlobal *this, int scheme, unsigned __int8 keycode, int query)
{
  if ( !scheme )
    return InputGlobals::QueryKeyboardState(this, keycode, query);
  if ( scheme == 1 )
    return InputGlobals::QueryMouseKeyState(this, keycode, query);
  if ( scheme == 0xFF || scheme - 2 >= (signed int)this->numJoysticks )
    return 0;
  if ( keycode >= 0x20u )
    return sub_403070((DIDEVCAPS *)this, scheme - 2, 0) == keycode;
  return InputGlobals::QueryJoystickButtonState(this, scheme - 2, keycode, query);
}
