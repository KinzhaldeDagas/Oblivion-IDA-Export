void __thiscall sub_889BF0(_DWORD *this, char a2)
{
  int v3; // eax

  if ( a2 ) /*0x889bf8*/
  {
    v3 = *(this + 3); /*0x889bfa*/
    if ( v3 ) /*0x889bff*/
    {
      if ( v3 != 0xA0 ) /*0x889c09*/
        (**(void (__thiscall ***)(int, int))(v3 - 0xA0))(v3 - 0xA0, 1); /*0x889c11*/
    }
    *(this + 3) = 0; /*0x889c13*/
  }
}
