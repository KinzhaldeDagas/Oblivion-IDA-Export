NiFlipController *__thiscall NiFlipController::NiFlipController(NiFlipController *this)
{
  sub_6EC180((NiTimeController *)this);
  *(_DWORD *)this = &NiFlipController::`vftable';
  sub_523DE0((_WORD *)this + 0x20, 1u, 1);
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  return this;
}
