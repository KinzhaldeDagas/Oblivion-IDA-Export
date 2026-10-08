bhkCharacterController *__thiscall sub_68F400(bhkCharacterController *this, int a2, int a3)
{
  bhkCharacterController::bhkCharacterController(this, a2); /*0x68f408*/
  *(_DWORD *)this = &bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListenerSpell'}; /*0x68f411*/
  *((_DWORD *)this + 0x78) = &bhkCharacterListenerSpell::`vftable'{for `hkCharacterContext'}; /*0x68f417*/
  *((_DWORD *)this + 0x7C) = &bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListener'}; /*0x68f421*/
  *((_DWORD *)this + 0xF4) = a3; /*0x68f42b*/
  return this; /*0x68f433*/
}
