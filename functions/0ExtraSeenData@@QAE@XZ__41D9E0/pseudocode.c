ExtraSeenData *__thiscall ExtraSeenData::ExtraSeenData(ExtraSeenData *this)
{
  *((_BYTE *)this + 4) = 9; /*0x41d9e4*/
  *((_DWORD *)this + 2) = 0; /*0x41d9e8*/
  *(_DWORD *)this = &ExtraSeenData::`vftable'; /*0x41d9eb*/
  *((_DWORD *)this + 3) = 0; /*0x41d9f1*/
  return this; /*0x41d9f4*/
}
