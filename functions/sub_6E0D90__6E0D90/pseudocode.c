NiTimeController *__thiscall sub_6E0D90(_WORD *this, int a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u);
  v4 = v3;
  if ( v3 )
  {
    sub_6ECC00(v3);
    v4->vtbl = (NiTimeControllerVtbl *)&NiLightColorController::`vftable';
    LOWORD(v4[1].members.super.m_uiRefCount) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6ECB60(v4, a2);
  LOWORD(v4[1].members.super.m_uiRefCount) = *(this + 0x20);
  return v4;
}
