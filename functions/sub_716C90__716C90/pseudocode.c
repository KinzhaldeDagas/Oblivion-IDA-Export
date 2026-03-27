unsigned int *__thiscall sub_716C90(char **this, _DWORD **a2)
{
  unsigned int *v3; // eax
  unsigned int *v4; // esi

  v3 = (unsigned int *)FormHeapAlloc(0x10u);
  v4 = v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiStringExtraData::`vftable';
    v4[3] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_716AC0(this, v4, a2);
  return v4;
}
