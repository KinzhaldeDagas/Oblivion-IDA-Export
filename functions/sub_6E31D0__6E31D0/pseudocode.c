NiExtraDataController *__thiscall sub_6E31D0(const char **this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x48u); /*0x6e31f7*/
  v4 = v3; /*0x6e31fc*/
  if ( v3 ) /*0x6e320f*/
  {
    NiExtraDataController::NiExtraDataController(v3); /*0x6e3213*/
    *(_DWORD *)v4 = &NiFloatExtraDataController::`vftable'; /*0x6e3218*/
  }
  else
  {
    v4 = 0; /*0x6e3220*/
  }
  sub_75E410(this, (int)v4, a2); /*0x6e3232*/
  return v4; /*0x6e3239*/
}
