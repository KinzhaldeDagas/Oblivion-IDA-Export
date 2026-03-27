NiExtraDataController *__thiscall sub_6E31D0(_DWORD *this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x48u);
  v4 = v3;
  if ( v3 )
  {
    NiExtraDataController::NiExtraDataController(v3);
    *(_DWORD *)v4 = &NiFloatExtraDataController::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_75E410(this, (int)v4, a2);
  return v4;
}
