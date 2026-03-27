int __thiscall sub_75AC80(signed __int16 *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x20u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysBoundUpdateModifier::`vftable';
    *(_WORD *)(v4 + 0x18) = 0;
    *(_WORD *)(v4 + 0x1A) = 0;
    *(_DWORD *)(v4 + 0x1C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40((const char **)this, v4, a2);
  sub_75A870(v4, *(this + 0xC));
  return v4;
}
