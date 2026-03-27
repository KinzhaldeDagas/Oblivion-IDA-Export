void __thiscall ExtraSeenData::~ExtraSeenData(ExtraSeenData *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &ExtraSeenData::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  if ( v2 )
    (**v2)(v2, 1);
  *(_DWORD *)this = &BSExtraData::`vftable';
}
