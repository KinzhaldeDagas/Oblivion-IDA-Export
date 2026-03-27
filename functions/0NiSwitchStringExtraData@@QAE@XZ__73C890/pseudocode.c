NiSwitchStringExtraData *__thiscall NiSwitchStringExtraData::NiSwitchStringExtraData(
        NiSwitchStringExtraData *this,
        _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u);
  v4 = (unsigned int *)v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiSwitchStringExtraData::`vftable';
    v4[4] = 0;
    v4[3] = 0;
    v4[5] = 0xFFFFFFFF;
  }
  else
  {
    v4 = 0;
  }
  sub_73C630((char **)this, v4, a2);
  return (NiSwitchStringExtraData *)v4;
}
