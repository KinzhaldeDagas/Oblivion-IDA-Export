NiExtraDataController *__thiscall sub_6E2720(NiExtraDataController *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x13); /*0x6e2726*/
  *(_DWORD *)this = &NiFloatsExtraDataPoint3Controller::`vftable'; /*0x6e2727*/
  FormHeapFree(v4); /*0x6e272d*/
  NiExtraDataController::~NiExtraDataController(this); /*0x6e2737*/
  if ( (a2 & 1) != 0 ) /*0x6e2741*/
    FormHeapFree((unsigned int)this); /*0x6e2744*/
  return this; /*0x6e274e*/
}
