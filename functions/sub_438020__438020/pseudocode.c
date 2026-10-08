IOTask *__thiscall sub_438020(IOTask *this, unsigned __int8 a2)
{
  PlayerCharacter *v2; // edi

  v2 = reference; /*0x438026*/
  sub_436500(this, a2); /*0x43802f*/
  *((_DWORD *)this + 6) = 0; /*0x438036*/
  *((_DWORD *)this + 7) = 0; /*0x438039*/
  *((_DWORD *)this + 8) = v2; /*0x43803c*/
  *((_DWORD *)this + 9) = 0; /*0x43803f*/
  *((_DWORD *)this + 0xA) = 0; /*0x438042*/
  *((_DWORD *)this + 0xB) = 0; /*0x438045*/
  *((_DWORD *)this + 0xC) = 0; /*0x438048*/
  *((_DWORD *)this + 0xE) = 0; /*0x43804b*/
  *((_DWORD *)this + 0xF) = 0; /*0x43804e*/
  this->vtbl = &QueuedPlayer::`vftable'; /*0x438052*/
  return this; /*0x438051*/
}
