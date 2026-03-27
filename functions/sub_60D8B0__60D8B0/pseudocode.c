bhkCharacterController *__thiscall sub_60D8B0(bhkCharacterController *this, int a2, int a3)
{
  bhkCharacterController::bhkCharacterController(this, a2);
  *(_DWORD *)this = &bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListenerArrow'};
  *((_DWORD *)this + 0x78) = &bhkCharacterListenerArrow::`vftable'{for `hkCharacterContext'};
  *((_DWORD *)this + 0x7C) = &bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListener'};
  *((_DWORD *)this + 0xF4) = a3;
  return this;
}
