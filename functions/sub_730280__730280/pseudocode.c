unsigned int *__thiscall sub_730280(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u);
  v4 = (unsigned int *)v3;
  if ( v3 )
  {
    sub_721350(v3);
    *v4 = (unsigned int)&NiFloatsExtraData::`vftable';
    v4[4] = 0;
    v4[3] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7300D0(this, v4, a2);
  return v4;
}
