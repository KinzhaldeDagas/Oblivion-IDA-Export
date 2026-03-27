NiExtraDataController *__thiscall sub_6E2720(NiExtraDataController *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x13);
  *(_DWORD *)this = &NiFloatsExtraDataPoint3Controller::`vftable';
  FormHeapFree(v4);
  NiExtraDataController::~NiExtraDataController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
