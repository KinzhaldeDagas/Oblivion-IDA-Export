void __thiscall ExtraSeenData::~ExtraSeenData(ExtraSeenData *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &ExtraSeenData::`vftable'; /*0x41da28*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x41da2e*/
  if ( v2 ) /*0x41da3b*/
    (**v2)(v2, 1); /*0x41da43*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x41da45*/
}
