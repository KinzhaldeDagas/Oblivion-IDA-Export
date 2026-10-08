NiExtraDataController *__thiscall sub_6E29A0(const char **this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x50u); /*0x6e29c7*/
  v4 = v3; /*0x6e29cc*/
  if ( v3 ) /*0x6e29df*/
  {
    NiExtraDataController::NiExtraDataController(v3); /*0x6e29e3*/
    *(_DWORD *)v4 = &NiFloatsExtraDataPoint3Controller::`vftable'; /*0x6e29e8*/
    *((_DWORD *)v4 + 0x12) = 0xFFFFFFFF; /*0x6e29ee*/
    *((_DWORD *)v4 + 0x13) = 0; /*0x6e29f5*/
  }
  else
  {
    v4 = 0; /*0x6e29fe*/
  }
  sub_75E410(this, (int)v4, a2); /*0x6e2a10*/
  *((_DWORD *)v4 + 0x12) = *(this + 0x12); /*0x6e2a18*/
  return v4; /*0x6e2a1d*/
}
