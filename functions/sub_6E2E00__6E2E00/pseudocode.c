NiExtraDataController *__thiscall sub_6E2E00(_DWORD *this, _DWORD **a2)
{
  NiExtraDataController *v3; // eax
  NiExtraDataController *v4; // esi

  v3 = (NiExtraDataController *)FormHeapAlloc(0x50u);
  v4 = v3;
  if ( v3 )
  {
    NiExtraDataController::NiExtraDataController(v3);
    *(_DWORD *)v4 = &NiFloatsExtraDataController::`vftable';
    *((_DWORD *)v4 + 0x12) = 0xFFFFFFFF;
    *((_DWORD *)v4 + 0x13) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_75E410(this, (int)v4, a2);
  *((_DWORD *)v4 + 0x12) = *(this + 0x12);
  return v4;
}
