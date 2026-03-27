unsigned int *__thiscall sub_7309C0(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u);
  v4 = (unsigned int *)v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiIntegerExtraData::`vftable';
    v4[3] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0(this, v4, a2);
  v4[3] = (unsigned int)*(this + 3);
  return v4;
}
