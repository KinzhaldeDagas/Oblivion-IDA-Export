void __thiscall IntSeenData::~IntSeenData(IntSeenData *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &IntSeenData::`vftable'; /*0x411fc8*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0xA); /*0x411fce*/
  if ( v2 ) /*0x411fdb*/
    (**v2)(v2, 1); /*0x411fe3*/
  *(_DWORD *)this = &SeenData::`vftable'; /*0x411fe5*/
}
