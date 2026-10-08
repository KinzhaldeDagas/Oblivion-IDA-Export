NiExtraDataController *__thiscall sub_6E2E00(const char **this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x50u); /*0x6e2e27*/
  v4 = v3; /*0x6e2e2c*/
  if ( v3 ) /*0x6e2e3f*/
  {
    NiExtraDataController::NiExtraDataController(v3); /*0x6e2e43*/
    *(_DWORD *)v4 = &NiFloatsExtraDataController::`vftable'; /*0x6e2e48*/
    *((_DWORD *)v4 + 0x12) = 0xFFFFFFFF; /*0x6e2e4e*/
    *((_DWORD *)v4 + 0x13) = 0; /*0x6e2e55*/
  }
  else
  {
    v4 = 0; /*0x6e2e5e*/
  }
  sub_75E410(this, (int)v4, a2); /*0x6e2e70*/
  *((_DWORD *)v4 + 0x12) = *(this + 0x12); /*0x6e2e78*/
  return v4; /*0x6e2e7d*/
}
