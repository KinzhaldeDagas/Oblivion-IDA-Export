ExtraSeenData *__thiscall ExtraSeenData::ExtraSeenData(ExtraSeenData *this)
{
  *((_BYTE *)this + 4) = 9;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraSeenData::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
