void __thiscall IntSeenData::~IntSeenData(IntSeenData *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &IntSeenData::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0xA);
  if ( v2 )
    (**v2)(v2, 1);
  *(_DWORD *)this = &SeenData::`vftable';
}
