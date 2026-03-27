int __thiscall sub_75BE50(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x20u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysAgeDeathModifier::`vftable';
    *(_BYTE *)(v4 + 0x18) = 0;
    *(_DWORD *)(v4 + 0x1C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  *(_BYTE *)(v4 + 0x18) = *((_BYTE *)this + 0x18);
  return v4;
}
