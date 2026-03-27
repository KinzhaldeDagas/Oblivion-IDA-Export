ExtraRagDollData *__thiscall ExtraRagDollData::ExtraRagDollData(ExtraRagDollData *this)
{
  *((_BYTE *)this + 4) = 0x19;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraRagDollData::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
