IOTask *__thiscall sub_438020(IOTask *this, unsigned __int8 a2)
{
  PlayerCharacter *v2; // edi

  v2 = TESDataHandler_g_PlayerRef;
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = v2;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  this->vtbl = &QueuedPlayer::`vftable';
  return this;
}
