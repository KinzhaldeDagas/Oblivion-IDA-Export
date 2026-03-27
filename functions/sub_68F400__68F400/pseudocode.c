bhkCharacterController *__thiscall sub_68F400(bhkCharacterController *this, int a2, int a3)
{
  bhkCharacterController::bhkCharacterController(this, a2);
  *(_DWORD *)this = &bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListenerSpell'};
  *((_DWORD *)this + 0x78) = &bhkCharacterListenerSpell::`vftable'{for `hkCharacterContext'};
  *((_DWORD *)this + 0x7C) = &bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListener'};
  *((_DWORD *)this + 0xF4) = a3;
  return this;
}
