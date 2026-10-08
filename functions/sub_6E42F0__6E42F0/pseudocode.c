NiExtraDataController *__thiscall sub_6E42F0(const char **this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x48u); /*0x6e4317*/
  v4 = v3; /*0x6e431c*/
  if ( v3 ) /*0x6e432f*/
  {
    NiExtraDataController::NiExtraDataController(v3); /*0x6e4333*/
    *(_DWORD *)v4 = &NiColorExtraDataController::`vftable'; /*0x6e4338*/
  }
  else
  {
    v4 = 0; /*0x6e4340*/
  }
  sub_75E410(this, (int)v4, a2); /*0x6e4352*/
  return v4; /*0x6e4359*/
}
