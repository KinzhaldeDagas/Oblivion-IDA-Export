NiLight *__thiscall sub_73D370(char **this, _DWORD **a2)
{
  NiLight *v3; // eax
  NiLight *v4; // esi

  v3 = (NiLight *)FormHeapAlloc(0x128u);
  v4 = 0;
  if ( v3 )
    v4 = sub_73D160(v3);
  sub_73D210(this, (int)v4, a2);
  return v4;
}
