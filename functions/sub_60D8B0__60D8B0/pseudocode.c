bhkCharacterController *__thiscall sub_60D8B0(bhkCharacterController *this, int a2, int a3)
{
  bhkCharacterController::bhkCharacterController(this, a2); /*0x60d8b8*/
  *(_DWORD *)this = &bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListenerArrow'}; /*0x60d8c1*/
  *((_DWORD *)this + 0x78) = &bhkCharacterListenerArrow::`vftable'{for `hkCharacterContext'}; /*0x60d8c7*/
  *((_DWORD *)this + 0x7C) = &bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListener'}; /*0x60d8d1*/
  *((_DWORD *)this + 0xF4) = a3; /*0x60d8db*/
  return this; /*0x60d8e3*/
}
